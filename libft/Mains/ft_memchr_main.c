#include "ft_memchr.c"

void *ft_memchr(const void *s, int c, size_t n);

int main () {
   const char str[] = "abcdefghijklmnopqrstuvwxyz";
   const char str1[] = "abcdefghijklmnopqrstuvwxyz";
   const char c = 'q';
   char *ret;
   char *ret1;

   ret = memchr(str, c, strlen(str));
   ret1 = ft_memchr(str1, c, strlen(str1));

   printf("Real function string after '%c' is: %s\n", c, ret);
   printf("My function string after '%c' is: %s\n", c, ret1);

   return(0);
}