#include <stdio.h>

char my_strcmp(const char *a, const char *b){

    int num = 0;

    while (*a != '\0' && (*a == *b)) {
        a++;
        b++;
    }
 
    num =  (int)(*a) - (int)(*b);
    
    return num;
}

int main() {

    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
    
}

