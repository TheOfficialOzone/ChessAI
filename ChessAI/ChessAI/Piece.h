#pragma once

#include <string>

class ChessPiece {
public:
	int team = -1;	//The team
	int type = -1;	//The type of piece
	std::string name;	//The name

	void setName(std::string newName);
	void setType(int newType);
	void setTeam(int newTeam);
};