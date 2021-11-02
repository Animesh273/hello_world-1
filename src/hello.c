#include <stdio.h>   
#include "..\include\hello.h"

int sgs_clib_strncat(const char *str1, const char *str2, int n){

printf("%s", str1);
for(int i=0; i<n;i++){
    printf("%c", str2[i]);
}
   return 0;

}