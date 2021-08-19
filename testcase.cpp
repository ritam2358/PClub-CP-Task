#include <bits/stdc++.h>
using namespace std;

// Define the number of test cases to generate
#define RUN 100

// Define the range of the test data to be generated
#define MAX 1000

// Define the maximum number of lines
#define MAXROW 10000

void merge(int Arr[][2], int start, int mid, int end)
{
    int temp[end - start + 1][2];

    // crawlers for both intervals and for temp
    int i = start, j = mid + 1, k = 0;

    while (i <= mid && j <= end)
    {
        if (Arr[i][1] <= Arr[j][1])
        {
            temp[k][0] = Arr[i][0];
            temp[k][1] = Arr[i][1];
            k += 1;
            i += 1;
        }
        else
        {
            temp[k][0] = Arr[j][0];
            temp[k][1] = Arr[j][1];
            k += 1;
            j += 1;
        }
    }

    // add elements left in the first interval
    while (i <= mid)
    {
        temp[k][0] = Arr[i][0];
        temp[k][1] = Arr[i][1];
        k += 1;
        i += 1;
    }

    // add elements left in the second interval
    while (j <= end)
    {
        temp[k][0] = Arr[j][0];
        temp[k][1] = Arr[j][1];
        k += 1;
        j += 1;
    }

    // copy temp to original interval
    for (i = start; i <= end; i += 1)
    {
        Arr[i][0] = temp[i - start][0];
        Arr[i][1] = temp[i - start][1];
    }
}

void mergeSort(int Arr[][2], int start, int end)
{

    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(Arr, start, mid);
        mergeSort(Arr, mid + 1, end);
        merge(Arr, start, mid, end);
    }
}

int solve()
{
    int n, count = 0;
    int t;
    int arr[n][2];
    int y[n];
    cin >> t;

    while (t--)
    {
        count = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d", &arr[i][0], &arr[i][1], &y[i]);
        }

        mergeSort(arr, 0, n - 1);

        int mark = arr[0][1];
        count++;
        for (int i = 1; i < n; i++)
        {
            if (arr[i][0] <= mark && arr[i][1] >= mark)
            {
                continue;
            }
            else
            {
                mark = arr[i][1];
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}

int main()
{
    freopen("Test_Cases_Random.in", "w", stdout);

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

    freopen("Test_Cases_Random.in", "r", stdin);
    freopen("output.txt", "w", stdout);
    solve();

    fclose(stdin);
    fclose(stdout);

    return (0);
}