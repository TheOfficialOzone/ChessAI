

#include "Piece.h"

/*	Owen Zonneveld
*	Hold all the functions used for the ChessPieces
*	
*	Team List
*	0 - White
*	1 - Black
*
*	Piece Type List	
*	1 - Pawn
*	2 - Knight
*	3 - Bishop
*	4 - Rook
*	5 - Queen
*	6 - King
*/


void ChessPiece::setType(int newType) {
	type = newType;
}
void ChessPiece::setTeam(int newTeam) {
	team = newTeam;
}
void ChessPiece::setName(std::string newName) {
	name = newName;
}
