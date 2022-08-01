#ifndef DIAMOND_HPP
#define DIAMOND_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	// 	int			hitPoints;
	// 	int			energyPoints;
	// 	int			attackDamage;
	public:
		DiamondTrap();
		DiamondTrap( std::string );
		DiamondTrap & operator=( DiamondTrap const & dt );
		~DiamondTrap();
		void attack(const std::string& target);
		// void takeDamage(unsigned int amount);
		// void beRepaired(unsigned int amount);
		void whoAmI();
};


#endif