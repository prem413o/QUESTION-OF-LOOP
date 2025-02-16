#include<stdio.h>
int main() {
    int side;

    printf("Enter side : ");
    scanf("%d", &side);
    int area=side*side;
    printf("%d\n",area);

    return 0;
}