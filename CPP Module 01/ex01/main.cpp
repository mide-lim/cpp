/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:30:22 by mide-lim          #+#    #+#             */
/*   Updated: 2026/06/15 19:30:23 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie/Zombie.hpp"
#include "./Zombie/zombie_utils.hpp"

int main()
{
	Zombie	*hord = zombieHorde(10, "fodase");
	zombieHordeAnnounce(10, hord);
	delete[] hord;
}
