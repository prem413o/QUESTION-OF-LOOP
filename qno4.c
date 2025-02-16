#include<stdio.h>

int main() {

    int n;
    printf("Enter side of cube is ");
    scanf("%d", &n);

    int volume=n*n*n;
    printf("%d\n",volume);

    return 0;
}