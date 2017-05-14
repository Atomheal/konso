#include "examplecheckbox.hpp"
#include "graphics.hpp"
#include "string"
using namespace genv;bool _checked;
using namespace std;


ExampleCheckBox::ExampleCheckBox(int x, int y, int sx, int sy )
    : Widget(x,y,sx,sy)
{
    _checked=false;
    _bal=false;
    _jobb=false;
    used=false;



}

void ExampleCheckBox::draw()
{
    gout << move_to(_x, _y) << color(255,255,255) << box(_size_x, _size_y);
    gout << move_to(_x+2, _y+2) << color(0,0,0) << box(_size_x-4, _size_y-4);
   if (_checked==true&&_bal==false&&_jobb==true)
    {



            for (int i=-_size_x; i<_size_x/2-3; i++)
            {
                for (int j=-_size_x; j<_size_x/2-3; j++)
                {
                    if(i*i+j*j<(_size_x/2-3)*(_size_x/2-3))
                    {
                        gout<<move_to(_x+i+(_size_x/2),_y+j+(_size_x/2))<<dot<<color(150,10,120);
                    }
                }
            }

        setused(true);
    }
    if (_checked==true&&_bal==true&&_jobb==false)

    {


    {
        gout << color(255,255,255);
        gout << move_to(_x+4, _y+4) << line(_size_x-8, _size_y-8);
        gout << move_to(_x+5, _y+4) << line(_size_x-8, _size_y-8);
        gout << move_to(_x+_size_x-4, _y+4) << line(-_size_x+8, _size_y-8);
        gout << move_to(_x+_size_x-5, _y+4) << line(-_size_x+8, _size_y-8);
        setused(true);
    }
}
}
    void ExampleCheckBox::handle(event ev)
    {
        getused();
        if (ev.type == ev_mouse &&is_selected(ev.pos_x, ev.pos_y)&&(ev.button==btn_left||ev.button==btn_right))
        {

            if (ev.type == ev_mouse && ev.button==btn_right&&used==false)
            {
                _checked = true;
                _bal=false;
                _jobb = true;

            }
         if (ev.type == ev_mouse && ev.button==btn_left&&used==false)
            {
                _checked = true;
                _bal= true;
                _jobb = false;

            }
        }
    }
