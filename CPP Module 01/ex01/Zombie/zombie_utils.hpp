/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie_utils.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:08:58 by mide-lim          #+#    #+#             */
/*   Updated: 2026/06/15 20:08:59 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

Zombie	*randomChamp(std::string name);
Zombie	*newZombie(std::string name);
Zombie  *zombieHorde(int N, std::string name);
void	zombieHordeAnnounce(int N, Zombie *Horde);
