#include <iostream>

using namespace std;

enum encolor {red=1, blue = 2, green = 3, yellow = 4 };

int main()
{
    cout << " please choose color number:\n red = 1\n blue = 2\n green = 3\n yellow = 4\n\n";
    short in;
    encolor colors;
    cin >> in;
    colors =encolor (in);

    switch (colors)
    {
    case encolor::red:
        system("color 4f");
        break;
    case encolor::blue:
        system("color 1f");
        break;
    case encolor::green:
        system("color 2f");
        break;
    case encolor::yellow:
        system("color 6f");
        break;
    }

    return 0;
}