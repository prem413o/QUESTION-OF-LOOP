#include<stdio.h>

int main() {
    int marks;
    printf("enter a ");
    scanf("%d", &marks);

    if(marks>=30){
        printf("pass\n");
    }else{
        printf("fail");
    }
    return 0;
}