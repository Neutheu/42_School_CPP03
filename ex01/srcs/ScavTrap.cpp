/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:40:52 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/12 09:48:04 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("nobody", 20, 50, 100)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 20, 50, 100)
{
	std::cout << "Name ScavTrap constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Copy assignment ScavTrap operator called" << std::endl;
	this->_name = rhs.get_name();
	this->_energy_points = rhs.get_energy_points();
	this->_hit_points = rhs.get_hit_points();
	this->_attack_damage = rhs.get_attack();
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << \
		_attack_damage << " points of damage!" << std::endl;
		_energy_points -= 1;
	}
	return ;
}

void	ScavTrap::guardGate()
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
	}
	return ;
}