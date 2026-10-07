// лаба 4.1
// варіант 13

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double S, N, k;
    
    cout << "N = "; cin >> N;
    k = N;
    S = 1;

    // method 1
    while(k<=25){
        S *= sqrt(1 + N/k);
        k++;
    }

    cout << S << endl;
    k = N;
    S = 1;

    // method 2
    do{
        S *= sqrt(1 + N/k);
        k++;
    }while(k<=25);

    cout << S << endl;
    S = 1;

    // method 3
    for(k = N; k <= 25; k++){
        S *= sqrt(1 + N/k);
    }

    cout << S << endl;
    k = N;
    S = 1;

    // method 4
    for(k = 25; k >= N; k--){
        S *= sqrt(1 + N/k);
    }

    cout << S << endl;

    cin.get();
    return 0;
}