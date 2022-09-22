#include "Zombie.hpp"

void randomChump( STR name )
{
	Zombie zombie =  Zombie(name);
	zombie.announce();
}