#include "food.h"
namespace snake{
    Food::Food(){
        spawn();
    };
    void Food::spawn(){
        m_x=20;
        m_y=25;
        
    }
    Food::~Food(){}
    void Food::display(){
        std::cout<<m_food;
    }

}