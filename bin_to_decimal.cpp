#include <iostream>
int main()
{
    int n, lastdigit, decimalform = 0, power = 1;
    std::cout << "Enter bin Number : ";
    std::cin >> n;
    while (n > 0)
    {
        lastdigit = n % 10;
        decimalform += (lastdigit * power);
        power *= 2; // 2,4,16,------------------
        n /= 10;
    }
    std::cout << "Bin To Decimal is " << decimalform;
}
