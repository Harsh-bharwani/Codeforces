#include <iostream>
#include <unordered_map>

void countOccurrences(int arr[], int size) {
    std::unordered_map<int, int> frequencyMap;

    // Count occurrences of each element
    for (int i = 0; i < size; ++i) {
        frequencyMap[arr[i]]++;
    }

    // Print the occurrences
    std::cout << "Element\tFrequency" << std::endl;
    for (auto& pair : frequencyMap) {
        std::cout << pair.first << "\t" << pair.second << std::endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    countOccurrences(arr, size);

    return 0;
}
