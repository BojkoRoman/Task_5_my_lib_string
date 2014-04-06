#include "header_string.h"
#include "stdafx.h"
#include <iostream>
using namespace std;

int myStrlen(const char* c_str)
{
    int count=0;
	while(*c_str++)
	{
		++count;
	} 
    return count;
}

char* myStrcpy(char *str1, const char *str2)
{
    /*while(*str2)
    {
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1=*str2;*/
	if( str1 == NULL || str2 == NULL)
    {
        cout <<"\Помилка використовується нульовий вказівник"<<endl;
        return NULL;
    }

    memcpy( str1, str2, myStrlen( str2 ) + 1 );

	return str1;
}

char* myStrncpy(char* str1, const char* str2, size_t num)
{
     if (num > myStrlen(str1) || num > myStrlen(str2)) return 0; // Error!
     int i;
     for (i = 0; i < num; ++i) *(str1 + i) = *(str2 + i);
     *(str1 + i) = '\0';
     return 0;
}


char* myStrcat(char *str1, const char *str2)
{
 char *p = str1;

 if (str1 == NULL || str2 == NULL)
 return str1; 

 while (*str1)
 str1++;

 while (*str1++ = *str2++)
 ;

 return p;
}

char* myStrncat(char *str1, const char *str2, int num)
{
    int len;
    len=myStrlen(str1);
    int i;
    for(i=0; i<num+len; i++)
    {
        str1[len+i]=str2[i];
    }
    str1[i]=0;
return str1;
}

int myStrcmp(char str1[], char str2[])
{
   int i = 0;

   while( str1[i] == str2[i] )  
   {

      if( str1[i] == '\0' && str2[i] == '\0' ) 
        return 0;
      ++i;
   }

   return  ( str1[i] < str2[i]) ? 1 : -1;
}

int myStrncmp(char *str1, char *str2,int num)
{
    int i;
    for ( i = 0; i <= num; ++i)
    {
        if (str1[i]!=str2[i])
        {
            if (str1[i]>str2[i])
            {
                return 1;
            }                    
            else 
            {
                return -1;
            }        
        }
    }    
    return 0;
}
