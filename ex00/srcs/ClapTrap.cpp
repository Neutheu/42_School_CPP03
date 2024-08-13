/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:24:35 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/12 09:38:54 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}
ClapTrap::ClapTrap(std::string name): _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Name constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = rhs.get_name();
	this->_energy_points = rhs.get_energy_points();
	this->_hit_points = rhs.get_hit_points();
	this->_attack_damage = rhs.get_attack();
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << \
		_attack_damage << " points of damage!" << std::endl;
		_energy_points -= 1;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage !" \
		<< std::endl;
		_hit_points -= amount;
	}
	else
		std::cout << "ClapTrap " << _name << " is already dead !" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout << "ClapTrap " << _name << " repaired itself and get " \
		<< amount << " points back !" << std::endl;
		_hit_points += amount;
		_energy_points -= 1;
	}
	return ;
}

std::string	ClapTrap::get_name(void) const
{
	return (this->_name);
}

int	ClapTrap::get_energy_points(void) const
{
	return (this->_energy_points);
}

int	ClapTrap::get_hit_points(void) const
{
	return (this->_hit_points);
}

int	ClapTrap::get_attack(void) const
{
	return (this->_attack_damage);
}