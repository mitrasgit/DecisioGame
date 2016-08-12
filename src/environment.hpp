/*
 * environment.hpp
 *
 * Abstract class for environments in the game, the room of the first
 * character, maifia's headquarter, school etc
 *
 *  Created on: 12 aug. 2016
 *      Author: Mitra
 */

#ifndef ENVIRONMENT_HPP_
#define ENVIRONMENT_HPP_

#include <string>

class Environment {
	//vector with neighbors? static linked list?

public:
	Environment();
	virtual ~Environment();

	virtual std::string location() const = 0; //return name of location
};



#endif /* ENVIRONMENT_HPP_ */
