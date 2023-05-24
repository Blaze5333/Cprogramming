#include<stdio.h>
int add(char *ptr){
    *ptr='d';
    return 0;
}
int main(){
    int a[] ={1,2,3,4,5};
    char b[]={'a','b','c'};
    char *ptr=b;
    int a1=10;
    int *pr=&a1;
    ++*pr;
    printf("%d",a1);
    // printf("%d",*(ptr));
    add(b);
    printf("%c",*ptr);
    return 0;
   
}