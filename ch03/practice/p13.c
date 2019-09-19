#include <stdio.h>

int main(void)
{
    int month;

    printf("请输入月份：");
    scanf("%d", &month);

    // if (month >= 3 && month <= 5)
    //     printf("%d月是春季。\n", month);
    // else if (month >= 6 && month <= 8)
    //     printf("%d月是夏季。\n", month);
    // else if (month >= 9 && month <= 11)
    //     printf("%d月是秋季。\n", month);
    // else if (month == 1 || month == 2 || month == 12)
    //     printf("%d月是冬季。\n", month);
    // else
    //     printf("%d月不存在。！！\n", month);

switch(month){
    case 1:printf("%d月是冬季。\n", month);break;
 case 2:printf("%d月是冬季。\n", month);break;
 case 3:printf("%d月是春季。\n", month);break;
 case 4:printf("%d月是春季。\n", month);break;
 case 5:printf("%d月是春季。\n", month);break;
 case 6:printf("%d月是夏季。\n", month);break;
 case 7:printf("%d月是夏季。\n", month);break;
 case 8:printf("%d月是夏季。\n", month);break;
 case 9:printf("%d月是秋季。\n", month);break;
 case 10:printf("%d月是秋季。\n", month);break;
 case 11:printf("%d月是秋季。\n", month);break;
 case 12:printf("%d月是冬季。\n", month);break;
 default:printf("没有这个月份哦！！！\n");break;
}
    return 0;
}
