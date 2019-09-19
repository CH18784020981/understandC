#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char gamer;
    int computer;
    int result;
    while(1)
    {
    printf("我们与电脑来玩一个猜拳的游戏,请出你的结果：\n");
    printf("1：剪刀\n2：石头\n3：布\n4：不玩了\n");
    scanf("%c%*c",&gamer);
    switch(gamer)//使用4、7、11是为了与后面的0-2及他们相加的结果不重复；
    {
     case 65:
     case 97:
       gamer=4;
       break;
     case 66:
     case 98:
       gamer=7;
       break;
     case 67:
     case 99:
       gamer=10;
       break;
     case 68:
     case 100:
       return 0;
     default:
      printf("你的选择是%c,选择错误，退出\n",gamer);
      getchar();//这里为何需要这个语句？
      system("cls");//清屏
      return 0;
      break;
    }
   srand((unsigned)time(NULL));
   computer=rand()%3;//产生0-2随机数，即电脑的三种结果；
   result=(int)gamer+computer;//gamer为字符型，数学运算时要强制转换类型；
   printf("电脑出了:\n");
   switch(computer)
     {
     case 0:
        printf("电脑出剪刀\n");
        break;
     case 1:
        printf("电脑出石头\n");
        break;
     case 2:
        printf("电脑出布\n");
        break;
     }
     printf("你出了:\n");
     switch(gamer)
     {
     case 4:
        printf("你出了剪刀\n");
        break;
     case 7:
        printf("你出了石头\n");
        break;
     case 10:
        printf("你出了布\n");
        break;
     }
     if(result==6||result==7||result==11)
        printf("你赢了\n");
     else if(result==5||result==9||result==10)
        printf("电脑赢了\n");
     else
        printf("平手\n");
     system("pause>null&&cls");//暂停并清屏
  }
  return 0;
  }