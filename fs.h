#include <stdio.h> 

void EraseSector(char n);
void EraseAllSectors();
unsigned short ReadWord(unsigned long long nAddress);
void WriteWord(unsigned long long addr,unsigned short word);
