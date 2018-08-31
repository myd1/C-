#include <time.h>
#include "basic.h"
#include "code.h"

int main (void)
{
    srand(time(NULL));
    start();
    while(is_run())
    {
        setfont(16,0,"ËÎÌו");
        menu();
    }
    wait_for_key();
    close();
    return 0;
}
