#include <bits/stdc++.h>
using namespace std;

// Define the number of test cases to generate
#define RUN 10

// Define the range of the test data to be generated
#define MAX 100

// Define the maximum number of lines
#define MAXROW 100

int main()
{
    freopen("Test_Cases_Random.txt", "w", stdout);

    srand(time(NULL));

    int limit = rand() % RUN;

    printf("%d\n", limit);

    for (int i = 1; i <= limit; i++)
    {
        // Number of rows and columns
        int row = 1 + rand() % MAXROW;

        // First print the number of rows and columns
        printf("%d\n", row);

        // Then print the matrix
        for (int j = 1; j <= row; j++)
        {

            int x1 = rand() % MAX;
            int x3 = rand() % MAX;
            int x2 = rand() % MAX;
            if (x2 <= x1)
            {
                int temp = x1 - x2;
                x2 = x2 + temp + rand() % MAX;
            }

            printf("%d %d %d\n", x1, x2, x3);
        }
    }

    fclose(stdout);

    return (0);
}