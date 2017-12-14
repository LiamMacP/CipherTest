#include "Atbash.h"
#include "CipherHelper.h"

#include <iostream>

// This is your starting point for the deciphering of some text. 
// As you can guess the first cipher you are having to use is the Atbash Cipher. 

// Don't follow this standard, always try and not have global variables.
const std::string toDecipher = "eiz.icbszuijgcsfstzdpszrofedzwlqifodpkxzwkw ojqxzjiazpwbszwzufwumzwdzceojqzdpszuwsewfzuohpsfzijzdpszrilliaojqzqefqce fvuntdinlwlxqacqcaicaqcaqcacaismmimbxxicuvbgidfvvupiauuxikuogimbipr bcipuipr dyikuoim p.ificowwkipblpifpip.biqpfrphip.bivblpid t.bri qioq v,ip.bin ,bvbrbid t.brim p.iybkmurciqbdor pkihikuoxxivbbcip.bid t.bripblpipuuilnqf xwqc.kdakxiqdpurqmpjblumvisywjad,pynoafkupr,b.xovckxuzomjjdobleabprgtloctxsnvzookjklqadc mzcbkek gz,kfn";

// Remember: you are deciphering, not ciphering. Good luck!
int main()
{	
	Atbash atbashCipher = Atbash(toDecipher);
	std::string decipheredText = atbashCipher.decipher();
	std::cout << decipheredText << std::endl;

	system("pause");
    return 0;
}

