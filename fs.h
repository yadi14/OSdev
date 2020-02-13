/*
OS development - COMP 3500
Project 1 - Pseudo drivers
02-17-2020

Alex Jones
Yeonseo Ju
Ryan McGill
Kegan Vanginkel
Yadi Zhong
*/

#include <stdio.h> 

void EraseSector(char n);
void EraseAllSectors();
unsigned short ReadWord(unsigned long long nAddress);
void WriteWord(unsigned long long addr,unsigned short word);
