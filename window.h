#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

#include "widgets.hpp"
#include <vector>


class Window {
protected:
    std::vector<Widget*> widgets;
    int _XX,_YY,row,line;
public:
    Window(int XX,int YY);
    void event_loop() ;
    void rajzol() ;
};



#endif // WINDOW_HPP_INCLUDED
