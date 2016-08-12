/*
 * Noob.cpp The first character the player will be.
 *
 *  Created on: 13 aug. 2016
 *      Author: Mitra
 */

#include "noobPlayable.hpp"
#include <iostream>
#include <string>

NoobPlayable::NoobPlayable() {}
NoobPlayable::~NoobPlayable() {}

std::string NoobPlayable::name() const {
	std::cout << "name" << std::endl;
	return "";
}

std::string NoobPlayable::type() const {
	std::cout << "type" << std::endl;
	return "";
}

std::string NoobPlayable::action() {
	std::cout << "action" << std::endl;
	return "";
}

std::string NoobPlayable::go() {
	std::cout << "go" << std::endl;
	return "";
}

std::string NoobPlayable::interact(const Character& character) { 	//eventuellt ta bort const ifall de påverkar varandra
	std::cout << "interact" << std::endl;
	return "";
}

std::string NoobPlayable::fight(const Character& character) {		//samma...
	std::cout << "fight" << std::endl;
	return "";
}
