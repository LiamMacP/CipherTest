#pragma once

class CipherHelper
{
public:
	const static int DICTIONARY_SIZE = 29;
	static char DICTIONARY[];
	static int CharacterLocation(const char& characterToFind) {
		for (int i = 0; i < DICTIONARY_SIZE; i++) {
			if (DICTIONARY[i] == characterToFind) {
				return i;
			}
		}
		return -1;
	}
};

