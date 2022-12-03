// wap to check if a number is prime or not

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num, i, count;

    do
    {
        count = 0;
        system("cls");
        cout << "Check if a number is prime or not\n";
        cout << "Please enter a number: \n";
        cin >> num;

        if (num == 1) // NOTE: we know 1 is neither prime nor composite
        {
            cout << "Neither prime nor composite";
        }
        else if (num == 2) // NOTE: we know 2 is the only even prime number
        {
            cout << "Prime";
        }
        else if (num % 2 == 0) // NOTE: We know all even numbers are not prime except 2 (shown above)
        {
            cout << "Not Prime";
        }
        else // NOTE: finally running the main code to check prime
        {
            // NOTE: using num/2 because if a number is not prime then it will have a factor less than or equal to its half
            // NOTE: also using i+=2 because we know all even numbers are not prime except 2 (shown above)
            // NOTE: starting from 3 because we know 1 is neither prime nor composite and 2 is the only even prime number (shown above)
            for (i = 3; i <= num / 2; i = i + 2)
            {
                if (num % i == 0) // since it is prime there shouldn't be any factor if a factor exists the program exists immediately
                {
                    count++;
                    break;
                }
            }
            if (count == 0) // showing results
            {
                cout << "Prime";
            }
            else
            {
                cout << "Not Prime";
            }
        }
        cout << "\nDo you want to continue? (y/n): \n";
    } while (getch() == 121);
    cout << "\nBye\n";
    system("pause");
    return 0;
}