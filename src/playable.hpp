/*
 * playavle.hpp
 *
 *  Created on: 13 aug. 2016
 *      Author: Mitra
 */

#ifndef PLAYABLE_HPP_
#define PLAYABLE_HPP_

#include "character.hpp"
#include <string>

class Playable : public Character {

public:
	Playable();
	virtual ~Playable();

	virtual std::string go() = 0;
	virtual std::string interact(const Character& character) = 0; 	//eventuellt ta bort const ifall de påverkar varandra
	virtual std::string fight(const Character& character) = 0;		//samma...
};



#endif /* PLAYABLE_HPP_ */
