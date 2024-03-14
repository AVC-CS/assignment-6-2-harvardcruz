//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        int V;

        V = rand() % 100;

        return V;


        /***************************************************
         * Code your program here
         ***************************************************/
}
int getClosestMed(int rdnum1, int rdnum2, int rdnum3)
{

        int med;

        if((rdnum1 < rdnum2) && (rdnum1 > rdnum3)){
                med = rdnum1;
        }
        else if ((rdnum2 < rdnum1) && (rdnum2 > rdnum3)){
                med = rdnum2;
        }
        else if ((rdnum3 < rdnum1) && (rdnum3 > rdnum2)){
                med = rdnum3;
        }
        else if ((rdnum1 > rdnum2) && (rdnum1 < rdnum3)){
                med = rdnum1;
        }
        else if ((rdnum2 > rdnum1) && (rdnum2 < rdnum3)){
                med = rdnum2;
        }
        else if ((rdnum3 > rdnum1) && (rdnum3 < rdnum2)){
                med = rdnum3;
        }
        return med;
        /***************************************************
         * Code your program here
         ***************************************************/
        
}