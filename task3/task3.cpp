#include <iostream>
#include <cmath>
#define M_PI 3.14
using namespace std;

int main() {
    // Input angle in degrees
    double alpha;
    cout << "Enter the angle (in degrees): ";
    cin >> alpha;

    // Convert angle to radians
    double alphaRadians = alpha * M_PI / 180.0;

    // Calculate 𝑧1 using the first formula
    double z1Formula1 = sin(M_PI / 2 + 3 * alphaRadians) / (1 - sin(3 * alphaRadians - M_PI));

    // Calculate 𝑧1 using the second formula
    double z1Formula2 = cos(5 * M_PI / 4 + 3 * alphaRadians / 2);

    // Output results
    cout << "Result using the first formula: " << z1Formula1 << endl;
    cout << "Result using the second formula: " << z1Formula2 << endl;

    return 0;
}
