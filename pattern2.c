#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines");
    scanf("%d",&n);
    int temp=-1;
    for(int i=0;i<n;i++){
        n/2-i>=0?temp++:temp--;
        for(int j=0;j<n;j++){
           if(j<=n/2-temp || j>=n/2+temp){
                    printf("*");
                }
                else{
                    printf(" ");
                }
        }
        printf("\n");
    }
}