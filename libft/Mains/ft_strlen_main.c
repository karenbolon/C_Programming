
#include<stdio.h>
#include<string.h>
#include "ft_strlen.c"

size_t ft_strlen(const char *str);

int main() {
  char name[10] = "Scaler";
  //Using the strlen method to calculate the length of the string
  printf("The length of the string is %d", ft_strlen(name));
  return 0;
}
