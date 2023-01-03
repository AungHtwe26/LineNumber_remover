#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fptr= NULL;
    int c;
    char flag=0;
    if((fptr = fopen("D:\\text.txt","r"))==NULL)
    {
        puts("File could not be opened");
    }
    else
    {
       while((c=getc(fptr)) != EOF)     //check end of file
       {
           if(flag==0)
           {
               if(c==32){flag =1;} //check first space
           }
           else
           {
               putchar(c);
               if(c==10 )           //check line end
               {
                   flag = 0;
               }
           }
       }
    }
    fclose(fptr);
  return 0;
}
