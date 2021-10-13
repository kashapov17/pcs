#include <iostream>
#include <chrono>

#include "universe.h"

#define timer_start (std::chrono::high_resolution_clock::now())
#ifdef timer_start
#define timer_elapsed(t) (std::chrono::duration_cast \
                                <std::chrono::seconds> \
                                (std::chrono::high_resolution_clock \
                                        ::now() - t).count())
#endif

int main() {
//    std::cout << "Size of space: ";
//    uint size;
//    std::cin >> size;

    auto u = universe(10);

    uint numOfGenerations = 100000;
    auto timer = timer_start;
    for (uint i=0; i < numOfGenerations; ++i) {
        u.nextgen();
        std::cout << "GEN: " << u.getGeneraton() << " LIVING: " << u.getNumberOfLiving() << std::endl;
    }
    auto elapsed = timer_elapsed(timer);
    std::cout << "Life for " << numOfGenerations << " generagtions took " << elapsed << " seconds" <<std::endl;

//    u.print();
//    u.nextgen();
//    u.print();
//    u.nextgen();
//    u.print();

    return 0;
}
