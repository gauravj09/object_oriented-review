#include <iostream>
#include <vector>
#include <ctime>
#include <numeric>
#include <math.h>

class Warrior
{
	private: 
		int health, attack, block; 
		std::string name;
	public:
		void setHealth()
		{
			this->health = health;
		}
		int getHealth()
		{
			return health;
		}
		
		void setAttack()
		{
			this->attack = attack;
		}
		int getAttack()
		{
			return attack;
		}
		
		void setAttack()
		{
			this->health = health;
		}
		int getAttack()
		{
			return attack;
		}
		
		void setName()
		{
			this->name = name;
		}
		std::string getName()
		{
			return name;
		}
	
	Warrior::Warrior(name, health, attack, block)
	{
		this->health = health;
		this->attack = attack;
		this->block = block;
		this->name = name;
	}

	Warrior::Warrior()
	{
		this->health = health;
		this->attack = attack;
		this->block = block;
		this->name = name;
	}
		
	
};



class Battle : public Warrior
{
	public:
		void startFight()
		{
			cout<<this->name<<" attacks"
		}
	
	
	
	
	
	
	
	
	
	
};








int main()
{
	srand(time(NULL));
	Warrior thunder("Thor", 100, 30, 15);
	Warrior bruteforce("Hulk", 135, 25, 10);
	
	Battle::startFight(thor, hulk);
	
	
	
	
	
	
	
	
	
	/*
	Thor attacks Hulk and deals 12 damage
	Hulk is down to 28 health
	Hulk attacks Thor and deals 3 damage
	Thor is down to 37 health
	Thor attacks Hulk and deals 14 damage
	Hulk is down to 14 health
	Hulk attacks Thor and deals 0 damage
	Thor is down to 37 health
	Thor attacks Hulk and deals 14 damage
	Hulk is down to 0 health
	Hulk has Died and Thor is Victorious
	Game Over
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}