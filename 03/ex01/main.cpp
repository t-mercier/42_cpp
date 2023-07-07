/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tmercier <tmercier@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/07 10:25:21 by tmercier      #+#    #+#                 */
/*   Updated: 2023/07/07 16:09:05 by tmercier      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iterator>

int main()
{
  std::cout << "============" << std::endl;
  std::cout << "LOS BANDIDOS" << std::endl;
  std::cout << "============" << std::endl;
  // ClapTrap trap1;
  // ClapTrap trap2("Clap I");
	// trap1.attack("Clap II");
	// trap1.takeDamage(6);
	// trap1.beRepaired(4);
  
  ScavTrap defScav;
  ScavTrap scav("Scav I");
  ScavTrap test("Scav II");
  test.guardGate();
  scav.takeDamage(15);
  scav.guardGate();
  test.takeDamage(5);
  test.attack("bandidos");
}
