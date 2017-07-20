#include <stdio.h>
#include <stdlib.h>
#include "bstring.h"

int main()
{
    char *str = "Hello,World";

    /*
    char c = charAt(str,12);
    if(c == OUT_OF_RANGE){
        printf("out of range\n");
    }else{
        printf("%d\n",c);
    }*/

    //int len = lengths(str);
    //printf("%d\n",len);

    /*
    int c = codeCharAt(str,4);
    if(c == OUT_OF_RANGE){
        printf("out of range\n");
    }else{
        printf("%d\n",c);
    }*/

    /*
    int c = codeCharBefore(str,11);
    if(c == OUT_OF_RANGE){
        printf("out of range\n");
    }else{
        printf("%d\n",c);
    }*/

    char *str1 = "Hello,World";
    char *str2 = "Hello,Wa";

    /*
    int cp = compareTo(str1,str2);
    printf("%d\n",cp);
    */
    //char *dest = concats(str1,str2);
    //printf("%s\n",dest);

    char *str3 = "ld";
    int con = contains(str1,str3);
    printf("%d\n",con);

    return 0;
}
