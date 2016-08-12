/*
 * noobPlayable.hpp
 *
 *  Created on: 13 aug. 2016
 *      Author: Mitra
 */

#ifndef NOOBPLAYABLE_HPP_
#define NOOBPLAYABLE_HPP_

#include "character.hpp"
#include "playable.hpp"
#include <string>

class NoobPlayable : Playable {

public:
	NoobPlayable();
	virtual ~NoobPlayable();

	virtual std::string name() const;
	virtual std::string type() const;
	virtual std::string action();
	virtual std::string go();
	virtual std::string interact(const Character& character); 	//eventuellt ta bort const ifall de påverkar varandra
	virtual std::string fight(const Character& character);		//samma...
};



#endif /* NOOBPLAYABLE_HPP_ */
