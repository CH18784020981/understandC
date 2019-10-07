# p01.c
创建一个程序,显示如下所示的各表达式的值，同时对各表达式的值加以说明。
sizeof 1        sizeof(unsigned)-1      sizeof n+2
sizeof +1       sizeof(double)-1        sizeof(n+2)
sizeof -1       sizeof((double)-1)      sizeof(n+2.0)
# p02.c
编写一个程序，确认只要没有发生高位溢出，则
无符号整数位左移后的值等于其乘以2的指数幂后的值。
无符号整数位右移后的值等于其除以2的指数幂后的值。
# p03.c
编写rrotate函数，返回无符号整数x右移n位后的值。

unsigned rrotate(unsigned x,int n){/*...*/}
编写lrotate函数，返回无符号整数x左移n位后的值。

unsigned lrotate(unsigned x,in tn){/*...*/}
# p04.c
编写set函数，返回将无符号整数x的第pos位设为1后的值。

unsigned set(unsigned x,int pos){/*...*/}
编写reset函数，返回将无符号整数x的第pos位设为0后的值。

unsigned reset(unsigned x,int pos){/*...*/}
编写inverse函数，返回将无符号整数x的第pos位取反后的值.

unsigned inverse(unsigned x,int pos){/*...*/}
# p05.c
编写set_n函数，返回将无符号整数x的第pos位到第pos+n-1位的n位设为1后的值。
unsigned set_n(unsigned x,int pos,int n){/*...*/}
编写reset_n函数，返回将无符号整数x的第pos位开始的n位设为0后的值。
unsigned reset_n(unsigned x,int pos,int n){/*...*/}
编写inverse_n函数，返回将无符号整数x的第pos位开始的n位取反后的值。
unsigned inverse_n(unsigned x,int pos,int n){/*...*/}
# p06.c
编写程序确认对无符号整数执行算术运算不会发生数据溢出。
# p07.c
创建一个程序，从键盘输入float型、double型、long double型的变量，并显示其值。注意试着输入各种各样的值，并验证其动作。
# p08.c
创建一个程序，使用sizeof运算符显示3种浮点型的长度。
# p09.c
创建一个程序，输入一个实数作为面积，求面积为该实数的正方形的边长。
# p10.c
 创建一个程序，横向显示代码清单7-11中以0.01为单位将float型变量由0.0递增为1.0的过程，以及代码清单7-12中将int型变量由0递增到100,并求其除以100.0后所得值的过程。
# p11.c
创建一个程序，分别对代码清单7-11和代码清单7-12进行改写，从0.0递增到1.0,每次递增0.01,求递增后的所有值的累计。注意对比二者的运行结果。