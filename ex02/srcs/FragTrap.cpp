/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:40:52 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/12 09:49:47 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("nobody", 30, 100, 100)
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 30, 100, 100)
{
	std::cout << "Name FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "Copy assignment FragTrap operator called" << std::endl;
	this->_name = rhs.get_name();
	this->_energy_points = rhs.get_energy_points();
	this->_hit_points = rhs.get_hit_points();
	this->_attack_damage = rhs.get_attack();
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "FragTrap " << _name << " try to make a high five with some dudes..." << std::endl;
	}
	return ;
}
