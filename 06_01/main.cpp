#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
std::condition_variable cv;
int current = 1;

void Print(int myNumber)
{
    std::unique_lock<std::mutex> lock(mtx);

    cv.wait(lock, [&]() {
        return current == myNumber;
    });

    std::cout << "thread " << myNumber << std::endl;

    current++;
    cv.notify_all();
}

int main()
{
    std::thread t1(Print, 1);
    std::thread t2(Print, 2);
    std::thread t3(Print, 3);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}
