/*
 * main.cpp
 *
 *  Created on: Apr 11, 2018
 *      Author: David Thiessen <thiessendg@gmail.com>
 */
// t2.cpp
#include <iostream>
#include <thread>

void thread_function()
{
    std::cout << "thread function\n";
}

int main()
{
    std::thread t(&thread_function);
    std::cout << "main thread\n";
    t.detach();
    return 0;
}



