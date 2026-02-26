#include "9.6.h"

int my_strlen(const char* str){
    int i=0;
    while (str[i] !='\0')
    {
        ++i;
    }
    return i;
}

void my_strcpy(char* dest,const char * src){
    int i=0;
    while (src[i]!='\0')
    {
        dest[i]=src[i];
        ++i;
    }
    dest[i]='\0';
    
}

void my_strcat(char* dest,const char*src){
    int i=my_strlen(dest);
    int j=0;
    while (src[j]!='\0')
    {
        dest[i]=src[j];
        ++i;
        ++j;
    }
    dest[i]='\0';
}

int my_strcmp(const char* str1,const char* str2){
    while (*str1 !='\0' && *str2 !='\0')
    {
        if (*str1 >*str2)
        {
            return 1;
        }
        else if (*str1 <*str2)
        {
            return -1;
        }
        else{
            str1++;
            str2++;
        }
        
        
    }
    return *str1-*str2;
    
}

void my_substr(char* dest, const char* src, int start, int len){
    for(int i=start;i<start+len &&src[i] !='\0';++i){
        *dest=src[i];
        dest+=1;
    }
    *dest='\0';
}