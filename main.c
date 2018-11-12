/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mybenzar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:49:25 by mybenzar          #+#    #+#             */
/*   Updated: 2018/11/12 15:51:59 by mybenzar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define CYN   "\x1B[36m"
#define RESET "\x1B[0m"
#define CLEAR "ft_strclr(str5); ft_strclr(str6); ft_strclr(str7); ft_strclr(str8)"

void	ft_putchari(unsigned int i, char *s)
{
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		ft_putchar(' ');
		ft_putstr("index = ");
		ft_putnbr(i);
		ft_putchar ('\n');
		i++;
	}
}

int	main(void)
{
	int i;
	int j;
	int fd;
	char c;
	char str[] = "Hello World!";
	char str2[] = "Coucou";
	char str3[] = "Coucou";
	char str4[] = "";
	char str5[5];
	char str6[5];
	char str7[10];
	char str8[10];
	char str_atoi[257];

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
	i = 0;
	while (i <= 127)
	{
		if (ft_isalpha(i) != isalpha(i))
			ft_putendl(RED "error test :(" RESET);
		i++;
	}
	ft_putendl(GRN "test OK :)" RESET);

//ft_isdigit//
	ft_putendl(YEL "\nft_isdigit" RESET);
	i = 0;
	while (i <= 127)
	{
		if (ft_isdigit(i) != isdigit(i))
			ft_putendl(RED "error test :(" RESET);
		i++;
	}
	ft_putendl(GRN "test OK :)" RESET);

//ft_isalnum//
	ft_putendl(YEL "\nft_isalnum" RESET);
	i = 0;
	j = 0;
	while (i <= 256)
	{ 
		if (ft_isalnum(i) != isalnum(i))
		{
			ft_putendl(RED "error test :(" RESET);
			ft_putstr("for i = ");
			ft_putnbr(i);
			j = 1;
		}
		i++;
	}
	if (j == 0)
		ft_putendl(GRN "test OK :)" RESET);

//ft_isascii//
	ft_putendl(YEL "\nft_isascii" RESET);
	i = 0;
	j = 0;
	while (i <= 256)
	{ 
		if (ft_isascii(i) != isascii(i))
		{
			ft_putendl(RED "error test :(" RESET);
			ft_putstr("for i = ");
			ft_putnbr(i);
			j = 1;
		}
		i++;
	}
	if (j == 0)
		ft_putendl(GRN "test OK :)" RESET);

//ft_isprint//
	ft_putendl(YEL "\nft_isprint" RESET);
	i = 0;
	j = 0;
	while (i <= 256)
	{ 
		if (ft_isprint(i) != isprint(i))
		{
			ft_putendl(RED "error test :(" RESET);
			ft_putstr("for i = ");
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putstr("ft_isprint should return ");
			ft_putnbr(isprint(i));
			ft_putchar('\n');
			j = 1;
		}
		i++;
	}
	if (j == 0) 
		ft_putendl(GRN "test OK :)" RESET);

//ft_toupper//
	ft_putendl(YEL "\nft_toupper" RESET);
	i = 0;
	j = 0;
	while (i <= 256)
	{
		if (ft_toupper(i) != toupper(i))
		{
			ft_putendl(RED "error test :(" RESET);
			ft_putstr("for i = ");
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putstr("ft_toupper should return ");
			ft_putnbr(toupper(i));
			ft_putchar('\n');
			j = 1;
		}
		if (i >= 'a' && i <= 'z')
		{
			ft_putchar(i);
			ft_putchar('=');
			ft_putchar(ft_toupper(i));
			ft_putchar('\n');
		}
		i++;
	}
	if (j == 0) 
		ft_putendl(GRN "test OK :)" RESET);
	
//ft_tolower//
	ft_putendl(YEL "\nft_toupper" RESET);
	i = 0;
	j = 0;
	while (i <= 256)
	{
		if (ft_tolower(i) != tolower(i))
		{
			ft_putendl(RED "error test :(" RESET);
			ft_putstr("for i = ");
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putstr("ft_tolower should return ");
			ft_putnbr(tolower(i));
			ft_putchar('\n');
			j = 1;
		}
		if (i >= 'A' && i <= 'Z')
		{
			ft_putchar(i);
			ft_putchar('=');
			ft_putchar(ft_tolower(i));
			ft_putchar('\n');
		}
		i++;
	}
	if (j == 0) 
		ft_putendl(GRN "test OK :)" RESET);

//ft_atoi//
	ft_putendl(YEL "\nft_atoi" RESET);
	c = 0;
	i = 0;
	ft_strcat(str_atoi, "hello comment 42 ca va ++-- 23947684623 -65");
	ft_putstr("ft_atoi = ");
	ft_putnbr(ft_atoi(str_atoi));
	ft_putchar('\n');
	ft_putstr("atoi = ");
	ft_putnbr(atoi(str_atoi));
	ft_putchar('\n');
	if (ft_atoi(str_atoi) != atoi(str_atoi))
		ft_putendl(RED "error test1 :(" RESET);
	else
		ft_putendl(GRN "test! ok :)" RESET);
	ft_strclr(str_atoi);
	ft_strcat(str_atoi, "42234567 -89023947");
	ft_putstr("ft_atoi = ");
	ft_putnbr(ft_atoi(str_atoi));
	ft_putchar('\n');
	ft_putstr("atoi = ");
	ft_putnbr(atoi(str_atoi));
	ft_putchar('\n');
	if (ft_atoi(str_atoi) != atoi(str_atoi))
		ft_putendl(RED "error test2 :(" RESET);
	else
		ft_putendl(GRN "test2 ok :)" RESET);
	ft_strclr(str_atoi);
	ft_strcat(str_atoi, "-4225 67");
	ft_putstr("ft_atoi = ");
	ft_putnbr(ft_atoi(str_atoi));
	ft_putchar('\n');
	ft_putstr("atoi = ");
	ft_putnbr(atoi(str_atoi));
	ft_putchar('\n');
	if (ft_atoi(str_atoi) != atoi(str_atoi))
		ft_putendl(RED "error test3 :(" RESET);
	else
		ft_putendl(GRN "test3 ok :)" RESET);
	ft_strclr(str_atoi);
	ft_strcat(str_atoi, "-+42257");
	ft_putstr("ft_atoi = ");
	ft_putnbr(ft_atoi(str_atoi));
	ft_putchar('\n');
	ft_putstr("atoi = ");
	ft_putnbr(atoi(str_atoi));
	ft_putchar('\n');
	if (ft_atoi(str_atoi) != atoi(str_atoi))
		ft_putendl(RED "error test4 :(" RESET);
	else
		ft_putendl(GRN "test4 ok :)" RESET);

//ft_strchr//
	ft_putendl(YEL "\nft_strchr" RESET);
	ft_putstr("ft_strchr = ");
	ft_putendl(ft_strchr(str, 'l'));
	ft_putstr("strchr = ");
	ft_putendl(strchr(str, 'l'));
	if (ft_strcmp(ft_strchr(str, 'l'), strchr(str, 'l')) != 0)
		ft_putendl(RED "error test1 :(" RESET);
	else
		ft_putendl(GRN "test1 OK :)" RESET);

	ft_putstr("ft_strchr = ");
	ft_putendl(ft_strchr(str, '\0'));
	ft_putstr("strchr = ");
	ft_putendl(strchr(str, '\0'));
	if (ft_strchr(str, '\0') != strchr(str, '\0'))
		ft_putendl(RED "error test2 :(" RESET);
	else
		ft_putendl(GRN "test2 OK :)" RESET);

	if (ft_strchr(str, 'k') == '\0' && strchr(str, 'k') == '\0')
		ft_putendl(GRN "test3 OK :)" RESET);
	else
		ft_putendl(RED "error test3 :(" RESET);

//ft_strrchr//
	ft_putendl(YEL "\nft_strrchr" RESET);
	ft_putstr("ft_strrchr = ");
	ft_putendl(ft_strrchr(str, 'l'));
	ft_putstr("strrchr = ");
	ft_putendl(strrchr(str, 'l'));
	if (ft_strcmp(ft_strrchr(str, 'l'), strrchr(str, 'l')) != 0)
		ft_putendl(RED "error test1 :(" RESET);
	else
		ft_putendl(GRN "test1 OK :)" RESET);

	ft_putstr("ft_strrchr = ");
	ft_putendl(ft_strrchr(str, '\0'));
	ft_putstr("strrchr = ");
	ft_putendl(strrchr(str, '\0'));
	if (ft_strrchr(str, '\0') != strrchr(str, '\0'))
		ft_putendl(RED "error test2 :(" RESET);
	else
		ft_putendl(GRN "test2 OK :)" RESET);

//ft_striter//
	ft_putendl(YEL "\nft_striter" RESET);
	ft_strcat(str7, "hello world");
	ft_putstr("before = ");
	ft_putendl(str7);
	ft_striter(str7, ft_strclr);
	ft_putstr("after"); 
	ft_putendl(str7);
	if (str7[0] == '\0')
		ft_putendl(GRN "test1 OK :)" RESET);
	else
		ft_putendl(RED "error test1 :(" RESET);

//ft_striteri//
	ft_putendl(YEL "\nft_striteri" RESET);

//ft_strnequ//
	ft_putendl(YEL "\nft_strnequ" RESET);
	if (ft_strnequ("hello", "hel", 3) != 0)
		ft_putendl(GRN "test1 OK :)" RESET);
	else
		ft_putendl(RED "error test1 :(" RESET);
	if (ft_strnequ("hello", "hep", 3) == 0)
		ft_putendl(GRN "test2 OK :)" RESET);
	else
		ft_putendl(RED "error test2 :(" RESET);

//ft_strequ//
	ft_putendl(YEL "\nft_strequ" RESET);
	if (ft_strequ("hello", "hel") == 0)
		ft_putendl(GRN "test1 OK :)" RESET);
	else
		ft_putendl(RED "error test1 :(" RESET);

//ft_putchar_fd//
	ft_putendl(YEL "\nft_putchar_fd" RESET);
	fd = open("test", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	ft_putchar_fd('c', fd);
	if (fd == -1)
		ft_putendl(RED "error test1 :(" RESET);
	else
	{
		ft_putstr("fd = ");
		ft_putnbr(fd);
		ft_putchar('\n');
		ft_putendl("verifier que le cat de test donne bien 'c'");
		ft_putchar('\n');
		ft_putendl(GRN "test1 OK :)" RESET);
	}

//ft_putstr_fd//
	ft_putendl(YEL "\nft_putstr_fd" RESET);
	fd = open("test2", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	ft_putstr_fd("coucou", fd);
	if (fd == -1)
		ft_putendl(RED "error test1 :(" RESET);
	else
	{
		ft_putstr("fd = ");
		ft_putnbr(fd);
		ft_putchar('\n');
		ft_putendl("verifier que le cat de test2 donne bien 'coucou'");
		ft_putendl(GRN "test1 OK :)" RESET);
	}

//ft_putendl_fd//
	ft_putendl(YEL "\nft_putendl_fd" RESET);
	fd = open("test3", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	ft_putendl_fd("coucou", fd);
	if (fd == -1)
		ft_putendl(RED "error test1 :(" RESET);
	else
	{
		ft_putstr("fd = ");
		ft_putnbr(fd);
		ft_putchar('\n');
		ft_putendl("verifier que le cat -e de test3 donne bien 'coucou$'");
		ft_putendl(GRN "test1 OK :)" RESET);
	}


//ft_putnbr_fd//
	ft_putendl(YEL "\nft_putnbr_fd" RESET);
	fd = open("test4", O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	ft_putnbr_fd(42, fd);
	if (fd == -1)
		ft_putendl(RED "error test1 :(" RESET);
	else
	{
		ft_putstr("fd = ");
		ft_putnbr(fd);
		ft_putchar('\n');
		ft_putendl("verifier que le cat de test4 donne bien '42'");
		ft_putendl(GRN "test1 OK :)" RESET);
	}
	return (0);
}
