/*
 * character.hpp Abstract class for characters in the game
 *
 *  Created on: 12 aug. 2016
 *      Author: Mitra
 */

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

class Character {
protected:
	int health;
	int age;
	//vector with items
	bool hasTreasure;

public:
	Character();
	virtual ~Character();


};

#endif /* CHARACTER_HPP_ */
