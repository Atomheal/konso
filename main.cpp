#include "window.h"

using namespace std;
using namespace genv;

int main()
{
    Window mywindow(800,800);
    mywindow.rajzol();
    mywindow.event_loop();
    return 0;
}
