#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::string answer;

    while (true)
    {
        std::cout << "Write your age: " << std::endl;
        std::cin >> input;

        std::cout << "You are " + input + " years old. Is that correct? (yes/no)" << std::endl;
        std::cin >> answer;

        if (answer == "yes")
        {
            std::cout << "Perfect! You are verified." << std::endl;
            break; // ukončí cyklus
        }
        else if (answer == "Yes")
        {
            std::cout << "Perfect! You are verified." << std::endl;
            break; // ukončí cyklus
        }
        else if (answer == "no")
        {
            std::cout << "Let's try again.\n" << std::endl;
            // cyklus pokračuje znovu od začátku
        }
        else if (answer == "No")
        {
            std::cout << "Let's try again.\n" << std::endl;
            // cyklus pokračuje znovu od začátku
        }
        else
        {
            std::cout << "I didn't understand your answer.\n" << std::endl;
        }
    }

    return 0;
}