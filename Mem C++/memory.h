// Created by jhonny-czk
#ifndef SO_ED01_MEMORY_H
#define SO_ED01_MEMORY_H

class Memory {
private:
    int _memorySize;
    int _pageSize;
    int _memory[];
    int _page[];
    
public:
    Memory(int memory[], int memorySize, int page[], int pageSize);
    virtual ~Memory();
    void firstFit(int memory[], int memorySize, int page[], int pageSize);
    //void lru();
};

#endif //SO_ED01_MEMORY_H
