/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 19:34:29 by mide-lim          #+#    #+#             */
/*   Updated: 2026/06/15 19:34:33 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
		Zombie();
		Zombie(std::string zname);
		~Zombie();
		void	announce(void);
		std::string	getName();
		void	setName(std::string name);
};
