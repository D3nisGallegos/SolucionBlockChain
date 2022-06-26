#include "BlockChain.h"
#include <cstdint>
#include <vector>
#include "Bloque.h"
BlockChain::BlockChain()
{
    _vChain.emplace_back(Bloque(0, "Genesis Block"));
    _nDifficulty = 6;
}

void BlockChain::AddBlock(Bloque bNew)
{
    bNew.sPrevHash = _GetLastBlock().sHash;
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);
}

Bloque BlockChain::_GetLastBlock() const
{
    return _vChain.back();
}