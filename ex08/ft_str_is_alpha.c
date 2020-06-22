int ft_str_is_alpha(char *str)
{
	while (str[0] != '\0')
	{
		if (!((str[0] >= 'A' && str[0] <= 'Z') ||
			(str[0] >= 'a' && str[0] <= 'z')))
			return (0);
		str++;
	}
	return (1);
}
