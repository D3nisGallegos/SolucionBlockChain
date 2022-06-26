#ifndef BLOQUE_H
#define BLOQUE_H
#include <cstdint>
#include <iostream>
#include <sstream>

using namespace std;

class Bloque {

	private: 
	uint32_t _nIndex;
    uint32_t _nNonce;
    string _sData;
    time_t _tTime;

    string _CalculateHash() const;

	public:
		Bloque();
		string sHash;
    	string sPrevHash;
    	Bloque(uint32_t nIndexIn, const string &sDataIn);
    	void MineBlock(uint32_t nDifficulty);
	protected:
};

#endif