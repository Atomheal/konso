#ifndef EXAMPLECHECKBOX_HPP_INCLUDED
#define EXAMPLECHECKBOX_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"

using namespace std;

class ExampleCheckBox : public Widget {
protected:
    bool _bal;
    bool _jobb;
    bool _checked;
    bool used;
public:
    ExampleCheckBox(int x, int y, int sx, int sy);
    virtual void draw();
    virtual void handle(genv::event ev);
    bool getused()
    {
        return used;
    }
    void setused(bool u)
    {
        used=u;
    }

};


#endif // EXAMPLECHECKBOX_HPP_INCLUDED
