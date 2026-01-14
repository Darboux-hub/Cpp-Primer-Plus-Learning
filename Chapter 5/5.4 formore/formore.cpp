#include <iostream>
const int ArtSize = 16;
int main()
{
    long long factorials[ArtSize];
    factorials[1] = factorials[0] = 1LL;
    for(int i = 2; i < ArtSize; i++)
    {
        factorials[i] = i * factorials[i-1];
    }
    for(int i = 0; i < ArtSize; i++)
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }

    return 0;
}