/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

class Animal{
	private:
		std::string name;
		double height;
		double weight;
		
		//static variable shares value for all objects
		//shared value for all animals
		static int numOfAnimals;

	public:
		//getters and setters
		std::string getName(){return name;}
		void setName(std::string name){this->name = name;}
		double getHeight(){return height;}
		void setHeight(double height){this->height = height;}
		double getWeight(){return weight;}
		void setWeight(double weight){this->weight = weight;}
		
		//set/reset all values usually have name as a good practice
		void setAll(std::string, double, double);
		Animal(std::string, double, double);
		
		//overloaded constructor
		Animal();
		
		//Deconstructor
		~Animal();
		
		//can only access static variables
		static int getNumOfAnimals(){return numOfAnimals;}
		
		void toString();
				
};	
	int Animal::numOfAnimals = 0;
	void Animal::setAll(std::string name, double height, double weight)
	{
		this->name = name;
		this->weight = weight;
		this-> height = height;
	}
	
	//Constructor is set here 
	Animal::Animal(std::string name, double height, double weight)
	{
		this->name = name;
		this->weight = weight;
		this-> height = height;
	}
	
	Animal::Animal()
	{
		this->name = "";
		this->weight = 0;
		this-> height = 0;
		Animal::numOfAnimals++;
	}
	
	Animal::~Animal()
	{
		std::cout<<"Animal "<<this->name <<" destroyed\n";
	
	}
	void Animal::toString()
	{
		std::cout<<this->name<<" is "<<this->height<< " cm tall "<<this->weight<<" kgs in weight\n";
	}
	
	
	class Dog: public Animal
	{
		private:
			std::string sound = "Woof";
		public:
			void makeSound()
			{
				std::cout << "The dog "<< this->getName() <<" says "<<this->sound<<"\n"; 
				
			}
			
			Dog(std::string, double, double, std::string);
			Dog(): Animal(){};
			void toString();
			
		
	};
	
	Dog::Dog(std::string name, double height, double weight, std::string sound) : Animal(name, height, weight)
	{
		this->sound = sound;
	}
	
	void Dog::toString()
	{
		std::cout<<this->getName()<< " is "<<this->getHeight()<<" cm tall "<<this->getWeight()<<" kgs in weight and says "<<this->sound<<endl;
	}
	
	int main()
	{
		Animal fred;
		fred.toString();
		fred.setHeight(33);
		fred.setWeight(10);
		fred.setName("Fred");
		
		fred.toString();
		
		//constructor call
		Animal tom("tom", 36, 15);
		tom.toString();
		
		Dog spot("Spot", 38, 16, "Wooof");
		spot.toString();
		
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
