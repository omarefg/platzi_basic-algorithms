#include<iostream>
#include<climits>
using namespace std;

int greedyChange(int coinSet[], int n, int N) {
    if (N == 0) {
        return 0;
    }

    if (N < 0) {
        return INT_MAX;
    }

    int coins = INT_MAX;

    for (int i = 0; i < n; i++) {
        int res = greedyChange(coinSet, n, N - coinSet[i]);
        if (res != INT_MAX) {
            coins = min(coins, res + 1);
        }
    }

    return coins;
}

int main(int argc, char const *argv[]) {
    int coinSet[] = {1,5,10,15,20};
    int n = sizeof(coinSet) / sizeof(coinSet[0]);
    int N = 27;

    cout << "El mínimo de monedas para dar cambio es: "
            << greedyChange(coinSet, n, N)
                << "\n";
    return 0;
}
