// MATRIX CHAIN MULTIPLICATION
#include <iostream>
using namespace std;
int main()
{
    int i, j, d, k, q;
    int n = 5;
    int dim[] = {5, 4, 6, 2, 7};
    int cost[5][5] = {0};

    for (d = 1; d < n - 1; d++)
    {
        for (i = 1; i < n - d; i++)
        {
            j = d + i;
            int min = 32767;
            for (k = 1; k <= j - 1; k++)
            {
                q = cost[i][k] + cost[k + 1][j] + (dim[i - 1] * dim[k] * dim[j]);
                if (q < min)
                {
                    min = q;
                }
            }
            cost[i][j] = min;
        }
    }
    cout << cost[1][n - 1];
}