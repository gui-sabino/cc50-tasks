// This "includes" only works on the CC50 IDE. 
// https://code.cs50.io/ <-- Link 
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int get_cents(void);
int calc_quarters(int cents);
int calc_dimes(int cents);
int calc_nickels(int cents);
int calc_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // calculates the number of quarters to give the customer
    int quarters = calc_quarters(cents);
    cents = cents - quarters * 25;

    // calculates the number of dimes to give the customer
    int dimes = calc_dimes(cents);
    cents = cents - dimes * 10;

    // calculates the number of nickels to give the customer
    int nickels = calc_nickels(cents);
    cents = cents - nickels * 5;

    // calculates the number of pennies to give the customer
    int pennies = calc_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // Function prompts the user for a number of cents using get_float
    // If the user inputs a negative int, your code should prompt the user again
    int cents;
    do
    {
        cents = get_float("Change: ");
    } while(cents <= 0);
    return cents;
    }

int calc_quarters(int cents)
{
    // Function calculates how many quarters a customer should be given if they're owed some number of cents
    int count = 0;
    while(cents >= 25)
    {
    count++;
    cents = cents - 25;
    }
    return count;
}
int calc_dimes(int cents)
{
    // Function calculates how many dimes a customer should be given if they're owed some number of cents
    int count = 0;
    while(cents >= 10)
    {
        count++;
        cents = cents - 10;
    }
    return count;
}
int calc_nickels(int cents)
{
    // Function calculates how many quarters a customer should be given if they're owed some number of cents
    int count = 0;
    while(cents >= 5)
    {
        count++;
        cents = cents - 5;
    }
    return count;
}
int calc_pennies(int cents)
{
    // Function calculates how many dimes a customer should be given if they're owed some number of cents
    int count = 0;
    while(cents >= 1)
    {
        count++;
        cents = cents - 1;
    }
    return count;
}