#include <stdio.h>
#include <string.h>
#include "ft_strchr.c"

char *ft_strchr(const char *str, int ch);

int main () {
   char str[] = "This is just a String"; 
   char ch = 'u'; 
   
   printf("Real function: %s\n", strchr(str, ch));
   printf("My function: %s", ft_strchr(str, ch));
   return 0;
}