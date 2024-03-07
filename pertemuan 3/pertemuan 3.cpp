#include <iostream>
using namespace std;

int a[20];          //Deklarasi array a dengan ukuran 20
int n;              //Deklarasi variabel n untuk menyimpan banyaknya elemen pada array

void input() {    //prosedure untuk input
    while (true) {  //looping
        cout << "Masukan banyanknya elemen pada array : ";  //Output ke layar
        cin >> n;   //input dari pengguna
        if (n <= 20)   //Jika n kurang dari atau sama dengan 20
            break;   //Keluar dari loop
        else {      //Jikan n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";   //Output ke layar
        }
    }
    cout << endl;                            //Ouput Baris kosong
    cout << "====================" << endl;  //output ke Layar
    cout << "Maskan elemmen Array" << endl;  //Output ke layar

    for (int i = 0; i < n; i++) {   //looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //Output Ke layar 
        cin >> a[i];                //input dari pengguna
    }
}

void displlay() {   //Procedure untu menampilkan hasil
    cout << endl;                               // Outout baris Kosong
    cout << "====================" << endl;     // Output ke layar 
    cout << "Element Array yang telah tersususn" << endl;   //output ke layar 
    for (int j = 0; j < n; j++) {               // looping dengan j dimulai  dari 0 hingga n-1
        cout << a[j] << endl;                   // Ouput ke layar
    }
    cout << a[j] << endl;                       // Ouput baris 

}
