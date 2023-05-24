#include <stdio.h>
int compare(char wrd1[],char wrd2[]){
    int l1=0,l2=0;
    while(wrd1[l1]!='\0'){
        l1++;
    }
    while(wrd2[l2]!='\0'){
        l2++;
    }
    if(l1!=l2){
        return 0;
    }
    else{
        int i=0;
        while(wrd1[i]!='\0'){
            if(wrd1[i]!=wrd2[i]){
                return 0;
            }
            i++;
        }
        return 1;
    }

    
}
int main(){
    char str[3][100];
    int i;
    char key[100];
    printf("Enter the strings\n");
    for(i=0;i<3;i++){
      gets(str[i]);
      printf("\n");
    }
    printf("Enter the key");
    gets(key);
    for(i=0;i<3;i++){
        int j=0;
        char wrd[100];
        int c=0;

        while(str[i][j]!='\0'){
              if(str[i][j]==' '){
                  if(compare(key,wrd)==1){
                    printf("\n");
                    puts(str[i]);
                    break;
                  }
                  char wrd[100];
                  c=0;
              }
              else if(str[i][j+1]=='\0'){
                wrd[c]=str[i][j];
                if(compare(key,wrd)==1){
                    printf("\n");
                    puts(str[i]);
                    break;
                  }
              }
              else{
                wrd[c]=str[i][j];
                c++;
              }
              j++;
        }
    }
    return 0;
}