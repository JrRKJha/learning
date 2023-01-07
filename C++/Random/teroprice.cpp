#include <iostream>
#include <conio.h>

using namespace std;

double orgPrice, profitPer, profitAmt, PGper, PGamt, bankPer, bankAmt, cPay, iPay, bankDeposite, netProfit;
int dchoice;

double dm, dq, dh, dy;
double m, q, h, y;

void setrates()
{
    cout << "Default Rates (P13|B6|PG6)?(yes)" << endl;
    if (getch() == 121)
    {
        profitPer = 13;
        bankPer = 6;
        PGper = 6;
    }
    else
    {
        cout << "Enter the profit percentage: " << endl;
        cin >> profitPer;
        cout << "Enter the bank percentage: " << endl;
        cin >> bankPer;
        cout << "Enter the PG percentage: " << endl;
        cin >> PGper;
    }
}

void setdiscounts()
{
    cout << "Enter 1 for Discounted and 2 for Not Discounted: " << endl;
    cin >> dchoice;
    if (dchoice == 1)
    {
        cout << "Default Discount? (yes)" << endl;
        if (getch() == 121)
        {
            dm = 0;
            dq = 10;
            dh = 20;
            dy = 30;
        }
        else
        {
            cout << "Enter Monthly Discount: " << endl;
            cin >> dm;
            cout << "Enter Quarterly Discount: " << endl;
            cin >> dq;
            cout << "Enter Half Yearly Discount: " << endl;
            cin >> dh;
            cout << "Enter Yearly Discount: " << endl;
            cin >> dy;
        }
    }
    else
    {
        cout << "\tNot Discounted" << endl;
        dm = 0;
        dq = 0;
        dh = 0;
        dy = 0;
    }
}

int main()
{
    setrates();
    setdiscounts();
    do
    {
        system("cls");
        cout << "Original Price: ";
        cin >> orgPrice;

        profitAmt = (profitPer / 100 * orgPrice);
        cout << "Profit Amount: " << profitAmt << endl;

        bankAmt = (bankPer / 100 * orgPrice);
        cout << "Bank Amount: " << bankAmt << endl;

        PGamt = (PGper / 100 * (orgPrice + bankAmt + profitAmt));

        cPay = orgPrice + bankAmt + profitAmt + PGamt;
        cout << "Customer Pay: " << cPay << endl;

        cout << "PG Amount: " << PGamt << endl;
        bankDeposite = cPay - PGamt;
        cout << "Bank Deposite: " << bankDeposite << endl;

        iPay = orgPrice + bankAmt;
        cout << "I Pay: " << iPay << endl;
        netProfit = bankDeposite - iPay;
        cout << "Net Profit: " << netProfit << endl;
        cout << endl;

        // SHOW "Original Price, Final Price, NetProfit "
        cout << "\t PRODUCT PRICE" << endl;
        cout << "OriginalPrice\tFinalPrice\tNetProfit" << endl;
        cout << orgPrice << "\t\t" << cPay << "\t\t" << netProfit << endl;
        cout << endl;

        // SHOW "Monthly, Quarterly, Half Yearly, Yearly Amount"

        m = cPay + (dm / 100 * cPay);
        q = (cPay * 3) - (dq / 100 * (cPay * 3));
        h = (cPay * 6) - (dh / 100 * (cPay * 6));
        y = (cPay * 12) - (dy / 100 * (cPay * 12));

        cout << "\tTERM AMOUNTS" << endl;
        cout << "Monthly: " << m << endl;
        cout << "Quarterly: " << q << endl;
        cout << "Half Yearly: " << h << endl;
        cout << "Yearly: " << y << endl;
        cout << endl;
        cout << "\nDo you want to stop? (y/n): \n";
    } while (getch() != 121);
    cout << "Thank You!";
    getch();
    return 0;
}