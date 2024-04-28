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
        for (int s = 0; s < i; s++)
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

// pattern 9 can be formed by combining pattern 7 and pattern 8.
/*pattern7(5);
pattern8(5);*/

// pattern 10

void pattern10(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {

        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern10Optimized(int n)
{

    int x = 1;
    for (int i = 1; i < 2 * n; i++)
    {
        // we added if condition that if our row number become greater than our n; we'll do
        //  in this example, we used x and starsCount as new variable to solve problem
        int starsCount = i;
        /*if(i > n)
        {
            starsCount = starsCount - 2*x;
            x++;
        }
        */

        // another alternative for line 146 to 151 is

        if (i > n)
        {
            starsCount = 2 * n - i;
        }
        for (int j = 0; j < starsCount; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{

    for (int i = 1; i <= n; i++)
    {
        int start = 0;

        if (i % 2 == 0)
            start = 1;

        for (int j = 1; j <= i; j++)
        {

            start = 1 - start;

            cout << start << " ";
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        //first assembly

        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        //spaces

        for(int s = 1;s <=2*n - 2*i;s++ )
        {
            cout << " ";
        }

        //second assembly

         for (int k = i; k >= 1; k--)
        {
            cout << k;
        }


        cout << endl;
    }
}

int main()
{
    pattern12(4);

    return 0;
}