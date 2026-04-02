#include <iostream>
#include <cmath>

// zkusit bez break!!!

int main()
{
#include <iostream>

    int main()
    {
        int number;
        std::cout << "Zadejte cele cislo: ";
        std::cin >> number;

        if (number < 2)
        {
            std::cout << "Cislo " << number << " neni prvocislo." << std::endl;
        }
        else
        {
            bool isPrime = true;
            int divisor = 2;

            while (divisor * divisor <= number)
            {
                if (number % divisor == 0)
                {
                    isPrime = false;
                    break;
                }
                divisor++;
            }

            if (isPrime)
            {
                std::cout << "Cislo " << number << " je prvocislo." << std::endl;
            }
            else
            {
                std::cout << "Cislo " << number << " neni prvocislo." << std::endl;
            }
        }

        return 0;
    }

    return 0;
}