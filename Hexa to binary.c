#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
  int n,i=0,j,x,k,y=0;
  char hex[20]; 
  printf("Enter the number in hexadecimal system: ");
  scanf("%19s", hex); 
  n=strlen(hex);
  int dec[n];//savings digits in array
  while(i<n){
    switch (hex[i]){
      case 'A':
      dec[i]=10;
      break;
      case 'B':
      dec[i]=11;
      break;
      case 'C':
      dec[i]=12;
      break;
      case 'D':
      dec[i]=13;
      break;
      case 'E':
      dec[i]=14;
      break;
      case 'F':
      dec[i]=15;
      break;
      case '0': case '1': case '2': case '3': case '4': 
      case '5': case '6': case '7': case '8': case '9': 
      dec[i]=hex[i]-'0';
      break;
    }
    i++;
  }//saving bibary digits
   j=n*4;i=0;
   int bin[j];
   while(i<n){
    k=3;
    while(k>=0 && k<4){
     x=pow(2,k);
     if(dec[i]>=x){
     bin[y]=1;
     dec[i]=dec[i]-x;
     }
     else{bin[y]=0;}
     y++;
     k--;
    }
   i++;
   }// printing the digits
   i=0;
   printf("The binary number system equivalent is:");
   while(i<j){
    printf("%d",bin[i]);
    i++;
   }
  return 0;
}
