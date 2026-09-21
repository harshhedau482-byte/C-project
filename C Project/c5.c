#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter your frist number \n");
    scanf("%d", &a);
    printf("Enter your second number \n");
    scanf("%d", &b);
    printf("Enter your thrid number \n");
    scanf("%d", &c);

    if (a>b && a>c){
        printf("first number is largest no");

    }else if(b>c){
        printf("second number is largest no");

    }else{
        printf("Thrid number is largest no");

    }

}