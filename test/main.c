#include <stdio.h>
#include "../src/func.c"

int main(int argc, char* argv[]) {
    char* str1 = malloc(7);
    char* str2 = malloc(7);
    char* str3 = malloc(7);
    char** strs = malloc(sizeof(char*) * 3);
    *str1= "flower";
    *str2= "flow";
    *str3= "flight";
    strs[0] = str1;
    strs[1] = str2;
    strs[2] = str3;

    char* result = longestCommonPrefix(strs, 3);

    printf("%s\n", result);
    
    free(result);
    free(str1);
    free(str2);
    free(str3);
    free(strs);

    return 0;
}
