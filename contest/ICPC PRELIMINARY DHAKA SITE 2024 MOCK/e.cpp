#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculate_pyramid_volume(double surface_area) {
    // Assume the pyramid has a square base
    double base_side = sqrt(surface_area / (1 + 4 * sqrt(1.0 / 3)));
    double height = base_side * sqrt(3.0 / 4);
    return (1.0 / 3) * base_side * base_side * height;
}

int main() {
    double surface_area;
    while (true) {
        cin >> surface_area;
        if (surface_area < 0) {
            break;
        }
        double volume = calculate_pyramid_volume(surface_area);
        cout << fixed << setprecision(4) << volume << endl;
    }
    return 0;
}