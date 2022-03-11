#include <iostream>

using namespace std;

int main(){

    int m, n, brojElemenata =0;
    cout <<"unesite m i n: ";
    cin >> m >>n;
    int  matrix[m][n];
    int v[n], c[n];
    int* r[m];
    for(int i = 0; i<m; i++){
        r[i] = nullptr;
    }
    for(int i=0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] != 0){
                c[brojElemenata] = j; 
                v[brojElemenata] = matrix[i][j];
                if(r[i] == nullptr){
                    r[i] =  &c[brojElemenata];
                }
                brojElemenata++;
            }
        }
    }
    cout << " \n R: ";
    for(int i = 0; i<m; i++){
        cout << r[i] << " ";
    }
    cout << " \n R: ";
    for(int i = 0; i<m; i++){
        if(r[i] != nullptr){
            cout << *r[i] << " ";
        }
        else {
            cout << 0;
        }
    }
    cout << " \n C: ";
    for(int i = 0; i<brojElemenata; i++){
        cout << c[i] << " ";
    }
        cout << " \n V: ";
    for(int i = 0; i<brojElemenata; i++){
        cout << v[i] <<" ";
    }
    return 0;
}