

#include<stdio.h>
#include<string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
} Student;

void swap_Student(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height_or_name(Student a[], int n) {
    int i, j, temp;

    puts("请输入0或者1。(0---按身高排序，1---按姓名排序)");
    printf("选择: ");    scanf("%d", &temp);

    if (temp == 0) {
        for (i = 0; i < n - 1; i++) {
            for (j = n; j > i; j--) {
                if (a[j - 1].height > a[j].height) {
                    swap_Student(&a[j - 1], &a[j]);
                }
            }
        }
    }

    if (temp == 1) {
        for (i = 0; i < n - 1; i++) {
            for (j = n; j > i; j--) {
                if (a[j - 1].name[0] > a[j].name[0]) {
                    swap_Student(&a[j - 1], &a[j]);
                }
            }
        }
    }
}

int main(void) {
    int i;
    Student std[NUMBER];

    printf("请依次输入姓名，身高，体重，奖学金。(数据之间以一个空格隔开)\n");

    for (i = 0; i < NUMBER; i++) {
        printf("学生%d: ", i + 1);
        scanf("%s %d %f %ld",
              std[i].name, &std[i].height, &std[i].weight, &std[i].schols);
    }

    sort_by_height_or_name(std, NUMBER);
    puts("\n排序如下。");

    for (i = 0; i < NUMBER; i++) {
        printf("%-8s %6d%6.1f%7ld\n",
               std[i].name, std[i].height, std[i].weight, std[i].schols);
    }

    return 0;
}
