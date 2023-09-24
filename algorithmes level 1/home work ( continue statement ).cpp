#include <iostream>

using namespace std;

int main()
{
    int num,sum = 0;
    cout << " please enter a numbers { from (0) to (50) } to calculate they sum.\n\n";
    for (short i = 1; i <= 5; i++)
    {
        cout << " number - " << i << " - : ";
        cin >> num;
        if (num > 50)
        {
            continue;
        }
        sum += num;
    }
    cout << "\n numbers sum is = " << sum << endl;

    return 0;
}