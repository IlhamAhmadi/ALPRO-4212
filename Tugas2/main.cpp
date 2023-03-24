#include<iostream>
using namespace std;


bool isEven(int x){
    if(x % 2 == 0)
        return true;
    else
        return false;
}

bool isOdd(int x){
    if(x % 2 != 0)
        return true;
    else
        return false;
}

bool isFactor(int x,int f){
    return x % f == 0;
}

int maxArray(int arr[],int n){
    int result;
    for(int i = 0; i < n; i++) {
        if(result < arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int minArray(int arr[],int n){
    int result = arr[0];
    for(int i = 1; i < n; i++) {
        if(result > arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int MAX(int a,int b){
    if (a>b)
        return a;
    else
        return b;
}

int MIN(int a,int b){
    if (a<b)
        return a;
    else
        return b;
}

int sumEven(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int sumOdd(int arr[],int n){

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

bool isFound(int a[],int x,int n){
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
}
int main(){

    cout << "Ilham Ahmadi" << endl;
    cout << "A11_4212" << endl;
    cout << "A11.2022.14460" << endl;


    int n;
    //isEven
    cout << "><><><><><><><><><><><><><><><><><><><><><><"<<endl;
    cout << "isEven :" << endl;
    cout << "Inputkan angka genap: ";
    cin >> n;
    string even = (isEven(n)==1) ? " adalah angka genap" : " bukan angka genap";
    cout << n << even << endl;
    cout << "><><><><><><><><><><><><><><><><><><><><><><"<<endl;

    //isOdd
    cout << "isOdd" << endl;
    cout << "Inputkan angka ganjil: ";
    cin >> n;
    string odd = (isOdd(n)==1) ? " adalah angka ganjil" : " bukan angka ganjil";
    cout << n << odd << endl;
    cout << "><><><><><><><><><><><><><><><><><><><><><><"<<endl;

    int x,f;
    //isFactor
    cout << "isFactor" << endl;
    cout << "Inputkan angka yang diinginkan: ";
    cin >> x;
    cout << "Inputkan angka berikutnya: ";
    cin >> f;
    string faktor = (isFactor(x,f)==1) ? "Faktor" : "Tidak termasuk Faktor";
    cout << x << " dan " << f << " Adalah :" << faktor << endl;
    cout << "><><><><><><><><><><><><><><><><><><><><><><"<<endl;

    int a,b;
    //max min
    cout << "Max & Min" << endl;
    cout << "Inputkan angka pertama : ";
    cin >> a;
    cout << "Inputkan angka kedua : ";
    cin >> b;
    cout << MAX(a,b) << " adalah angka terbesar " << endl;
    cout << "dan" << endl;
    cout << MIN(a,b) << " adalah angka terkecil"  << endl;
    cout << "><><><><><><><><><><><><><><><><><><><><><><"<<endl;


    //isFound
    cout << "isFound" << endl;
    cout << "Inputkan jumlah array : ";
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) {
        cout << "Inputkan angkanya: ";
        cin >> ar[i];
    }
    cout << "Mau cari angka berapa? ";
    cin >> x;
    string cari = (isFound(ar,x,n)==1) ? "Angka ditemukan" : "Gak ada angka itu";
    cout << cari << endl;
    cout << "><><><><><><><><><><><><><><><><><><><><><><"<<endl;


    //sumEven Odd
    cout << "Sum Even Odd" << endl;
    cout << "Inputkan jumlah array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Inputkan nilai array: ";
        cin >> arr[i];
    }
    int maxArr = maxArray(arr,n);
    int minArr = minArray(arr,n);
    int sumGenap = sumEven(arr,n);
    int sumGanjil = sumOdd(arr,n);
    cout << "Nilai terbesarnya yaitu : " << maxArr << endl;
    cout << "Nilai terkecilnya yaitu: " << minArr << endl;
    cout << endl;
    cout << "Jumlah nilai genapnya yaitu : " << sumGenap << endl;
    cout << "Jumlah nilai ganjilnya yaitu : " << sumGanjil << endl;
    cout << "><><><><><><><><><><><><><><><><><><><><><><"<<endl;

return 0;
}
