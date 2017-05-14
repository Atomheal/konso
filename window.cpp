#include "window.h"
#include "examplecheckbox.hpp"

using namespace genv;

Window::Window(int XX,int YY)
{
    _XX=XX;
    _YY=YY;
    row=20;
    line=20;
}

void Window::rajzol()
{
    for(int i=0;i<line;i++)
    {
        for (int j=0;j<row;j++)
        {
             ExampleCheckBox * help = new ExampleCheckBox(90+j*30,20+i*30,30,30);
             widgets.push_back(help);
        }
    }
}

void Window::event_loop()
{
    event ev;
    int focus = -1;
    gout.open(_XX,_YY);
    while(gin >> ev ) {
        if (ev.type == ev_mouse && ev.button==btn_left||ev.button==btn_right) {
            for (size_t i=0;i<widgets.size();i++) {
                if (widgets[i]->is_selected(ev.pos_x, ev.pos_y)) {
                        focus = i;
                }
            }
        }
        if (focus!=-1) {
            widgets[focus]->handle(ev);
        }
        for (size_t i=0;i<widgets.size();i++) {
            widgets[i]->draw();
        }
        gout << refresh;
    }
}

