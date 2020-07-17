

//Includes

#include <iostream>		//	I/O
#include "ChessBoard.h";


/*	Owen Zonneveld
*	Program Goal:
*	Chess AI that executes a move in <1ms
*	
*	NEEDS HyperThreading, good optimization
*
*
*/

void main() {
	//Making a chess Piece
	ChessPiece myPiece;
	myPiece.setTeam(1);
	myPiece.setType(1);

	//Making a board
	ChessBoard newChessBoard;
	newChessBoard.boardSetSize(8, 8);
	newChessBoard.boardSetup();
	newChessBoard.boardSetPiece(1, 1, myPiece);
	newChessBoard.boardRender();
	
	return;	//Terminates the program
}