/*

Author: Ben Eggers <ben.eggers36@gmail.com>
License: MIT

This file contains the implementation of structs found in "Board.h".

*/

#idndef _BEGGERS_BOARD_PRIV_
#define _BEGGERS_BOARD_PRIV_

#include "./Board.h"  // for Board
#include <stdbool.h>


typedef struct boardRec {
    bool        whiteCastle;  // can white castle?
    bool        blackCastle;  // can black castle?
    int         enPassant;    // position of pawn that can currently en passant
    Piece[][]   pieces;       // all that other stuff
} BoardRec;


#endif  // _BEGGERS_BOARD_PRIV_