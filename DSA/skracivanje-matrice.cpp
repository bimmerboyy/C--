#include <iostream>

using namespace std;

int main(){

    int m, n, brojElemenata =0;
    cout <<"unesite m i n: ";
    cin >> m >>n;
    int  matrix[m][n];
    //posebno :
    int v[n], c[n];
    int r[n];
    for(int i=0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] != 0){
                r[brojElemenata] = i; 
                c[brojElemenata] = j; 
                v[brojElemenata] = matrix[i][j];
                cout << "Trenutno  ubacijem : " << matrix[i][j] << "i on se nalazi u " << i << "vrsti " << "I " << j << "Koloni. \n";
                brojElemenata++;
            }
        }
    }
    cout << " \n R: ";
    for(int i = 0; i<brojElemenata; i++){
        cout << r[i] << " ";
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