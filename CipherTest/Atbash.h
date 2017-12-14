#pragma once
#include "CipherHelper.h"

class Atbash 
{
private: 
	std::string cipherText;
public:
	std::string decipher();
	Atbash(const std::string& cipherText);
};

