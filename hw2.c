#include<stdio.h>
int main(){
//solution a
//int a,b,c used for taking variables
int a;
printf("write 1st number:");
scanf("%d", &a);
int b;
printf("write 2nd number:");
scanf("%d", &b);
int c;
printf("write 3rd number:");
scanf("%d", &c);
int d = a + b + c;
printf("the average is : %d \n", d/3);






return 0;
}