# include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int a0 = 0; a0 < t; a0++) {
        int n;
        cin >> n;

        // Handle the case where n is less than or equal to 1
        if (n <= 1)
        {
            cout << 0 << endl;
            continue;
        }
        int n3 = (n - 1) / 3;
        int n5 = (n - 1) / 5;
        int n15 = (n - 1) / 15;
        
        // Using the formula for the sum of an arithmetic series
        uint64_t  sumn3 = 3 * n3 * (n3 + 1) / 2;
        uint64_t  sumn5 = 5 * n5 * (n5 + 1) / 2;
        uint64_t  sumn15 =15 * n15 * (n15 + 1) / 2;

        // Final result
        uint64_t result = sumn3 + sumn5 - sumn15;
        cout << sumn3 + sumn5 - sumn15 << endl;
    }
    return 0;
}
