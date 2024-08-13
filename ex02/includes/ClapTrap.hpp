/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouchal <nsouchal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:12:10 by nsouchal          #+#    #+#             */
/*   Updated: 2024/08/12 09:43:06 by nsouchal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstring>

class ClapTrap
{
	protected:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(std::string name, int _attack_damage, int _energy_points, int _hit_points);
	ClapTrap(ClapTrap const &src);
	ClapTrap &operator=(ClapTrap const &rhs);
	~ClapTrap(void);
	std::string	get_name(void) const;
	int			get_hit_points(void) const;
	int			get_energy_points(void) const;
	int			get_attack(void) const;
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif