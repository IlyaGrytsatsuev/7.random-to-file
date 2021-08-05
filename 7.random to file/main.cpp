
#include "func.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main (){
    int n = 0;
    ifstream input("/Users/gratchuvalsky/Desktop/input.txt");
        if (!input) {
            cout << "File Error" <<endl;
            return 1;
        }
    input>>n;
    int* arr = new int[n];
    input.close();
    randomise(n, arr);
    ofstream output("/Users/gratchuvalsky/Desktop/output.txt");
    if (!output) {
        cout << "File Error" <<endl;
        return 1;
    }
    for(int i = 0; i < n; i++ )
    {
        output<<arr[i]<<" ";
    }
    output.close();
    cout<<"Success!\n";
    
    delete[] arr;
    return 0;
    
}
