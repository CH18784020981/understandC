# p01.c
将代码清单11-3中对p的赋值进行如下修改。

p = "456" + 1;
请编写程序确认运行结果，并对运行结果进行分析。
# p02.c
在代码清单11.4中，各数组的字符串个数3是作为常量嵌在程序（for语句的控制表达式）中的。请编写一段程序，将其改写为通过计算求出。
# p03.c
改写代码清单11-6的程序，将本文中学习的str_copy函数的调用作为printf函数的实参。
# p04.c
不使用下标运算符，编写如下函数，显示字符串s。

void put_string(const char *s) { /* ... / }
# p05.c
不使用下标运算符，编写如下函数，若字符串S中含有字符C（若含有多个，以先出现的为准），则返回指向该字符的指针，否则返回空指针。

char *str_chr(const char *s, int c) { /* ... }

int str_chnum(const char *s, int c) { /* ...  }
# p06.c
不使用下标运算符，编写如下函数，返回字符串s中字符c的个数（若不存在,则为0）。
# p07.c
不使用下标运算符，实现代码清单9-11的str_toupper函数和str_totower函数。

# p08.c

编写如下函数，删除字符串str内的所有数字字符。

void del_digit(char *str) { /* ...  }
例如，如果接收"AB1C9",就返回"ABC"。注意不要使用下标运算符。
# p09.c


# p10.c
编写如下函数，实现与库函数atoi、atol、atof相同的功能。

int strtoi(const char *nptr) { /* ...  }
long strtoi(const char *nptr) { /* ... }
double strtof(const char *nptr) { /* ...  }


