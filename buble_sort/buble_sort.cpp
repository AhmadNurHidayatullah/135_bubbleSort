// buble_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int a[20];                  //deklarassi array a dengan ukuran 20
int n;                      // Looping

void input() {              //procedur untuk input
    while (true) {          // Looping
        cout << "Masukkan Banyaknya elemen pada array : ";        // out ke layar
        cin >> n;           // inpit dari pengguna
        if (n <= 20)        // jika n kurang dari atau sama dengan 20
            break;          // keluar dari loop
        else {              // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar
        }

    }
    cout << endl;                                   // output baris kosong    
    cout << "=====================" << endl;        // output ke layar
    cout << "Masukkan Elemen Array" << endl;        // output ke layar
    cout << "====================" << endl;         // output ke layar

    for (int i = 0; i < n; i++) {                    // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": ";      // output ke layar
        cin >> a[i];
    }

}


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
