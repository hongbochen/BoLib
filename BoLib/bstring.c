#include "bstring.h"

int lengths(char *str)
{
    return strlen(str);
}

char charAt(char *str, int index)
{
    if(index >= lengths(str))
        return OUT_OF_RANGE;

    return str[index];
}

int codeCharAt(char *str, int index)
{
    if(index >= lengths(str))
        return OUT_OF_RANGE;

    return (int)str[index];
}

int codeCharBefore(char *str, int index)
{
    if(index == 0 || index > lengths(str))
        return OUT_OF_RANGE;

    return (int)str[index-1];
}

int compareTo(char *str1, char *str2)
{
    int len1 = lengths(str1);
    int len2 = lengths(str2);

    int i,j;
    for(i = 0,j = 0; i < len1,j <len2; i++,j++){
        if(charAt(str1,i) > charAt(str2,j) || charAt(str1,i) < charAt(str2,j)){
            break;
        }
    }

    if(i < len1 && j < len2 && charAt(str1,i) > charAt(str2,j)){
        return 1;
    }else if(i < len1 && j == len2){
        return 1;
    }else if(i == len1 && j == len2){
        return 0;
    }else{
        return 2;
    }
}

char* concats(char *dest, const char *src)
{
    char* str1 = (char *)malloc((lengths(dest)+lengths(src)) * sizeof(char));
    char str2[lengths(src)];

    strcpy(str1,dest);
    strcpy(str2,src);

    strcat(str1,str2);

    return str1;
}

int contains(char *str, char *s)
{
    int strlen = lengths(str);
    int slen = lengths(s);
    int i,j;

    if(slen > strlen){
        return FALSE;
    }

    if(slen == 0){
        return TRUE;
    }

    int bc = FALSE;

    for(i = 0;i < strlen;i++){
        if(str[i] == s[0]){
            for(j = 0;j < slen;j++){
                if(i+j > strlen){
                    break;
                }

                if(str[i+j] != s[j]){
                    break;
                }
            }

            if(j == slen){
                bc = TRUE;
                break;
            }
        }
    }

    return bc;
}
