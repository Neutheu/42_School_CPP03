/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:02:39 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/12 09:39:35 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Jean_Luc("Jean-Luc");
	ClapTrap	Jean_Fredo("Jean-Fredo");
	Jean_Luc.attack("Fredo");
	Jean_Luc.takeDamage(3);
	Jean_Luc.beRepaired(10);
	Jean_Fredo = Jean_Luc;
	std::cout << "name : " << Jean_Fredo.get_name() << " hit_points : " << \
	Jean_Fredo.get_hit_points() << " energy_points : " << Jean_Fredo.get_energy_points()\
	<< " attack : " << Jean_Fredo.get_attack() << std::endl;
	return (0);
}