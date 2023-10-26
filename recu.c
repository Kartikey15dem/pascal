#include<stdio.h>
int fact(int n);
void main(){
    int n,s;
    printf("Enter the natural number of which you want the factorial ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact(n));
}
int fact(int n){
    int fac;
    if (n==1){
        return 1;
    }
    fac=fact(n-1)*n;
    return fac;
}