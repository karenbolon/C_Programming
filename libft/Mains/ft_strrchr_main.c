
#include <stdio.h>
#include <string.h>
#include "ft_strrchr.c"

char *ft_strrchr(const char *str, int ch);

int main () {
   char str[] = "This is a String"; 
   char ch = 'i'; 
   
   printf("Real function: %s\n", strrchr(str, ch));
   printf("My function: %s", ft_strrchr(str, ch));
   return 0;
}