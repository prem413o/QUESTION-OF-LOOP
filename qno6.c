#include<stdio.h>
int main() {
    //1=even, 0=odd,

    int a;
    printf("enter a ");
    scanf("%d", &a);

    printf("%d",a%2==0);
    return 0;
}