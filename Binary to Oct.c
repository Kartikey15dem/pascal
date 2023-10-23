a#include <stdio.h>
#include<math.h>
int main() {
    int num,n,i,j = 0,k = 0,sum = 0,p = 0,y;
    printf("Enter your number in binary system:");
    scanf("%d",&num);
    if (num==0){
        printf("octal equivalent of the number is: 0\n");
        return 0;
    }
    n=(int)(log10(num)/log10(2)/3)+1;
    y=n;
    int oct[n];
    while(num>0){
        k=0;
        j=0;
        sum=0;
        while(k<3 && num > 0){
        i=num%10;
        num=num/10;
        sum=i*(pow(2,j))+(sum);
        j++;
        k++;
        }
        oct[n-1]=sum;
        n--;
    }
    printf("Octal equivalent of the number is: ");
    while(p < y){
     printf("%d",oct[p]);
     p++;
    }
    return 0;
}