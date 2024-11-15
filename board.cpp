#include "board.h"

namespace snake{
    Board::Board(int h, int w):m_height(h), m_width(w){

    }
    void Board::display(){
        for(int i=0;i<m_width;i++){
            std::cout<< m_wall;

        }
        std::cout<<std::endl;
        for(int j=0;j<m_height;j++){
         for(int i=0;i<m_width;i++){
             if((i==0)||(i==m_width-1)){
                std::cout<<m_wall;
             }else{
                std::cout<<" ";
             }   
        }
        
        std::cout<<std::endl;
        }      
          for(int i=0;i<m_width;i++){
            std::cout<< m_wall;
        }


        
        

    }
    Board::~Board(){}
}