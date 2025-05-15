#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Read input and store initial number of sheep in each farm
    vector<int> sheep(n);
    for (int i = 0; i < n; i++) {
        cin >> sheep[i];
    }

    // Mad brother's trek
    int current_farm = 0;  // Starting from Star 1
    int stolen_sheep = 0;  // Number of sheep stolen so far
    while (current_farm >= 0 && current_farm < n) {
        if (sheep[current_farm] > 0) {
            stolen_sheep += 1;  // Steal one sheep from the current farm
            sheep[current_farm] -= 1;  // Update the number of sheep in the current farm
        }

        // Move to the next farm (i+1 or i-1)

         if (sheep[current_farm] % 2 ==0) {
            current_farm++;  // Move to the right
        } else {
            current_farm--;  // Move to the left
        }
    }

    // Count number of non-stolen sheep
    int non_stolen_sheep = 0;
    for (int i = 0; i < n; i++) {
        non_stolen_sheep += sheep[i];
    }

    // Output results
    cout << stolen_sheep << " " << non_stolen_sheep << endl;

    return 0;
}
