/*
*Class: CMSC140 21909
*Instructor: Grigoriy Grinberg
*Classwork4
*Description: Calculating discount based on total number of tickets sold.
*Due Date: 10/02/23
*I pledge that I have completed the programming assignment independently.
* I have no copied the code from a student or any source.
* Print your Name here: Keiffer Subero
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{

    double ticketCost = 109;
    double totalTickets;
    double totalAfterDiscount;
    double totalNoDiscount;

    const double DISCOUNT_1 = (ticketCost * 0.1);
    const double DISCOUNT_2 = (ticketCost * 0.25);
    const double DISCOUNT_3 = (ticketCost * 0.33);
    const double DISCOUNT_4 = (ticketCost * 0.42);

    cout << "How many days of tickets were sold? ";
    cin >> totalTickets;

    if (totalTickets < 1)
    {
        cout << "Tickets sold must be greater than zero.";
    }
    else if (totalTickets >= 1 && totalTickets <= 2)
    {
        totalNoDiscount = (totalTickets * ticketCost);
        cout << fixed << setprecision(2) << "The total cost of the purchase is $" << totalNoDiscount;
    }
    else if (totalTickets >= 3 && totalTickets <= 4)
    {
        totalAfterDiscount = (totalTickets * ticketCost) - (totalTickets * DISCOUNT_1);
        cout << fixed << setprecision(2) << "The total cost of the purchase is $" << totalAfterDiscount;
    }
    else if (totalTickets >= 5 && totalTickets <= 6)
    {
        totalAfterDiscount = (totalTickets * ticketCost) - (totalTickets * DISCOUNT_2);
        cout << fixed << setprecision(2) << "The total cost of the purchase is $" << totalAfterDiscount;
    }
    else if (totalTickets >= 7 && totalTickets <= 9)
    {
        totalAfterDiscount = (totalTickets * ticketCost) - (totalTickets * DISCOUNT_3);
        cout << fixed << setprecision(2) << "The total cost of the purchase is $" << totalAfterDiscount;
    }
    else if (totalTickets >= 10)
    {
        totalAfterDiscount = (totalTickets * ticketCost) - (totalTickets * DISCOUNT_4);
        cout << fixed << setprecision(2) << "The total cost of the purchase is $" << totalAfterDiscount;
    }
    return 0;
}