#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class MinHeap {
private:
    std::vector<T> heap;

    void heapifyUp(int index) {
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (heap[index] < heap[parentIndex]) {
                std::swap(heap[index], heap[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int smallest = index;

        if (leftChild < heap.size() && heap[leftChild] < heap[smallest]) {
            smallest = leftChild;
        }

        if (rightChild < heap.size() && heap[rightChild] < heap[smallest]) {
            smallest = rightChild;
        }

        if (smallest != index) {
            std::swap(heap[index], heap[smallest]);
            heapifyDown(smallest);
        }
    }

public:
    MinHeap() {}

    void insert(T value) {
        heap.push_back(value);
        int index = heap.size() - 1;
        heapifyUp(index);
    }

    T extractMin() {
        if (heap.empty()) {
            throw std::runtime_error("Heap is empty");
        }

        T minValue = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);

        return minValue;
    }

    bool isEmpty() const {
        return heap.empty();
    }
};
int main() {
    MinHeap<int> minHeap;

    minHeap.insert(3);
    minHeap.insert(1);
    minHeap.insert(4);
    minHeap.insert(2);

    while (!minHeap.isEmpty()) {
        int minValue = minHeap.extractMin();
        std::cout << minValue << " ";
    }

    return 0;
}
