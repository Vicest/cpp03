/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:04:38 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/13 17:56:13 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include "ClapTrap.hpp"
class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &scavt);
		~ScavTrap(void);
		ScavTrap		&operator=(ScavTrap const &scavt);
		void			guardGate(void);
		virtual void	attack(std::string const &target) const;
	private:
};
#endif
