/*
    @Author: Alan JS;
    @Repo: ProgramasUteisCompilados;
    @Language: C++;
*/
#include <stdio.h>
#include <cmath>

int main()
{
    int choose, numberOne, numberTwo;
    do
    {

    printf("(Useful Basic Calc V:1.0)\n");
    printf("Options :\n");
    printf("(1) Sum.\n");
    printf("(2) Minus.\n");
    printf("(3) Plus.\n");
    printf( "(4) By.\n");
    printf("(0) Exit.");
    printf( "\nSelect an Option : \n");
    scanf("%i", &choose);

        switch(choose)
        {
            case 1:
            printf( "Sum selected.\n");
            printf( "Enter the number One :\n");
            scanf("%i", &numberOne);
            printf ( "Enter the number Two :\n");
            scanf("%i", &numberTwo);
            printf("%s%i", "Result : ", numberOne + numberTwo);
            printf("\n\n");
            break;

            case 2:
            printf("Minus selected.\n");
            printf( "Enter the number One :\n");
            scanf("%i", &numberOne);
            printf ( "Enter the number Two :");
            scanf("%i", &numberTwo);
            printf("%s%i", "Result : ", numberOne - numberTwo);
            printf("\n");
            break;
            
            case 3:
            printf( "Plus selected.\n");
            printf( "Enter the number One :\n");
            scanf("%i", &numberOne);
            printf( "Enter the number Two :\n");
            scanf("%i", &numberTwo);
            printf("%s%i", "Result : ", numberOne * numberTwo);
            printf("\n\n");
            break;

            case 4:
            printf( "By selected.\n");
            printf( "Enter the number One :\n");
            scanf("%i", &numberOne);
            printf( "Enter the number Two :\n");
            scanf("%i", &numberTwo);
            if(numberOne || numberTwo == 0)
            {
            printf("Cannot divide by zero");
            printf("\n\n");
            }
            else
            {
            printf("%s%i", "Result : ", numberOne / numberTwo);
            printf("\n\n");
            }
            break;
        }
    }
    while(choose != 0);
    return 0;
}