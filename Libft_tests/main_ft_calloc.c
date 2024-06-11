ft_calloc

https://www.scaler.com/topics/difference-between-malloc-and-calloc-in-c/

to check for overflow in ft_calloc we calculate the total size of the memory block to be allocated (total_size) before performing the allocation. If an overflow occurs during the multiplication, it will result in total_size being less than the expected value, leading to incorrect behavior. Therefore, we can check if total_size / count equals size. If they are not equal, it indicates that an overflow has occurred, and ft_calloc returns NULL to indicate failure. This method provides an alternative way to check for overflow in ft_calloc, ensuring that the function handles potential overflow scenarios safely and returns NULL when overflow is detected.

>> another approach ensure that (count * size) does not overflow: if (SIZE_MAX / count < size) 

>> another approach total_size >= SIZE_MAX (18446744073709551615UL) / size 
// 18446744073709551615UL / size calculates the maximum number of elements that can be allocated without causing overflow.


./a.out | cat -e

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;
	
	total_size = count * size;
	if (count > 0 && size > 0 && total_size >= SIZE_MAX / size)
		return (NULL);
	ptr = (void  *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);	
}

#include <unistd.h>

int	main(void)
{
	char *s;
	s = ft_calloc(2, 2);
	write(1, s, 2 * 2);
}

#include <stdio.h>
int	main()
{
	char	*ptr;

	ptr = ft_calloc(0, 0);
	printf("adress of ptr: %p\n", ptr);
}

