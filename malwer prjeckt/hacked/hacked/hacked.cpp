// hacked.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "hacked.h"


// This is an example of an exported variable
HACKED_API int nhacked=0;

// This is an example of an exported function.
HACKED_API int fnhacked(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
Chacked::Chacked()
{
    return;
}
