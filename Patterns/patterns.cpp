#include <iostream>
using namespace std;

// make a relation with number of rows which is outer loop and number of columns which is inner loop.and always print inside of inner loop
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int s = i + 1; s < n; s++)
        {
            cout << " ";
        }

        // for stars
        for (int j = 0; j <= i + i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        int x = 2;
        x = x - i;
        // for space
        for (int s = 0; s < i ; s++)
        {
            cout << " ";
        }

        // for stars

        for (int j = 1; j <= n + 2 * x; j++)
        {
            cout << "*";
        }


        cout << endl;

        // cout << "the value of x is "<< x;
    }
}

int main()
{
    pattern8(5);

    return 0;
}