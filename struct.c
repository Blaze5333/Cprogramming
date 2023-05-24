#include <stdio.h>
int main(){
 struct student
 {
    int name[100];
    char address[100];
    char email[100];
    int id;
 }s2;
*(s2.name+2)=123;
struct student s1={{1,2,8,4,5}};
int *f=s1.name+2;
printf("%d",*f);
printf("%d",*(s2.name+2));
{
    /* data */
};



return 0;

}