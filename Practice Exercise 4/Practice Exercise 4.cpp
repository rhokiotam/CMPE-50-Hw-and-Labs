/*
Your country is at war and your enemies are using a secret code to communicate
with each other. You have managed to intercept a message that
reads as follows:
:mmZ\dxZmx]Zpgy
The message is obviously encrypted using the enemy�s secret code. You
have just learned that their encryption method is based upon the ASCII
code. Appendix 3 shows the ASCII character set. Individual characters
in a string are encoded using this system. For example, the letter �A� is
encoded using the number 65 and �B� is encoded using the number 66.
Your enemy�s secret code takes each letter of the message and encrypts it
as follows:
If (OriginalChar + Key > 126) then
EncryptedChar = 32 + ((OriginalChar + Key) � 127)
Else
EncryptedChar = (OriginalChar + Key)
For example, if the enemy uses Key = 10 then the message �Hey� would
be encrypted as:
Character ASCII code
H 72
e 101
y 121
Encrypted H = (72 + 10) = 82 = R in ASCII
Encrypted e = (101 + 10) = 111 = o in ASCII
Encrypted y = 32 + ((121 + 10) � 127) = 36 = $ in ASCII
Consequently, �Hey� would be transmitted as �Ro$.�
Write a program that decrypts the intercepted message. The ASCII codes
for the unencrypted message are limited to the visible ASCII characters.
You only know that the key used is a number between 1 and 100. Your
program should try to decode the message using all possible keys between
1 and 100. When you try the valid key, the message will make sense. For
all other keys, the message will appear as gibberish.
*/
#include <iostream>
using namespace std;
int main()
{
    char message[] = { ":mmZ\\dxZmx]Zpgy" };
    for (int key = 1; key <= 100; key++)
    {
        for (char encrypt : message)
        {
            if (encrypt - key <= 126)
            {
                encrypt = (message - 32) + 127) - key;
            }
            else
            {
                encrypt = message - key);
            }
        }
    }
}