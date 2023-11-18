#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the distance between two points
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    // Triangle vertices
    double Ax = 0, Ay = 0;
    double Bx = 5, By = 4;
    double Cx = -5, Cy = 6;

    // Calculate side lengths
    double a = distance(Cx, Cy, Bx, By);
    double b = distance(Ax, Ay, Cx, Cy);
    double c = distance(Ax, Ay, Bx, By);

    // Calculate length of median from vertex B to side CA
    double medianLengthB = 0.5 * sqrt(2 * pow(a, 2) + 2 * pow(c, 2) - pow(b, 2));

    // Calculate length of bisector from vertex C to side AB
    double bisectorLengthC = (2 * sqrt(a * b * pow((a + b), 2) - pow(c, 2) * pow(a + b, 2))) / (a + b);

    // Output results
    cout << "Length of median from vertex B to side CA: " << medianLengthB << " cm" << endl;
    cout << "Length of bisector from vertex C to side AB: " << bisectorLengthC << " cm" << endl;

    return 0;
}