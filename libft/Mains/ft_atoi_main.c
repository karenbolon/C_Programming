/*atoi stops parsing the string as soon as it encounters a non-numeric character. 
In +-904j, it encounters the plus sign (+), interprets it as a valid sign for 
a positive number, and continue parsing the string. However, when it encounters 
the next symbol (-), it interprets it as a non-numeric character and stops parsing
and returns 0.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_atoi.c"

int ft_atoi(const char *str);

int main () {
    char str[] = "98993489";
    printf("Regular function, String: %s, Int: %d\n", str, atoi(str));
    printf("My function, String: %s, Int: %d\n\n", str, ft_atoi(str));

    char str1[] = "+-904j";
    printf("Regular function, String: %s, Int: %d\n", str1, atoi(str1));
    printf("My function, String: %s, Int: %d\n\n", str1, ft_atoi(str1));
    
    char str2[] = "1.25";
    printf("Regular function, String: %s, Int: %d\n", str2, atoi(str2));
    printf("My function, String: %s, Int: %d\n\n", str2, ft_atoi(str2));
    
    char str3[] = "100 Welcome";
    printf("Regular function, String: %s, Int: %d\n", str3, atoi(str3));
    printf("My function, String: %s, Int: %d\n\n", str3, ft_atoi(str3));
    
    char str4[] = "Happiness";
    printf("Regular function, String: %s, Int: %d\n", str4, atoi(str4));
    printf("My function, String: %s, Int: %d\n\n", str4, ft_atoi(str4));

    return(0);
}