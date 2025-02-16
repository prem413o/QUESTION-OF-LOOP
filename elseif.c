#include<stdio.h>

int main() {
    int marks;
    printf("Enter marks ");
    scanf("%d", &marks);

    if(marks<30){
        printf("fail\n grade 'c");

    }else if(marks>=30 && marks<70){

        printf("pass\n grade 'B");
    }else if(marks>=70 && marks<90){

        printf("pass\n grade 'A' ");
    }else if(marks>=90 && marks<=100){
        printf("pass\n grade 'A+'");
    }else{
        printf("thank you");
    }
    return 0;
}