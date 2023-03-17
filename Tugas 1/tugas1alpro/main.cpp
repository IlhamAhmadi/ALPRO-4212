#include <iostream>
using namespace std;

int Penjumlahan(int a, int b){
    return a+b;
}

int Pengurangan(int a, int b){
    return a-b;
}

int TotalNilaiArr(int arr[], int n){
    int total = 0;
    for (int i=1; i<=n; i++){
        total += arr[i];
    }
    return total;
}

float RataNilaiArr(int arr[], int n){
    int total = TotalNilaiArr(arr,n);
    float rata = (float)total / n;
    return rata;
}

int main(){
    int bil1, bil2;
    cout << "-----Penjumlahan & Pengurangan------" << endl;
    cout << "Inputkan angka ke-1 : ";
    cin >> bil1;
    cout << "Inputkan angka ke-2 : ";
    cin >> bil2;

    int hasilPenjumlahan = Penjumlahan(bil1, bil2);
    int hasilPengurangan = Pengurangan(bil1, bil2);

    cout << "1. Hasil penjumlahan : " << hasilPenjumlahan << endl;
    cout << "2. Hasil pengurangan : " << hasilPengurangan << endl;

    int n;
    cout << "-----Array-----" << endl;
    cout << "Mau berapa baris? ";
    cin >> n;
    int arr[n];
    for (int i=1; i<=n; i++){
        cout << "Inputkan angka ke-" << i << " : ";
        cin >> arr[i];
    }
    int total = TotalNilaiArr(arr, n);
    cout << "3. Jumlah Total : " << total << endl;

    float rata = RataNilaiArr(arr, n);
    cout << "4. Rata-rata : " << rata << endl;


    return 0;
}
