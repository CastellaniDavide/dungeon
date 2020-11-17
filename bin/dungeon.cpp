/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <bits/stdc++.h>
using namespace std;

//#define DEBUG
// modulus to reduce results
#define M 1000000007

using namespace std;

// input data
int N, risultato;

int my_min(int a, int b)
{
    if(a > b)
        return b;
    return a;
}

int my_max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int main()
{
//  uncomment the following lines if you want to read/write from files
#ifndef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cin >> N;

    if (N == 1)
        cout << 10;

    if (N == 2)
        cout << 2;

    if (N == 1 || N == 2)
        return 0;

    risultato = N * (N-1);

    for (int i = 2; i < 10 + 1; ++i)
    {
        int exponent = 2;
        while ((pow(i, exponent) - i * exponent) + exponent < N)
        {
            exponent++;
#ifdef DEBUG
            cout << "OK" << exponent << "\t" << (pow(i, exponent) - i * exponent) << endl;
#endif // DEBUG
        }
        if((pow(i, exponent) - i * exponent) + exponent == N)
        {
            int temp = 1;
            int temp2 = 1;
            for(int j = my_max(exponent, pow(i, exponent) - i * exponent); j < N + 1; ++j)
            {
                temp *= j;
            }
            for(int j = 1; j < my_max(exponent, pow(i, exponent) - i * exponent) + 1; ++j)
            {
                temp2 *= j;
            }
            //cout << temp << "\t" << temp2 << endl;
            risultato += (temp / temp2);
        }
    }

    cout << risultato + 1 << endl; // print the result
    return 0;
}
