#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include "food.h"
namespace snake
{
class Board{
   int m_height;
   int m_width;
   char m_wall = '#';
   Food food;
   

public:
    Board(int h=30,int w=15);
    void display();
    ~Board();
    
};


}

#endif