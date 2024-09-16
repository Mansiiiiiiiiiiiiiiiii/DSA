#include <iostream>
using namespace std;

void recordBreaking(int record[], int n) {
    if (n == 0) return;

    int maxRecord = record[0];  // Initialize with the first day's record
    int jisDinRecordBane = 0;  // Counter for record-breaking days

    // Iterate through the records starting from the second day
    for (int i = 1; i < n; i++) {
        if (record[i] > maxRecord) {
            // Print the day and record if it is a record-breaking day
            cout << "Din: " << (i + 1) << " record: " << record[i] << endl;
            jisDinRecordBane++;
            maxRecord = record[i];  // Update the highest record seen so far
        }
    }

    cout << "Kitne din: " << jisDinRecordBane << endl;
}

int main() {
    // Example array of daily records
    int records[] = {1, 2, 0, 7, 2, 0, 2, 2};
    int n = sizeof(records) / sizeof(records[0]);

    recordBreaking(records, n);

    return 0;
}

