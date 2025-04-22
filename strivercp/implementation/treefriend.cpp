#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    // Put them in a sorted array
    int positions[3] = {x1, x2, x3};
    sort(positions, positions + 3);

    // The minimum distance is:
    int distance = (positions[2] - positions[1]) + (positions[1] - positions[0]);
    cout << distance << endl;

    return 0;
}
