#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
     char* lgst_pfx = malloc(sizeof(char) * 201);
     char temp;
    
    for (int i = 0; i <= 200; i++) {
        temp = strs[0][i];
        for (int cur_str = 0; cur_str < strsSize; cur_str++) {   
            if (strlen(strs[cur_str]) == i) {
                lgst_pfx[i] = '\0';
                return lgst_pfx;
            }
           
            lgst_pfx[i] = strs[cur_str][i];

            if (lgst_pfx[i] != temp) {
                lgst_pfx[i] = '\0';
                return lgst_pfx;
            }
            temp = strs[cur_str][i];
        }
    }

    lgst_pfx[200] = '\0';
    return lgst_pfx;
}
