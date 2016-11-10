# 概述

该程序可以对直流电动机进行简单的控制，包括速度调节、方向控制等。通过该程序，你也可以确定电动机的正负极。
# 硬件要求

我使用的硬件如下：

- L293D 4WD驱动板
- 直流减速电动机4个(12V, 366rpm)
- Arduino Mega 2560
- 杜邦线若干

# 引脚连接

将电机驱动板L293D和Arduino板的相应接口(数字一一对应)通过杜邦线连接起来，具体针脚连接方式如下：

如果只想使用直流/步进电机应该连接以下引脚：

- 数字端口11：直流电机#1/步进#1（PWM）
- 数字端口 3：直流电机#2/步进#1（PWM）
- 数字端口 5：直流电机#3/步进#2（PWM）
- 数字端口 6：直流电机#4/步进#2（PWM）

如果要控制直流/步进电机应该增加以下引脚：

- 数字引脚4：DIR CLK触发
- 数字引脚7：DIR EN指令的允许端EN
- 数字引脚8：DIR SER
- 数字引脚12：DIR ATCH中断连接

另外，GND、5V引脚必须也要连接，否则的话就无法稳定地控制直流电动机。

具体接线图如下所示：

![circuit](Test_DC_motor\circuit_diagram\L293D_bb.png)

**NOTE:**原图在项目的circuit_diagram文件夹下。

# 使用手册

##　速度控制

对单个电动机控制：

    ｒ　100

其中命令ｒ代表设置右前轮速度，参数100为速度大小。

下表是了列举了各命令代表的含义：

|编号| 命令 | 含义 |
| :-------------: | :-------------: | :------: |
| 0 | l       | 设置左前轮       |
| 1 | r       | 设置右前轮       |
| 2 | L       | 设置左后轮       |
| 3 | R       | 设置右后轮       |
| 4 | A       | 设置所有车轮     |

**NOTE:** 我想你大概也会猜到，与其他命令不同的是命令A的参数为4个，分别为左前轮速度、右前轮速度、左后轮速度、右后轮速度。

## 方向

只要将参数设置为负值，即可改变电动机旋转方向。

## 停止

如果你想终止电动机转动，可以使用命令`s`或者`S`：

    s 0     # 终止左前轮
    S       # 终止所有车轮

命令非常好理解，通过车轮对应的编号即可终止相应的车轮。

**NOTE:**当然，将速度设置为0也可以达到相同的效果。

具体可以查看程序中的`command.h`文件:

```
#define FRONTLEFT       'l'
#define FRONTRIGHT      'r'
#define BACKLEFT        'L'
#define BACKRIGHT       'R'
#define ALLWHEELS		'A'
#define STOPWHEEL       's'
#define STOPWHEELS      'S'
```


# 注意

- 要给L293D单独供电，不要将电源接在Arduino上；
- 给L293D通电时，电源正负极千万不要接反，否则很容易烧毁板子；
