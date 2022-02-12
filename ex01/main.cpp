/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 18:18:02 by vicmarti          #+#    #+#             */
/*   Updated: 2022/02/12 21:01:56 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

static void	line(void)
{
	std::cout << std::endl;;
}

int	main(void)
{
	FragTrap	A;
	line();
	FragTrap	B(A);
	line();
	FragTrap	C("Terminator");
	line();
	FragTrap	D(C);
	line();

	D.attack("Test");
	line();
	C.attack("Sheep");
	line();
	C.attack("Nope, not a name");
	line();

	C.takeDamage(30);
	line();
	C.takeDamage(30);
	line();
	C.takeDamage(30);
	line();
	C.takeDamage(30);
	line();

	C.attack("Don't print");
	line();

	C.beRepaired(30);
	line();
	C.beRepaired(30);
	line();
	C.beRepaired(30);
	line();
	C.beRepaired(30);
	line();
	C.beRepaired(30);
	line();

	C.guardGate();
	line();

	C.takeDamage(100000);
	line();

	C.guardGate();
	line();
}
