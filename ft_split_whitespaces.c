/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machahba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 12:47:56 by machahba          #+#    #+#             */
/*   Updated: 2016/08/20 18:26:05 by machahba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Decoupe chaine de caracteres en mots*/ 
/* separateurs sont ' ', 'tabulation', '\n'*/
/* renvoie un tableau*/
/* pas de ligne vide dans le tableau*/
/* chaine transmise non modifiable */

int	ft_count_word(char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' || str[i] == 9 || str[i] == '\n'))
			word++;
		while (str[i] == ' ' || str[i] == 9 || str[i] == '\n')
			i++;
	}
	return (word);
}

int	ft_next_word(char *str, int j)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] == ' ' || str[i] == 9 || str[i] == '\n'))
			return (i);
		i++;
	}
	return(0);
}

char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int word;
	char **tab;

	i = 0;
	word = ft_count_word(str);
	tab = (char *)malloc(sizeof(*tab) * word + 1)
	while (i < size)
	{	
		j = 0;
		tab[i] = (char*)malloc(sizeof(tab) * /* taille du mot */ + 1
		while (!(str[i] == ' ' || str[i] == 9 || str[i] == '\n'))
		{
			tab[i][j] = str[k];
			j++;
			k++;
		}
		tab[i][j] = '\n';
		i++;
		k = ft_next_word(str, k);

	}
	return(tab)
}


int main (int argc, char **argv)
{
	argc = 2;
	printf("%s", *ft_split_whitespaces(argv[1]));
	return (0);
}
