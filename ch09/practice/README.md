# p01.c
将代码清单9-3中数组str的声明改为下面这样，查看程序的运行结果。
char str[] = “ABC\0DEF”
# p02.c
如何让下述初始化賦值得到的字符串s变成空字符串?请编写程序实现。

char s[]="ABC";
# p03.c 重点，字符串的比较
编写一段程序，对代码清单9-7进行如下改写。
1、将字符串的个数3改为更大的数，将其值定义为对象式宏。 2、在最初的for语句读取"$$$$$”时停止读取操作。
3、第二个for语句显示"$$$$$"前输入的所有字符串。
# p04.c
编写一个函数，使字符串s为空字符串。

void null_string(char s[]){/*...*/}
# p05.c. !!!未解决输入数组的问题
写如下函数，若字符串s中含有字符c(若含有多个，以先出现的为准)，则返回该元素的下标值，否则返回-1。
int str_char(const char s[],int c){/*...*/}
# p06.c
编写如下函数，返回字符串s中字符c的个数(没有则返回0)。

int str_chnum(const char s[],int c){/*...*/}
# p07.c
练习 9-7
编写如下函数，使字符串s显示n次。

void put_stringn(const char s[],int n){/*...*/}

# p08.c
编写如下函数，实现字符串的逆向输出。
void put_stringr(const char s[]){/*...*/}
例如，将"SEC* 显示为"CES"。

# p09.c
编写如下函数，逆向显示字符串s的字符。
void rev_string(char s[]){/*...*/}
例如，若s中接收的是"SEC",则将其数组更新为“CES”。
# p10.c
编写如下函数，将字符串s中的数字字符全部删除。

void del_digit(char s[]){/*...*/}
例如传入"AB1C9“则返回"ABC"。

# p11.c
编写一段程序，对代码清单9-12进行如下改写。
1、将字符串的个数3改为更大的数，将其值定义为对象式宏。
2、将字符串的字符数6改为128,将其值也定义为对象式宏。
3、生成读取字符串数组的函数。和练习9-3—样，在读取"$$$$$“时停止读取操作。
4、显示”$$$$$"前输入的所有字符串。
# p12.c
编写如下函数，将所接收的字符串数组中存储的n个字符串的字符逆向显示。
voi rev_string(char s[][128],int n){/*...*/}
例如，若s中接收的是{“SEC”,“ABC”},则将其更新为{“CES”,“CBA”}。
# s01.c
计算器的整合

