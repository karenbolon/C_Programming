#include "ft_calloc.c"

void *ft_calloc(size_t nmemb, size_t size);

int main()
{
    size_t nmemb = 5;
    size_t size = sizeof(int);
    
    int *arr = ft_calloc(nmemb, size);
    
    if (arr != 0)
    {
         for (size_t i = 0; i < nmemb; i++)
            printf("%d ", arr[i]);
        
        free(arr);
    }
    
    return 0;
}