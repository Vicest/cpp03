/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:04:38 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/13 17:56:13 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include "ClapTrap.hpp"
class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &fragt);
		~FragTrap(void);
		FragTrap		&operator=(FragTrap const &fragt);
		void			highFivesGuys(void);
		virtual void	attack(std::string const &target) const;
	private:
};
#endif
