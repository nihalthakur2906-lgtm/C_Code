#include <stdio.h>
int main(){
    int l,b,a,p;
    printf("Enter the length of the rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle:");
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
if (a>p){
    printf("Area is greater than Perimeter.");
}
if (a<p){
    printf("Area is not greater than perimeter.");
}
if (a==p){
    printf("Both Area and Perimeter are equal:");
}
}
