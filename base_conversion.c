#include <stdio.h>
#include<math.h>
int binaryOrOctalToDecimal(long n,int x){
    int sum=0,rem,c=0;float y;
    while(n>0){
     rem=n%10;
     y=pow(x,c);
     sum=sum+rem*y;
     c++;
     n=n/10;
    }
    return sum;
}
long decimalToBinaryOrOctal(int n,int x){
    int sum=0,rem,c=0;float y;
    while(n>0){
        rem=n%x;
        y=pow(10,c);
        sum=sum+rem*y;
        c++;
        n=n/x;
    }
    return sum;
}
int binaryToOctal(long n){
    int x=binaryOrOctalToDecimal(n,2);
    return decimalToBinaryOrOctal(x,8);
}
long octalToBinary(long n){
    int x=binaryOrOctalToDecimal(n,8);
    return decimalToBinaryOrOctal(x,2);
}
int main(){
    int choice;
    printf("\n Enter Your Choice\n 1-Conversion from Decimal to Binary\n 2-Conversion from Binary to Decimal\n 3-Conversion from Octal to Decimal\n 4-Conversion from Decimal to Octal\n 5-Conversion from Octal to Binary\n 6-Conversion from Binary to Octal\n 7-to Exit\n");
    scanf("\n%d",&choice);
    int n;long n1;
    while(choice!=7)
    {
       switch (choice)
       {
       case 1:
        printf("\nEnter the number in Decimal:");
        scanf("\n%d",&n);
        printf("\nBinary: %ld",decimalToBinaryOrOctal(n,2));
        break;
        case 2:
        printf("\nEnter the number in Binary:");
        scanf("\n%ld",&n1);
        printf("\nDecimal: %d",binaryOrOctalToDecimal(n1,2));
        break;
        case 3:
        printf("\nEnter the number in Octal:");
        scanf("\n%ld",&n1);
        printf("\nDecimal: %d",binaryOrOctalToDecimal(n1,8));
        break;
         case 4:
        printf("\nEnter the number in Decimal:");
        scanf("\n%d",&n);
        printf("\nDecimal: %ld",decimalToBinaryOrOctal(n,8));
        break;
        case 5:
        printf("\nEnter the number in Octal:");
        scanf("\n%ld",&n1);
        printf("\nBinary:%ld",octalToBinary(n1));
        break;
        case 6:
        printf("\nEnter the number in Binary:");
        scanf("\n%ld",&n1);
        printf("\nDecimal:%d",binaryToOctal(n1));
        break;
       
       default:
       printf("Invalid Choice");
        break;
       }
    printf("\n Enter Your Choice\n 1-Conversion from Decimal to Binary\n 2-Conversion from Binary to Decimal\n 3-Conversion from Octal to Decimal\n 4-Conversion from Decimal to Octal\n 5-Conversion from Octal to Binary\n 6-Conversion from Binary to Octal\n 7-to Exit\n");
    scanf("\n%d",&choice);
    }
    return 0;
}