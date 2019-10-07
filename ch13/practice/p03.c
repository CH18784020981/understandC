#include<stdio.h>

#define NUMBER 6

typedef struct {
    char name[100];
    double height;
    double weight;
} Student;

void swap_Student(Student *x, Student *y) {
    Student temp = *x;
    *x = *y;
    *y = temp;
}

void sort_by_height(Student *s, int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = n; j > i; j--) {
            if (s[j - 1].height > s[j].height) {
                swap_Student(&s[j - 1], &s[j]);
            }
        }

    }
}

int main(void) {
    FILE *fp;
    int i;
    int ninzu = 0;
    double hsum = 0.0;
    double wsum = 0.0;
    Student std[NUMBER];

    if ((fp = fopen("hw.dat", "r")) == NULL) {
        printf("\a文件打开失败。\n");
    } else {
        while (fscanf(fp, "%s%lf%lf", std[ninzu].name, &std[ninzu].height, &std[ninzu].weight) == 3) {
            hsum += std[ninzu].height;
            wsum += std[ninzu].weight;
            ninzu++;
        }

        sort_by_height(std, NUMBER);

        for (i = 0; i < ninzu; i++) {
            printf("%-10s %5.1f %5.1f\n", std[i].name, std[i].height, std[i].weight);
        }

        printf("---------------------\n");
        printf("平均     %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
        fclose(fp);
    }

    return 0;
}
