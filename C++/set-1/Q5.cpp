/*
Define a class BOOK with the following specifications :

Private members of the class BOOK are
BOOK NO integer type
BOOKTITLE 20 characters
PRICE float (price per copy)
TOTAL_COST() A function to calculate the total cost for N number of
copies where N is passed to the function as argument.
Public members of the class BOOK are
INPUT() function to read BOOK_NO. BOOKTITLE, PRICE
PURCHASE() function to ask the user to input the number of copies to be
purchased. It invokes TOTAL_COST() and prints the total
cost to be paid by the user.
Note : You are also required to give detailed function definitions.
*/

#include <iostream>
#include <string.h>
using namespace std;
class BOOK
{
private:
    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE;
    float TOTAL_COST(int n)
    {
        return PRICE * n;
    }

public:
    void INPUT()
    {
        cout << "Enter book number: ";
        cin >> BOOK_NO;
        cout << "Enter book title: ";
        cin >> BOOKTITLE;
        cout << "Enter price: ";
        cin >> PRICE;
    }
    void PURCHASE()
    {
        int n;
        cout << "Enter number of copies: ";
        cin >> n;
        cout << "Total cost: " << TOTAL_COST(n) << endl;
    }
};

int main()
{
    BOOK b;
    b.INPUT();
    b.PURCHASE();
    return 0;
}
