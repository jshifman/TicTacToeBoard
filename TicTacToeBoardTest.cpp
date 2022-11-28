/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, turnO){
	TicTacToeBoard board;
	Piece turn = board.toggleTurn();
	ASSERT_EQ(turn, O);
}

TEST(TicTacToeBoardTest, turnX){
	TicTacToeBoard board;
	Piece turn = board.toggleTurn();
	turn = board.toggleTurn();
	ASSERT_EQ(turn, X);
}

TEST(TicTacToeBoardTest, row_low_oob){
	TicTacToeBoard board;
	Piece place = board.placePiece(-1,1);
	ASSERT_EQ(place, Invalid);
}

TEST(TicTacToeBoardTest, row_high_oob){
	TicTacToeBoard board;
	Piece place = board.placePiece(4,1);
	ASSERT_EQ(place, Invalid);
}

TEST(TicTacToeBoardTest, col_low_oob){
	TicTacToeBoard board;
	Piece place = board.placePiece(1,-1);
	ASSERT_EQ(place, Invalid);
}

TEST(TicTacToeBoardTest, col_high_oob){
	TicTacToeBoard board;
	Piece place = board.placePiece(1,4);
	ASSERT_EQ(place, Invalid);
}

