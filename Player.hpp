#ifndef SNAKE_PLAYER_HPP
#define SNAKE_PLAYER_HPP

#include "Board.hpp"

struct Piece {
	int x, y;
	Piece *next;
	Piece(int x, int y, Piece *ptr) {
		this->x = x;
		this->y = y;
		this->next = ptr;
	}
};

class Player {
	Board board;
	Piece *head, *tail, *tmp;
	int headPositionX, headPositionY;

	Piece * createPiece();
public:
	void deleteTail();
	Player();
	void move(int x, int y);	
	void updatePosition(int x, int y);
	Board & getBoard();
};



#endif // SNAKE_PLAYER_HPP