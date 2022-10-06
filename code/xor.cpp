#include <iostream>
int main()
{
    char string[11] = "\\S\_CTDR";
    char key[11] = "1234567";
    for (int x = 0; x < 8; x++)
    {
        string[x] = string[x] ^ key[x];
        std::cout << string[x];
    }
    return 0;
}
