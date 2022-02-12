/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:04:38 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/12 22:19:41 by vicmarti         ###   ########.fr       */
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
		FragTrap(FragTrap const &clapt);
		~FragTrap(void);
		FragTrap	&operator=(FragTrap const &fragt);
		void	guardGate(void);
	private:
};
#endif
