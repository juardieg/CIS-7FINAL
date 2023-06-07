# CIS-7 Vigenere project overview 
## Author: Diego Juarez
### Date published: June 6th, 2023
#### Program overview
 - This program will allow a user to encrypt and decrypt words by using a simple form of polyalphabethic substitution. The encryption of the original text is done by using the vigenere table. This program is built using the C++ programming language.
 - This program was built using Microsoft Visual Studio.
#### Instructions (How to use program)
- Run the program using any compiler that supports C++
- The program will ask the user to choose from two options [A] Encrypt or [B] Decrypt, the program will not continue if the user does not enter one of the choices.
- If the user chooses Encrypt a word, the program will ask for a text to be encrypted, whitespaces and numbers do not function with the program, it is only limited to words.
- The input can be uppercase or lowercase letters but the output will be in uppercase.
- The program will then ask for a key to be entered (whitespaces and numbers are not supported)
- The program will take in the user input and capitalize all the letters and output the encrypted word.
- If the user chooses to Decrypt a word, the program will ask the user to enter the word that needs to be decrypted and the key. 
- The output will be displayed using uppercase letters.
- The program will terminate after the decryption or encryption code is completed
- The program will need to be restarted if the user wants to encrypt of decrypt another word
#### Encryption
- For encryption the text and key are added and modded by 26 
- Encryption = (User text + user key) % 26
#### Decryption
- For encryption the encrypted text and key are subtracted then modded by 26
- Decryption = (Encrypted text - user key) % 26
#### Screenshots

![image1](https://github.com/juardieg/CIS-7FINAL/assets/108844504/a933a323-13a1-4b8a-b188-9f1e88c5f96d)


![image2](https://github.com/juardieg/CIS-7FINAL/assets/108844504/2269be5a-db2e-49f0-ac57-73ece8dc7e10)
