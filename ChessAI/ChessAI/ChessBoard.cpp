

#include <iostream>

#include "ChessBoard.h"


//-----------------------Setting the board
void ChessBoard::boardSetSize(int newWidth, int newHeight) {
	width = newWidth;
	height = newHeight;
}
void ChessBoard::boardSetup() {	//Makes the variables that will be used

	gridHasPiece = new bool* [width];
	gridChessPiece = new ChessPiece* [width];

	for (int i = 0; i < width; i++) {
		gridHasPiece[i] = new bool[height];
		gridChessPiece[i] = new ChessPiece[height];
	}

	//Sets them all to 0
	for (int k = 0; k < height; k++) {
		for (int i = 0; i < width; i++) {
			gridHasPiece[i][k] = false;
		}
	}
}

void ChessBoard::boardSetPiece(int xPos, int yPos, ChessPiece newChessPiece) {
	gridHasPiece[xPos][yPos] = true;	//Will recognize a piece there
	gridChessPiece[xPos][yPos] = newChessPiece;	//Chess Piece is now there
}

//Renders the board
void ChessBoard::boardRender() {
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			int printed = gridChessPiece[x][y].type;
			if (printed == -1) printed = 0;
			std::cout << printed << " ";
		}
		std::cout << "\n";
	}
}