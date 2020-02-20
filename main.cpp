#include <iostream> 
#include <math.h>
#include "header.h"
int main(int argc, char* argv[])
{   
    int input;
    int output;
    int x; 
    if(argc < 4)
    {
        std::cout<<"Too few arguments";
        exit(1);
    }
    input = toDecimal(argv[1], 10);
    output = toDecimal(argv[2], 10);
    x = toDecimal(argv[3], input);

    if(output != 10)
        std::cout<<convert(x, output)<<std::endl;
    else
        std::cout<<x<<std::endl;
    
    return 0;
}