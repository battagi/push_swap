#include "libft.h"
#include <stdio.h>
void	ft_free(char **str)
{
	int i;

	i = 0;
	if (str == NULL|| *str== NULL)
		return ;
	int len = ft_split_count(str);
	while (i < len  && str[i])
	{

		free(str[i]);
		
        i++;
	}
	free(str);
}