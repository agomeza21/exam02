#include <unistd.h>
#include <stdio.h>

int ft_isspace(char c)
{
	if ((c >=9 && c <= 13) || c==32)
		return (0);
	else if (c >=33 && c <= 126)
		return (1);
	return (2);
}

char **ft_split(char *str)
{
	static char words[4096][4096];
	static char *split[4096];
	int contwords=0;
	int contchars=0;
	int cont=0;

	while(str[cont]!='\0' && !ft_isspace(str[cont]))
		cont++;
	while(str[cont]!='\0')
	{
		if (!ft_isspace(str[cont]) && contchars > 0)
		{
			words[contwords][contchars] ='\0';
			split[contwords] = words[contwords];
			contchars = 0; 
			contwords++; 
		}
		else if (ft_isspace(str[cont])==1)
		{
			words[contwords][contchars++] =str[cont];
		}
		cont++;
	}
	
	if ( contchars > 0)
	{
		words[contwords][contchars] ='\0';
		split[contwords] = words[contwords];
		contwords++; 
	}
	split[contwords]=NULL;
	return split;
}

/*int main(void)
{
	char **split=ft_split("  esto es una  prueba  ");

	int cont = 0;
	while (cont < 5)
		printf("%s\n",split[cont++]);

		return (1);
}*/