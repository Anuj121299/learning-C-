#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float i = 0;
    float n = 8;
    float x = 2;
    float pw = 0;
    float fact = 1;
    float ans = 0;
    int flag = -1;

    for (int i = 0; i <= n; i += 2)
    {
        flag = flag * (-1);

        pw = pow(x, i);
        pw = pw * flag;
        cout << "POWER is " << pw << endl;

        if (i == 0 or i == 1)
        {
            fact = 1;
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                fact = fact * j;
            }
        }

        ans = ans + pw / fact;
    }
    cout << " Answer : " << ans;

    return 0;
}