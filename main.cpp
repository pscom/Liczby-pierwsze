#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    long int n;
    long int l[100000];
    int k = 0;

    int j = 1;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> l[i];
    }

    for(int i = 0; i < n; i++)
    {
        while(k <= 2 && j <= l[i])
        {
            if(l[i] % j == 0)
                k++;

            j++;
        }

        j = 1;

        if(k == 2)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;

        k = 0;
    }

    getch();
    return 0;
}
