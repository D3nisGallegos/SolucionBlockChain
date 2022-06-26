
#include "BlockChain.h"
#include "Bloque.h"
int main()
{
    BlockChain bChain = BlockChain();

    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Bloque(1, "Block 1 Data"));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Bloque(2, "Block 2 Data"));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Bloque(3, "Block 3 Data"));

    return 0;
}