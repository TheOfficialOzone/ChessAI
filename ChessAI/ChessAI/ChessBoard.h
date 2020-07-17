#pragma once

#include "Piece.h"

class ChessBoard {
public:
	int width, height;	//It's width and height (WILL ALWAYS BE 8)

	bool** gridHasPiece;	//Tracks if a piece is on that spot of the board
	ChessPiece** gridChessPiece;	//Holds te piece at the position

	
	//Default stats
	void gridDefaultSetup();
									
	//-----------------------Setting the board
	void boardSetSize(int newWidth, int newHeight);
	void boardSetup();
	void boardSetPiece(int xPos, int yPos, ChessPiece newChessPiece);



	//-----------------------Rendering
	void boardRender();	//Renders the board through text ATM
};