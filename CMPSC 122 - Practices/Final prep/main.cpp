#include <iostream>
#include <cstdlib>

class Array {
private:
    int* data;
    int size;
    int capacity;

public:
    Array(int capacity = 10) : size(0), capacity(capacity) {
        data = new int[capacity];
    }

    Array(const Array& other) : size(other.size), capacity(other.capacity) {
        data = new int[capacity];
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];
        }
    }

    ~Array() {
        delete[] data;
    }

    int& operator[](int index) {
        return data[index];
    }

    Array operator*(int factor) const {
        Array result(capacity * factor);
        result.size = size * factor;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < factor; j++) {
                result.data[i * factor + j] = data[i];
            }
        }
        return result;
    }

    int getSize() const {
        return size;
    }

    int getCapacity() const {
        return capacity;
    }
};

int main() {
    Array arr(5);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    Array arr2 = arr * 3;

    std::cout << "Original array:\n";
    for (int i = 0; i < arr.getSize(); i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << "\nCapacity: " << arr.getCapacity() << "\n";

    std::cout << "\nAmplified array:\n";
    for (int i = 0; i < arr2.getSize(); i++) {
        std::cout << arr2[i] << ' ';
    }
    std::cout << "\nCapacity: " << arr2.getCapacity() << "\n";

    return 0;
}
