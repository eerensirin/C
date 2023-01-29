#include <stdio.h>
int main(){
    int row,i,j,k=1,alfa;
    printf("row  ? : ");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(alfa=1;alfa<=row-i;alfa++)
        printf(" ");
        for(j=0;j<=i;j++){
            if(j==0||i==0)
                k=1;
            else 
                k=k*(i-j+1)/j;
            printf("%2d",k);
        }
        printf("\n");
    }

return 0;
}
