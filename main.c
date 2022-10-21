#include <stdint.h>

uint16_t myVar = 0;
void print(uint16_t var)
{
        (void)var;
}

int main()
{
        print(myVar);
        return 0;
}
