#define OLC_PGE_APPLICATION
#include "Arkanoid.h"


int main()
{
    Arkanoid arkanoid;
    if (arkanoid.Construct(640, 480, 4, 4))
    {
        arkanoid.Start();    
    }
    return 0;
}
