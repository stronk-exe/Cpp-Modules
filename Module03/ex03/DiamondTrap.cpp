#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default constractor called!" << std::endl;
	ClapTrap::name = "stronk_clap_name";
	DiamondTrap::name = "stronk";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

DiamondTrap::DiamondTrap( std::string _name )
{
	std::cout << "DiamondTrap Copy constractor called!" << std::endl;
	ClapTrap::name = _name + "_clap_name";
	DiamondTrap::name = _name;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

DiamondTrap &DiamondTrap::operator=( DiamondTrap const & dt )
{
	std::cout << "DiamondTrap Copy assignment operator called!" << std::endl;
	ClapTrap::name = dt.name + "_clap_name";
	DiamondTrap::name = dt.name;
	hitPoints = dt.hitPoints;
	energyPoints = dt.energyPoints;
	attackDamage = dt.attackDamage;
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	if (/*this->hitPoints > 0 && */energyPoints > 0)
	{
		std::cout << "DiamondTrap " << name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints -= 1;
	}
	else
		std::cout << "DiamondTrap has no hit points or energy points left!" << std::endl;
}

// void FragTrap::attack(const std::string& target)
// {
// 	if (hitPoints && energyPoints)
// 	{
// 		std::cout << "FragTrap " << name << " attacks " << target << " caising " << attackDamage << " points of damage!" << std::endl;
// 		attackDamage -= 1;
// 	}
// 	else
// 		std::cout << "FragTrap has no hit points or energy points left!" << std::endl;
// }

// void FragTrap::takeDamage(unsigned int amount)
// {
// 	std::cout << "ScavTrap " << name << " attacked taking " << amount << " points of damage!" << std::endl;
// 	hitPoints -= amount;
// 	energyPoints -= 1;
// }

// void FragTrap::beRepaired(unsigned int amount)
// {
// 	std::cout << "ScavTrap " << name << " repaires itself getting " << amount << " hit points!" << std::endl;
// 	hitPoints += amount;
// 	energyPoints += 1;
// }

void DiamondTrap::whoAmI()
{
	if (hitPoints > 0)
	    std::cout << "class name: "<< DiamondTrap::name << ", clapTrap name: " << ClapTrap::name << std::endl;
	else
		std::cout << "DiamondTrap no idk" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Deconstractor called!" << std::endl;
}