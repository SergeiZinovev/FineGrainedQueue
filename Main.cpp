#include <iostream>
#include <thread>
#include "FineGrainedQueue.h"

int main()
{
    FineGrainedQueue queue;
    queue.insert(1);
    queue.insert(2);
    queue.insert(3);
    queue.insert(4);
    queue.insert(5);
    queue.insert(6);
    queue.insert(7);
    queue.insert(8);
    std::cout << "Created queue: ";
    queue.print();

    std::cout << "\n\nQueue after inserting elements in the middle:"; 

    std::cout << "\nThread 1: ";
    std::thread t1(&FineGrainedQueue::insertIntoMiddle, &queue, 20, 3);
    queue.print();
    std::cout << "\nThread 2: ";
    std::thread t2(&FineGrainedQueue::insertIntoMiddle, &queue, 30, 4);
    queue.print();
    std::cout << "\nThread 3: ";
    std::thread t3(&FineGrainedQueue::insertIntoMiddle, &queue, 40, 5);
    queue.print();
    std::cout << "\nThread 4: ";
    std::thread t4(&FineGrainedQueue::insertIntoMiddle, &queue, 50, 15);
    queue.print();

    if (t1.joinable())
        t1.join();
    if (t2.joinable())
        t2.join();
    if (t3.joinable())
        t3.join();
    if (t4.joinable())
        t4.join();

    
}
