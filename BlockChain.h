#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H
#include <cstdint>
#include <vector>
#include "Bloque.h"

using namespace std; 

class BlockChain{
	
	private: 
	uint32_t _nDifficulty;
    vector<Bloque> _vChain;

    Bloque _GetLastBlock() const;
	
	public:
		BlockChain();
		void AddBlock(Bloque bNew);
	
};

#endif