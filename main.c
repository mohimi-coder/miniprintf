#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "ft_printf.h"
// int main()
// {
// 	fclose(stdout);
// 	int k = printf("hi! mohimi is here!\n");
// 	freopen("main.txt", "w", stdout);
// 	printf("%d\n", k);
// 	freopen("/dev/tty", "w", stdout);
// 	printf("%d\n", k);
// }
int main()
{
	ft_printf("hi mohimi! %s %d %i %u %x %X %p %c %% %k # \n", "how are you", 12, 6, 2545, 85478, 89878, 47, 'm');
}