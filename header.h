#define elif else if

int toDecimal(std::string number, int base)
{
    if(base == 1 || base > 36)
    {
        std::cout<<"Arguments must be between 2 and 36";
        exit(1);
    }
    int cypher=0;
    int digit=0; 
    int k = number.size() - 1;

    for(int i=0; i<number.size(); i++)
    {
        if(int(number[i]) >= 65 && int(number[i]) <= 90)
        { 
            cypher = int(number[i]) - 55;
            if(cypher > base)
            {
                std::cout<<number[i]<<" does not exist in "<<base<<"-based system\n";
                exit(1); 
            }    
        }
        else if(int(number[i]) >= 48 && int(number[i]) <= 57)
        {
            cypher = int(number[i]) - 48;if(cypher > base)
            {
                std::cout<<number[i]<<" does not exist in "<<base<<"-based system";
                exit(1); 
            }
        }
        
        digit = digit + cypher * pow(base, k); 
        
        k--;
    }
    return digit;
}
std::string convert(int number, int base)
{
    if(base == 1 || base > 36)
    {
        std::cout<<"Arguments must be between 2 and 36";
        exit(1);
    }
    std::cout<<"convert";
    std::string s_number;
    std::string output;
    int mod;
    while(number != 0)
    {
        mod = number % base;
        number = number / base;
        if(mod < 10)
            s_number = s_number + char(mod+48);
        else
            s_number = s_number + char(mod+55);   
    }
    for(int i = s_number.size()-1; i>=0; i--)
    {
        output = output + s_number[i];
    }
    return output;
}