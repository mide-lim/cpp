/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 19:06:16 by mide-lim          #+#    #+#             */
/*   Updated: 2026/05/13 19:06:47 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
			for (int j = 0; av[i][j]; j++)
				av[i][j] = toupper(av[i][j]);
		for (int i = 1; i < ac-1; i++)
			std::cout << av[i] << ' ';
		std::cout << av[ac-1] << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}