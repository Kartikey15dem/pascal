#include <stdio.h>
#include <math.h>
int main() {
    int num,i,j=0,k=0,sum=0,h,n,p=0,dec;
    printf("Enter your number in octal numbwr system: ");
    scanf("%d", &num);
    while(num>0){
   i=num%10;
   sum=sum+i*pow(8,j);
   j++;
   num=num/10;
 } // calculating the digits
   dec=sum;
   while(sum>0){
    k++;
    sum=sum/16;
   }
   int hex[k];
   n=k;
   while(dec>0){
    h=dec%16;
    hex[n-1]=h;
    n--;
    dec=dec/16;
   }// printing the digits
   printf("The hexadecimal equivalent of the number is:");
   while(p<k){
   switch (hex[p]){
   case 0 ... 9:
   printf("%d ",hex[p]);
   break;
   case 10:
   printf("A ");
   break;
   case 11:
   printf("B ");
   break;
   case 12:
   printf("C ");
   break;
   case 13:
   printf("D ");
   break;
   case 14:
   printf("E ");
   break;
   case 15:
   printf("F ");
   break;
     }
    p++;
   }
    return 0;
}
