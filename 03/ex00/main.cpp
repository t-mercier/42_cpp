/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/07 10:25:21 by tmercier      #+#    #+#                 */
/*   Updated: 2023/07/07 14:47:57 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iterator>

int main()
{
  std::cout << "============" << std::endl;
  std::cout << "LOS BANDIDOS" << std::endl;
  std::cout << "============" << std::endl;
  ClapTrap theFirst;
  ClapTrap Pablo("Pablo");
  
	theFirst.attack("Muchacho");
	theFirst.takeDamage(6);
	theFirst.beRepaired(4);
	theFirst.takeDamage(3);
	theFirst.beRepaired(8);
	theFirst.takeDamage(17);

  Pablo.attack("Escobar");
	Pablo.takeDamage(2);
	Pablo.beRepaired(5);
	Pablo.takeDamage(3);
	Pablo.beRepaired(9);
	Pablo.takeDamage(6);
}
