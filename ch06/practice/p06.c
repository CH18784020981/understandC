#include <stdio.h>

void alert(int n) {
    for (int i = 0; i < n; i++) {
        printf("\a");
    }

}

int main(int argc, char const *argv[]) {

    alert(10);
    
    return 0;
}