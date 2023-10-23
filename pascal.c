#include <stdio.h>
int main(){
    int row,a=1,b=1,c,i=2,j,r;
    printf("Enter the number of rows of pascal triangle:\n");
    scanf("%d",&row);
    printf("The pascal triangle is shown below\n");
    if(row==0){printf("Triangle not possible for the input.");}
    else if(row==1){printf("1");}
    else if(row==2){printf(" 1\n");
    printf("1 1");}
    else{
        while(a<row){
         printf(" ");
         a++;
        }
        printf("1\n");
        while(b<(row-1)){
            printf(" ");
            b++;
        }
        printf("1 1\n");
        r=row;
        int dig[row][row];
        // now printing from third row
        while(i<(r+1)){
            c=1;
         while(c<(row-2)){
            printf(" ");
            c++;
        }
         row--;
         printf("1 "); 
          for(int j=1;j<i;j++){
          dig[i][0]=1; dig[i][i-1]=1;
          dig[i+1][j]=dig[i][j-1]+dig[i][j];
          printf("%d ",dig[i+1][j]);
         }
        printf("1\n");
        i++;
       }
    }     
    return 0;
}