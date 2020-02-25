#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    cout << "test" << endl;
    cout << "hoge" << endl;
    for (i = 0; i < 7; i++)
    {
        i *= 2;
        cout << i << endl;
    }
    return 0;
}