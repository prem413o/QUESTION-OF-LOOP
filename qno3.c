#include<stdio.h>
int main(){
    
    int l,b;
    printf("Enter length & breadth is\n\n");
    scanf("%d%d", &l,&b);

    int perimeter=2*(l+b);
    printf("%d\n",perimeter);

    return 0;
    
}