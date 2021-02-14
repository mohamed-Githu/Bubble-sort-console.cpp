#include <iostream>

using namespace std;

void print(int arr[], int count);

int main()
{
    int arr[30], count;

    cout << "Elements = ";
    cin >> count;

    for (int x = 0; x < count; x++)
    {
        cout << "Element " << x + 1 << " = ";
        cin >> arr[x];
    }

    //Bubble sort +

    for (int x = 0; x < count - 1; x++)
    {
        bool swap = false;
        for (int y = 0; y + 1 < count - x; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                swap = true;
                int temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
        if (!swap)
            break;
    }

    print(arr, count);

    //Bubble sort -

    for (int x = 0; x < count - 1; x++)
    {
        bool swap = false;
        for (int y = 0; y + 1 < count - x; y++)
        {
            if (arr[y] < arr[y + 1])
            {
                swap = true;
                int temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
        if (!swap)
            break;
    }

    print(arr, count);

    cout << "\n";

    system("pause");
}

void print(int arr[], int count)
{
    cout << endl;
    for (int x = 0; x < count; x++)
        cout << x + 1 << " - " << arr[x] << "\n";
}
