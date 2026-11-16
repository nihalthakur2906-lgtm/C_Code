#include <stdio.h>
int main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a<0){
        a=-a;
    }
    printf("The absolute value of given number is:%d ",a);
}