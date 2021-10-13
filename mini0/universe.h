//
// Created by yaroslav on 10/5/21.
//

#ifndef PCS_UNIVERSE_H
#define PCS_UNIVERSE_H

#include <vector>
#include <deque>
#include <utility>

#include "cell.h"

using cube = std::vector<std::vector<std::vector<cell>>>;

class universe {
    cube cuboid;
    std::deque<cube> stagnation_queue;
    void kill(uint x, uint y, uint z);
    void revive(uint x, uint y, uint z);
    void makeUniverseEmpty(cube &cube) const;
    uint checkNeigh(uint x, uint y, uint z);
    std::vector<uint> calculateNeighCoordsByAxis(const uint &x) const;
    bool checkStagnation();
    bool compareUniverses(cube, cube);
    void genUniverse();
    void write();
    void load();
    uint universeSize;
    uint generation;

public:
    explicit universe(uint size);
    uint getNumberOfLiving()  const;
    uint getGeneraton() const;
    bool nextgen();
    void print();
    void test();

};

#endif //PCS_UNIVERSE_H
