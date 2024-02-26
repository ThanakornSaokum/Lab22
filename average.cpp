#include <iostream>
#include <cstdlib> 

using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Please input numbers to find average." << endl;
        return 1;
    }

    int count = argc - 1;
    double sum = 0;

    for (int i = 1; i < argc; ++i) {
        double num = atof(argv[i]); 
        sum += num;
    }

    double average = sum / count;

    cout << "---------------------------------" << endl;
    cout << "Average of " << count << " numbers = " << average << endl;
    cout << "---------------------------------" << endl;

    return 0;
}

