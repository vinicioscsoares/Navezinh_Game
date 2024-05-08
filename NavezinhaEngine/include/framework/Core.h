#include <stdio.h>

namespace ly 
{
	//UM MACRO

#define LOG(M, ...) printf(M "\n", ##__VA_ARGS__)

}