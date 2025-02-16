#include<stdio.h>
int main() {

    int a,b;
    printf("Enter a and b is \n");
    scanf("%d  %d", &a,&b);

    if(a>b) {
        printf("the largest number is%d ",a);
    }else if(b>a){
        printf("the largest number is %d",b);
    }else {
        printf("thankyou premgi");

    }
    return 0;
    

}