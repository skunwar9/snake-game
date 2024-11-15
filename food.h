#ifndef FOOD_H
#define FOOD_H
#include <iostream>
namespace snake
{
 class Food{
    int m_x;
    int m_y;
    char m_food='*';
    public:
    Food();
    void spawn();
    ~Food();
    void display();
    // friend std::ostream& operator<<(std::ostream& os,const Food& food);

 };


}
#endif