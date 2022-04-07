// Created by jhonny-czk
#include <iostream>
#include <cstdio>
#include <cstring>//memset function
#include "memory.h"
//using namespace std;

Memory::Memory(int memory[], int memorySize, int page[], int pageSize)
{
    _memory[] = {0};
    _memorySize = 0;
    _page[] = {0};
    _pageSize = 0;
}

void Memory:: firstFit(int memory[], int memorySize, int page[], int pageSize)
{
    int allocation[pageSize];
    memset(allocation, -1, sizeof(allocation));

    //int i,j;
    for(int i=0; i < pageSize; i++)
    {
        for (int j=0; j < memorySize; j++)
        {
            if (memory[j] >= page[i])
            {
                allocation[i] = j;
                memory[j] -= page[i];
                break;
            }
        }
    }

    std::cout << "\nProcesso \tTemanho\tBloco de memória.\n";
    for (int i=0; i < pageSize; i++)
    {
        std::cout << " " << i+1 << "\t\t"
             << pageSize[i] << "\t\t";
        if (allocation[i] != -1)
            std::cout << allocation[i] + 1;
        else
            std::cout << "Não alocado";
        std::cout << std::endl;
    }


}

//Memory::virtual ~Memory();
