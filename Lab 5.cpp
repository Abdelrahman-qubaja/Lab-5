#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n % 2) {
    case 0:
            cout << "EVEN" << endl;
            break;

    case 1:
    case -1:
                cout << "ODD"<<endl;
                break;
    default:
                    cout << "0";


    }


}
