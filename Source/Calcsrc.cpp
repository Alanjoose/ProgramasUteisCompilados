/*
    @Author: Alan JS;
    @Repo: ProgramasUteisCompilados;
    @Language: C++;
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int option;
    int numberA;
    int numberB;

while(option != 0)
{
    std::cout << "\n<<< Linux Useful Calculator >>>" << endl;
    std::cout << "Options >>>" << endl;
    std::cout << "(1) Sum." << endl;
    std::cout << "(2) Sub." << endl;
    std::cout << "(3) Plus." << endl;
    std::cout << "(4) By." << endl;
    std::cout << "(0) Exit." << endl;
    std::cout << "Select An Option : " << endl;
    std::cin >> option;

   if(option > 4 || option < 0)
   {
       std::cout << "Please select only options in the menu." << endl;
   }

    switch(option)
    {
        case 1:
        std::cout << "Insert the number A :" << endl;
        std::cin >> numberA;
        std::cout << "Insert the number B :" << endl;
        std::cin >> numberB;
        std::cout << "The sum is : " << numberA + numberB << endl;
        break;

        case 2:
        std::cout << "Insert the number A :" << endl;
        std::cin >> numberA;
        std::cout << "Insert the number B :" << endl;
        std::cin >> numberB;
        std::cout << "The sub is : " << numberA - numberB << endl;
        break;

        case 3:
        std::cout << "Insert the number A :" << endl;
        std::cin >> numberA;
        std::cout << "Insert the number B :" << endl;
        std::cin >> numberB;
        std::cout << "The plus is : " << numberA * numberB << endl;
        break;

        case 4:
        std::cout << "Insert the number A :" << endl;
        std::cin >> numberA;
        std::cout << "Insert the number B :" << endl;
        std::cin >> numberB;
        if(numberA == 0|| numberB == 0)
        {
            std::cout << "Could'nt divide by zero!" << endl;
            break;
        }
        std::cout << "The by is :" << numberA / numberB << endl;
        break;
    }
}
    return 0;
}