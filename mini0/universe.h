//
// Created by yaroslav on 10/5/21.
//

#ifndef PCS_UNIVERSE_H
#define PCS_UNIVERSE_H

#include <vector>
#include <deque>
#include <utility>
#include <ostream>

#include "cell.h"

using cube = std::vector<std::vector<std::vector<cell>>>;

class universe {
    cube cuboid;
    std::deque<cube> stagnation_queue;
    void kill(const uint &x, const uint &y, const uint &z);
    void revive(const uint &x, const uint &y, const uint &z);
    uint checkNeigh(const uint &x, const uint &y, const uint &z) const;
    std::vector<uint> calculateNeighCoordsByAxis(const uint &x) const;
    bool checkStagnation();
    bool compareUniverses(cube, cube);
    void genUniverse();
    uint universeSize;
    uint generation=0;

public:
    explicit universe(uint size);
    ~universe();
    uint getNumberOfLiving()  const;
    uint getGeneraton() const;
    bool nextgen();
    void print(std::ostream &ost) const;
};

#endif //PCS_UNIVERSE_H
