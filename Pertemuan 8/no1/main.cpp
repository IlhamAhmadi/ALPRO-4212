#include <iostream>

using namespace std;

bool isGanjil(int x){
    if(x % 2 == 1)
        return 1;
    else
        return 0;
}

void smallestEven(int arr[], int n){
    int minE = arr[0];
    int index=0;

    for(int i=0; i<n; i++){
        if(!isGanjil(arr[i])){
            if(arr[i] < minE){
                minE = arr[i];
                index=i;
            }
        }
    }
    cout << "Nilai terkecil :" << minE << endl;
    cout << "Index ke :" << index << endl;
}

int main()
{
    int arr[5] = {6,7,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    smallestEven(arr,n);
    return 0;
}



























/*#include <iostream>
#include <vector>
using namespace std;

int findsmallEven(const vector<int>&numbers, int& smallEvenIndex){
    int smallEven = -1;
    smallEvenIndex = -1;

    for(int i=0;i<numbers.size();i++){
        if(numbers[i] & 2 == 0){
           if(smallEvenIndex == -1 || numbers[i] < numbers[smallEvenIndex]){
                smallEven = numbers[i];
                smallEvenIndex = i;
           }
        }
    }
    return smallEven;
}
bool isOdd(int numbers){
return numbers &2 !=0;
}

int main()
{
    vector<int>numbers(4,5,6,7,8);
    int smallEvenIndex = -1;
    int smallEven = findsmallEven(numbers, smallEvenIndex);

    cout << "Nilai Genap Terkecil : " << smallEven << endl;
    cout << "Index ke : " << smallEvenIndex << endl;

    int numberToTest = 9;
    if (isOdd(numberToTest)){
        cout << numberToTest << "Adalah Bilangan Ganjil" << endl;
        cout << numberToTest << "Bukan Bilangan Ganjil" << endl;
    }
    return 0;
}
*/
