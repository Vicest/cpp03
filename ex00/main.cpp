/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:18:02 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/12 19:15:04 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	A;
	ClapTrap	B(A);
	ClapTrap	C("Terminator");

	A.attack("Sheep");
	C.attack("Nope, not a name");

	C.takeDamage(4);
	C.takeDamage(4);
	C.takeDamage(4);
	C.takeDamage(4);

	C.attack("Don't print");

	C.beRepaired(3);
	C.beRepaired(3);
	C.beRepaired(3);
	C.beRepaired(3);
	C.beRepaired(3);

	C.takeDamage(100);
}
