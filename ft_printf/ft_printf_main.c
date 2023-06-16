
int main()
{
	int	pt;
	int	ft_pt;
	char str[] = "Hello, World!";

  	int i = -1;
	unsigned int u= -1;
    char str[] = "Hello, World!";
	int j = 74;
	int *var;

	var = malloc(sizeof(int));

    *var = 10;

    ft_printf("fake: %c %c\n", 'a', 'b');
	printf("real: %c %c\n", 'a', 'b');
	ft_printf("fake: %%. \n");
	printf("real: %%.\n");
    ft_printf("fake: %d\n", i);
	printf("real: %d\n", i);
	ft_printf("fake: %d %c\n", i, c);
	printf("real: %d %c\n", i, c);
    ft_printf("fake: %s\n", str);
	printf("real: %s\n", str);
	ft_printf("fake: %i\n", i);
	printf("real: %i\n", i);
	ft_printf("fake: %u\n", u);
	printf("real: %u\n", u);
	ft_printf("fake: %x\n", j);
	printf("real: %x\n", j);
	ft_printf("fake: %X\n", j);
	printf("real: %X\n", j);
	ft_printf("fake: %p\n", (void *)var);
	printf("real: %p\n", (void *)var);
	ft_printf("fake: %s\n","");
	printf("real: %s\n","");

	ft_pt =  ft_printf("fake: %c%c%c\n", 'c', 'b', 'a');
	pt = printf("real: %c%c%c\n", 'c', 'b', 'a');
	printf("fake count: %i\n", ft_pt);
	printf("real count: %i\n\n", pt);
	
	free(var);

	return (0);
}