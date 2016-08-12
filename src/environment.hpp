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

class Environment {
	//vector with neighbors? static linked list?

public:
	Environment();
	virtual ~Environment();

	std::string location() = 0; //return name of location
};



#endif /* ENVIRONMENT_HPP_ */
