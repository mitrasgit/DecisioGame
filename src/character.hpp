/*
 * character.hpp Abstract class for characters in the game
 *
 *  Created on: 12 aug. 2016
 *      Author: Mitra
 */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <string>

class Character {
protected:
	int health;
	int age;
	//vector with items
	bool hasTreasure;

public:
	Character();
	virtual ~Character();

	virtual std::string name() const = 0;
	virtual std::string type() const = 0;
	virtual std::string action() = 0;
	//virtual std::string pick(const Item& item) const = 0;
	//virtual std::string drop(const Item& item) const = 0;


};

#endif /* CHARACTER_HPP_ */
