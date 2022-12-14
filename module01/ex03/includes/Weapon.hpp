#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	public:
		// Constructors
		Weapon();
		Weapon(std::string type);
		
		// Destructor
		~Weapon();
		
		// Getters / Setters
		std::string getType() const;
		void setType(std::string type);
		
	private:
		std::string _type;
		
};

#endif