#include <iostream>
using namespace std;

int mluthfi[24];                                //01 + 1 + 2 + 20 - 4 x 5 + 10 + 5 + 2 + 3
int n;                                      //Number of element in the array
int i;                                      //Index of array element

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the Array = ";
        cin >> n;
        if ((n > 0) && (n <= 24))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 24 elements.\n\n";
    }

    //Accept array elements
    cout << "\n--------------------\n";
    cout << " Enter array elements \n";
    cout << "-------------------- \n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> mluthfi[i];
    }
}


void Search() {
    int musthafa = 0;
    int luthfi = n - 1;
    int item;
    char ch;
    int comparisson;
    do
    {
        cout << "\nMasukkan nilai yang dicari : ";
        cin >> item;
        comparisson = 0;
        while (musthafa <= luthfi) {
            int mid = (musthafa + luthfi) / 2;
            comparisson++;
            if (mluthfi[mid] == item) {
                cout <<  item << " Ada di indeks- " << mid << endl;
                break;
            }
            else if (mluthfi[mid] < item) {
                musthafa = mid + 1;
            }
            else {
                luthfi = mid - 1;
            }
        }
        cout << "\nNumber of Comparisons : " << comparisson << endl;

        cout << "\nContinue Search (y/n) ? ";
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y'));
}

int main()
{
    input();
    Search();
}
