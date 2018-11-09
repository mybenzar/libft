/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:49:25 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/09 16:57:42 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <ctype.h>
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define CYN   "\x1B[36m"
#define RESET "\x1B[0m"
#define CLEAR "ft_strclr(str5); ft_strclr(str6); ft_strclr(str7); ft_strclr(str8)"

int	main(void)
{
	int i;
	int j;
	char str[] = "Hello World!";
	char str2[] = "Coucou";
	char str3[] = "Coucou";
	char str4[] = "";
	char str5[5];
	char str6[5];
	char str7[10];
	char str8[10];

//ft_strlen//
	ft_putstr(YEL "ft_strlen\n");
	if (ft_strlen(str) != 12)
		ft_putstr(RED "Wrong length ft_strlen\n");
	else
		ft_putstr(GRN "ft_strlen OK :)\n" RESET);

//ft_putnbr//
	ft_putstr(YEL "\nft_putnbr\n" RESET);
	ft_putstr("verifier que les valeurs a droite sont OK\n");
	ft_putstr("42 = ");
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putstr("-42 = ");
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putstr("-2147483648 = ");
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putstr("2 = ");
	ft_putnbr(2);
	ft_putchar('\n');

//ft_putendl//
	ft_putstr(YEL "\nft_putendl\n" RESET);
	ft_putstr("verifier que le retour a la ligne est present\n");
	ft_putendl(str);

//ft_strcmp//
	ft_putendl(YEL "\nft_strcmp" RESET);
	if (ft_strcmp(str, str2) == strcmp(str, str2))
		ft_putendl(GRN "test 1 OK :)");
	else
		ft_putendl(RED "error test1 :(");
	if (ft_strcmp(str2, str3) == strcmp(str2, str3))
		ft_putendl(GRN "test 2 OK :)");
	else
		ft_putendl(RED "error test2 :(");
	if (ft_strcmp(str3, str4) == strcmp(str3, str4))
		ft_putendl(GRN "test 3 OK :)");
	else
		ft_putendl(RED "error test3 :(");

//ft_strdup change//
	ft_putendl(YEL "\nft_strdup" RESET);
	if (ft_strcmp(ft_strdup(str), "Hello World!") != 0)
		ft_putendl(RED "Error :(");
	else
		ft_putendl(GRN "ft_strdup OK :)");

//ft_strncmp//
	ft_putendl(YEL "\nft_strncmp" RESET);
	if (ft_strncmp(str, str2, 4) == strncmp(str, str2, 4))
		ft_putendl(GRN "test 1 OK :)");
	else
		ft_putendl(RED "error test1 :(");
	if (ft_strncmp(str3, str4, 2) == strncmp(str3, str4, 2))
		ft_putendl(GRN "test 2 OK :)");
	else
		ft_putendl(RED "error test2 :(");
	if (ft_strncmp("coucou", "coucoutoi", 6) == strncmp("coucou", "coucoutoi", 6))
		ft_putendl(GRN "test 3 OK :)");
	else
		ft_putendl(RED "error test3 :(");
	if (ft_strncmp("coucoutoi", "couci", 6) == strncmp("coucoutoi", "couci", 6))
		ft_putendl(GRN "test 4 OK :)");
	else
		ft_putendl(RED "error test4 :(");

//ft_strclr//
	ft_putendl(YEL "\nft_strclr" RESET);
	ft_putstr("avant str3 = ");
	ft_putstr(str3);
	ft_putchar('\n');
	ft_strclr(str3);
	ft_putstr("apres str3 = ");
	ft_putstr(str3);
	ft_putchar('\n');
	i = 0;
	j = 0;
	while (i <= ft_strlen(str3))
	{
		if (str3[i] != '\0')
			j = 1;
		else 
			j = 0;
		i++;
	}
	if (j == 1)
			ft_putendl(RED "error test1 :(" RESET);
	else
		ft_putendl(GRN "test1 OK :)" RESET);

//ft_strcpy//
	ft_putendl(YEL "\nft_strcpy" RESET);
	if (ft_strcmp(ft_strcpy(str7, "coucou"), strcpy(str8, "coucou")) != 0)
		ft_putendl(RED "error test1 :(" RESET);
	else
		ft_putendl(GRN "test1 OK :)");
	ft_strclr(str7);
	ft_strclr(str8);
	if (ft_strcmp(ft_strcpy(str5, "hell"), strcpy(str6, "hell")) != 0)
		ft_putendl(RED "error test2 :(" RESET);
	else
		ft_putendl(GRN "test2 OK :)" RESET);
	ft_strclr(str5);
	ft_strclr(str6);

//ft_strcnpy//
		
	ft_putendl(YEL "\nft_strncpy" RESET);
	if (ft_strcmp(ft_strncpy(str7, "coucou", 3), strncpy(str8, "coucou", 3)) != 0)
		ft_putendl(RED "error test1 :(" RESET);
	else
		ft_putendl(GRN "test1 OK :)" RESET);
	ft_strclr(str7);
	ft_strclr(str8);
	if (ft_strcmp(ft_strncpy(str5, "hell", 2), strncpy(str6, "hell", 2)) != 0)
		ft_putendl(RED "error test2 :(" RESET);
	else
		ft_putendl(GRN "test2 OK :)" RESET);
	ft_strclr(str5);
	ft_strclr(str6);
	if (ft_strcmp(ft_strncpy(str7, "coucoutoi", 6), 
				strncpy(str8, "coucoutoi", 6)) != 0)
		ft_putendl(RED "error test3 :(" RESET);
	else
		ft_putendl(GRN "test3 OK :)");
	ft_strclr(str7);
	ft_strclr(str8);
	if (ft_strcmp(ft_strncpy(str7, "couci", 6), 
				strncpy(str8, "couci", 6)) != 0)
		ft_putendl(RED "error test4 :(");
	else
		ft_putendl(GRN "test4 OK :)");
	ft_strclr(str7);
	ft_strclr(str8);

//ft_strstr//
	ft_putendl(YEL "\nft_strstr" RESET);
	ft_putstr("Haystack = ");
	ft_putendl(str);
	ft_putendl("Needle = Worl");
	ft_putstr("strstr result = ");
	ft_putendl(strstr(str, "Worl"));
	ft_putstr("ft_strstr result = ");
	ft_putendl(ft_strstr(str, "Worl"));
	if (ft_strcmp(ft_strstr(str, "Worl"), strstr(str, "Worl")) != 0)
		ft_putendl(RED "error test1 :(" RESET);
	else
		ft_putendl(GRN "test1 ok :)" RESET);
	ft_putstr("Haystack = ");
	ft_putendl(str);
	ft_putendl("Needle = ");
	ft_putstr("strstr result = ");
	ft_putendl(strstr(str, ""));
	ft_putstr("ft_strstr result = ");
	ft_putendl(ft_strstr(str, ""));
	if (ft_strcmp(ft_strstr(str, ""), strstr(str, "")) != 0)
		ft_putendl(RED "error test2 :(" RESET);
	else
		ft_putendl(GRN "test2 ok :)" RESET);

//ft_strnstr//
	ft_putendl(YEL "\nft_strnstr" RESET);
	ft_putstr("Haystack = ");
	ft_putendl(str);
	ft_putendl("Needle = Worl");
	ft_putendl("len = 10");
	ft_putstr("strnstr result = ");
	ft_putendl(strnstr(str, "Worl", 10));
	ft_putstr("ft_strnstr result = ");
	ft_putendl(ft_strnstr(str, "Worl", 10));
	if (ft_strcmp(ft_strnstr(str, "Worl", 10), strnstr(str, "Worl", 10)) != 0)
		ft_putendl(RED "error test1 :(" RESET);
	else
		ft_putendl(GRN "test1 ok :)" RESET);
	ft_putendl("search 'Wo' in 'Hello World!' with len 3"); 
	if (ft_strnstr(str, "Wo", 3) != strnstr(str, "Wo", 3))
		ft_putendl(RED "error test2 :(" RESET);
	else
		ft_putendl(GRN "test2 ok :)" RESET);

//ft_strcat//
	ft_putendl(YEL "\nft_strcat" RESET);
	if (ft_strcmp(ft_strcat(str7, "ca va"), strcat(str8, "ca va")) != 0)
		ft_putendl(RED "error test1 :(");
	else
		ft_putendl(GRN "test1 ok :)" RESET);
	ft_strclr(str7);
	ft_strclr(str8);
	if (ft_strcmp(ft_strcat(str7, "qwertyuio"), strcat(str8, "qwertyuio")) != 0)
		ft_putendl(RED "error test2 :(" RESET);
	else
		ft_putendl(GRN "test2 ok :)" RESET);
	ft_strclr(str7);
	ft_strclr(str8);

//ft_strncat//
	ft_putendl(YEL "\nft_strncat" RESET);
	ft_putendl("cat 4 characters from 'ca va'");
	ft_putstr("strncat result = ");
	ft_putendl(strncat(str7, "ca va", 4));
	ft_putstr("ft_strncat result = ");
	ft_putendl(ft_strncat(str8, "ca va", 4));
	ft_strclr(str7);
	ft_strclr(str8);
	if (ft_strcmp(ft_strncat(str7, "ca va", 4), strncat(str8, "ca va", 4)) != 0)
		ft_putendl(RED "error test1 :(" RESET);
	else
	ft_putendl(GRN "test1 ok :)" RESET);
	ft_strclr(str7);
	ft_strclr(str8);
	
	ft_putendl("cat 6 characters from 'qwertyuio'");
	ft_putstr("strncat result = ");
	ft_putendl(strncat(str7, "qwertyuio", 6));
	ft_putstr("ft_strncat result = ");
	ft_putendl(ft_strncat(str8, "qwertyuio", 6));
	ft_strclr(str7);
	ft_strclr(str8);
	if (ft_strcmp(ft_strncat(str7, "qwertyuio", 6), strncat(str8, "qwertyuio", 6)) != 0)
		ft_putendl(RED "error test2 :(" RESET);
	else
	ft_putendl(GRN "test2 ok :)" RESET);
	ft_strclr(str7);
	ft_strclr(str8);
	
	ft_putendl("cat 0 characters from 'ca va'");
	ft_putstr("strncat result = ");
	ft_putendl(strncat(str7, "ca va", 0));
	ft_putstr("ft_strncat result = ");
	ft_putendl(ft_strncat(str8, "ca va", 0));
	ft_strclr(str7);
	ft_strclr(str8);
	if (ft_strcmp(ft_strncat(str7, "ca va", 0), strncat(str8, "ca va", 0)) != 0)
		ft_putendl(RED "error test3 :(" RESET);
	else
		ft_putendl(GRN "test3 ok :)" RESET);
	ft_strclr(str7);
	ft_strclr(str8);

//ft_isalpha//
	ft_putendl(YEL "\nft_isalpha" RESET);
	i = 'A';
	while (i <= 'Z')
	{
		if (ft_isalpha(i) != isalpha(i))
			ft_putendl(RED "error test MAJ :(" RESET);
		i++;
	}
	ft_putendl(GRN "test MAJ OK :)" RESET);
	i = 'a';
	while (i <= 'z')
	{
		if (ft_isalpha(i) != isalpha(i))
			ft_putendl(RED "error test min :(" RESET);
		i++;
	}
	ft_putendl(GRN "test min OK :)" RESET);

//ft_isdigit//
	return (0);
}
