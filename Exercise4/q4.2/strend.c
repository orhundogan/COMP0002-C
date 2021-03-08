#include <string.h>

int strend(char *s, char *t){

   if (strlen(s) < strlen(t)){
    return 0; 
    }

    int length = strlen(t); s += strlen(s);
    t += length;

    while (length-- >= 0){
        if (*s-- != *t--) {
        return 0;
            }
        }
    return 1; 
}
