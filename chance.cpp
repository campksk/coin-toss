#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void generateCoinTosses(vector<char>& results, int n, int heads, int tails, int totalTosses, int& count) {
    if (n == 0) {
        if (heads == tails) {
            count++;
        }
        return;
    }

    results.push_back('H');
    generateCoinTosses(results, n - 1, heads + 1, tails, totalTosses, count);
    results.pop_back();

    results.push_back('T');
    generateCoinTosses(results, n - 1, heads, tails + 1, totalTosses, count);
    results.pop_back();
}

int main() {
    int totalTosses;
    cout << "Enter the total number of coin tosses: ";
    cin >> totalTosses;

    vector<char> results;
    int count = 0;
    generateCoinTosses(results, totalTosses, 0, 0, totalTosses, count);

    cout << "n(e) = " << count << endl;

    double probability = static_cast<double>(count) / (1 << totalTosses);
    cout << "n(e)/n(s) = " << count << "/" << (1 << totalTosses) << " = " << fixed << setprecision(8) << probability << endl;

    return 0;
}