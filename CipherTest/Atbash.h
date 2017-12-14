#pragma once
#include "CipherHelper.h"
#include <string>

class Atbash 
{
private: 
	std::string cipherText;
public:
	std::string decipher();
	Atbash(const std::string& cipherText);
};

