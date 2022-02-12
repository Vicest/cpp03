/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:56:45 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/12 23:03:45 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &diamondt);
		~DiamondTrap(void);
		DiamondTrap	&operator=(DiamondTrap const &diamondt);
		void		attack(std::string const &target);
		void		whoAmI(void);
	private:
		std::string	_name;
};
#endif
