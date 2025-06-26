// 1.You're in queue 0, and want to finish security as early as possible.

// 2.You can move to adjacent queues (1 step per second), or stay.

// 3.After every second, 1 person in every queue is processed.

// 4.For each queue i, it takes i seconds to reach it.

// 5.In those i seconds, i people are removed from queue i.

// 6.When you reach, remaining people = max(0, A[i] - i), and you join at the end.

// 7.So total time to finish in queue i = i (travel) + max(0, A[i] - i) + 1 (your turn).

// 8.Special case: If you stay in queue 0, total time = A[0].

// 9.Try this for all queues and track the minimum time among them.

// 10.Return the smallest such total time — that’s your answer.


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

// Function to calculate the minimum time required to complete security check
int getMinimumTime(vector<int>& queueSizes) {
    int minTimeRequired = INT_MAX; // Start with max possible value

    for (int i = 0; i < queueSizes.size(); i++) {
        int currentQueueSize = queueSizes[i];
        int totalTime;

        if (i == 0) {
            // You're already at queue 0, so you must wait behind all people already there
            totalTime = currentQueueSize;
        } else {
            // Time to move to queue i is 'i' seconds
            // In 'i' seconds, i people will be removed from queue[i] (1 per second)
            // You will stand at the end of the remaining queue
            int peopleRemaining = max(0, currentQueueSize - i + 1);
            totalTime = i + peopleRemaining;
        }

        // Keep track of the minimum total time required
        minTimeRequired = min(minTimeRequired, totalTime);
    }

    return minTimeRequired;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int numberOfQueues;
        cin >> numberOfQueues;

        vector<int> queueSizes(numberOfQueues);
        for (int i = 0; i < numberOfQueues; i++) {
            cin >> queueSizes[i]; // Input number of people in each queue
        }

        cout << getMinimumTime(queueSizes) << endl;
    }

    return 0;
}