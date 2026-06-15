/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:08:45 by mide-lim          #+#    #+#             */
/*   Updated: 2026/06/15 20:08:46 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Zombie.hpp"
#include "./zombie_utils.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){
	std::cout << "Zombie destroyed" << std::endl;
};

void Zombie::announce()
{
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void Zombie::setName(std::string name)
{
	this->name = name;
};


std::string Zombie::getName()
{
	return this->name;
};

Zombie	*newZombie(std::string name)
{
	Zombie *mzombie = new Zombie();
	mzombie->setName(name);
	return mzombie;
}

Zombie	*randomChamp(std::string name)
{
	Zombie *mzombie = newZombie(name);
	mzombie->announce();
	return mzombie;
}

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*Horde = new Zombie[N];

	for (int i = 0; i< N; i++)
		Horde[i].setName(name);

	return Horde;
}

void	zombieHordeAnnounce(int N, Zombie *Horde)
{
	for (int i = 0; i< N; i++)
		Horde[i].announce();
}



