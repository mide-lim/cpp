/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-lim <mide-lim@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 20:13:29 by mide-lim          #+#    #+#             */
/*   Updated: 2026/06/15 20:13:30 by mide-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl/Harl.hpp"

int main () {
    Harl harl;
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    return 0;
}
