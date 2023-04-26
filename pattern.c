#include<stdio.h>
#include <math.h>
int fact(int n,int r){
    int val;
    int nfact=1,rfact=1,nrfact=1,k,f,g;
    for(k=1;k<=n;k++){
    nfact=k*nfact;
    }
    
    for(f=1;f<=r;f++){
    rfact=f*rfact;
    }
    
     for(g=1;g<=n-r;g++){
    nrfact=g*nrfact;
    }
    val=nfact/(rfact*nrfact);
    return val;
}
int main(){
   int n;
    printf("Enter the limit");
    scanf("%d",&n);
    int a=1,b=1,i,j;
    int val,temp,temp1;
    // printf("%d",fact(3,2));
    for(i=0;i<=n;i++){
        temp=0,temp1=0;
        for(j=0;j<=n*2;j++){
        if(j>n+i|| j<n-i )
        {
           printf("\t"); 
        }
        else{
            
            if(temp%2==0){
            val=fact(i,temp1)*pow(a,i-temp1)*pow(b,temp1);
         printf("%d\t",val);
         temp1++;
         temp++;
            }
            else{
               printf("\t");
               temp++;
            }
        }
        
        }
        printf("\n");
    }
    return 0;
}
