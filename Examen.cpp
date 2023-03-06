#include <iostream>
#include <vector>

using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

void removeLeapYears(vector<int>& years) {
    for (int i = 0; i < years.size(); i++) {
        if (isLeapYear(years[i])) {
            years.erase(years.begin() + i);
            i--;
        }
    }
}

int main() {
    // create an array of years from 1900 to 2023
    vector<int> years;
    for (int year = 1900; year <= 2023; year++) {
        years.push_back(year);
    }

    // remove leap years
    removeLeapYears(years);

    // print the remaining years
    for (int i = 0; i < years.size(); i++) {
        cout << years[i] << " ";
    }
    cout << endl;

    return 0;
}
