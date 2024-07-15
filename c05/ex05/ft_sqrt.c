int ft_sqrt(int nb)
{
	int b;
	int sayi;

	b = nb;
	if (b <= 0)
	{
		return (0);
	}
	if (b == 1)
		return(1);
	sayi = 2;
	if (b >= 2)
	{
		while (sayi * sayi <= b)
		{
			if (sayi * sayi == b)
				return (sayi);
			sayi++;
		}
	}
	return (0);
}
