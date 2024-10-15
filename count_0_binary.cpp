#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int Max_count = 0;
    while (n != 0)
    {
        int value = n % 10;
        if (value == 0)
        {
            count += 1;
        }
        else
        {
            Max_count = max(Max_count, count);
            count = 0;
        }
        n = n / 10;
    }

    cout << Max_count;
    return 0;
}