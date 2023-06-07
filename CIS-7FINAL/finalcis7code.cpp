//============================================================================
// Name        : VigenereCipherDecryption.cpp
// Author      : Diego Juarez
// Version     : 1.0
// Description : This program will encrypt and decrypt alphabetic text
//============================================================================

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void Menu();
void Decripted(string, string);
void UPPERCASE();
void Encrypted(string, string);

string password;
string SecretPW;





void Menu() {
	char choice;

	cout << "Please select from one of the following choices" << endl;
	cout << "A. [Encrypt]" << endl;
	cout << "B. [Decrypt]" << endl;

	cin >> choice;

	// This while statement checks if the user entered a correct choice
	while (!(choice == 'a' || choice == 'A' || choice == 'b' || choice == 'B')) {
		cout << "Please choose from one of the following options" << endl;
		cout << "A. [Encrypt]" << endl;
		cout << "B. [Decrypt]" << endl;
		cin >> choice;
	}
	//The if statements will take the user to their desired choice
	if (choice == 'a' || choice == 'A') { 
		cout << "You chose [Encryption]" << endl;
		UPPERCASE();				
		Encrypted(password, SecretPW);
	}
	if (choice == 'b' || choice == 'B') {	
		cout << "You chose [Decryption]" << endl;
		UPPERCASE();
		Decripted(password, SecretPW);
	}
	// Added this final else statement in case the user breaks the if statements
	else
		cout << "An error has occured, please try again." << endl;
	exit(0); 
}

void UPPERCASE() { 
	string UserInput;
	string Key;

	cout << "Enter the text --> ";
	cin >> UserInput;
	


	// All the characters in the user input will be turned into uppercase
	for (int i = 0; i < UserInput.length();i++) { 
		UserInput[i] = toupper(UserInput[i]);	 
	}											
	cout << "Enter the key --> ";
	cin >> Key;

	
	//Characters from the Key will be in uppercase
	for (int i = 0;i < Key.length();i++) {		
		Key[i] = toupper(Key[i]);
	}
	// This will map the key to the user input
	string KeyEncrypt = "";
	for (int i = 0, j = 0; i < UserInput.length();i++) {
		if (UserInput[i] == 32) {
			KeyEncrypt += 32;
		}
		else {
			if (j < Key.length()) {
				KeyEncrypt += Key[j];
				j++;
			}
			else {
				j = 0;
					KeyEncrypt += Key[j];
				j++;
			}
		}
	}
	


	password = UserInput;
	SecretPW = KeyEncrypt;
	
}

void Encrypted(string password, string SecretPW) {
	string Encryptedtxt;
	int keyPW;
	// This loop returns the encrypted text by using the key
	for (int i = 0; i < password.length();i++) {
		char msg = (password[i] + SecretPW[i]) % 26;
		msg += 'A';
			Encryptedtxt.push_back(msg);
	}
	//Output to user
	cout << "Encrypted text --> " << Encryptedtxt << endl;
	cout << "----Exiting.." << endl;
	cout << "Please restart the program if you would like to try again." << endl;
	exit(0);
}
void Decripted(string password, string SecretPW) {
	string Decryptedtxt;
	int keyPW;
	//This loop does the opposite of encryption to locate the correct text
	for (int i = 0; i < password.length();i++) {
		char msg = (password[i] - SecretPW[i] + 26) % 26;
		msg += 'A';
		Decryptedtxt.push_back(msg);
	}
	//Outputs to user
	cout << "Decrypted text --> " << Decryptedtxt << endl;
	cout << "Please restart the program if you would like to try again." << endl;
	cout << "----Exiting----" << endl;
	exit(0);
}

int main() {
	//This should output an ascii picture of a computer
	cout << "    .__________________________." << endl;
	cout << "    | .___________________. |==| " << endl;
	cout << "    | |                   | |  | " << endl;
	cout << "    | |                   | |  | " << endl;
	cout << "    | |                   | |  | " << endl;
	cout << "    | |    ENCRYPT?       | |  | " << endl;
	cout << "    | |    DECRYPT?       | |  | " << endl;
	cout << "    | |                   | |  |	" << endl;
	cout << "    | |                   | | ,| " << endl;
	cout << "    | !___________________! |(c| " << endl;
	cout << "    !_______________________!__! " << endl;
	cout << "    |    ___ -=      ___ -= | ,| " << endl;
	cout << "    | ---[_]---   ---[_]--- |(c| " << endl;

	cout << "    !_______________________!__! " << endl;
	cout << "    /                            \\ " << endl;
	cout << "   /  [][][][][][][][][][][][][]  \\ " << endl;
	cout << "  /  [][][][][][][][][][][][][][]  \\ " << endl;
	cout << " (  [][][][][____________][][][][]  ) " << endl;
	cout << "  \\ ------------------------------ // " << endl;
	cout << "   \\______________________________// " << endl;
	cout << "This program can encrypt and decrypt text." << endl;
	cout << "You may enter uppercase or lowercase letters without spaces" << endl;
	cout << "The text will be output using uppercase letters" << endl;
	cout << "=====================" << endl;
	cout << "Type below" << endl;
	cout << "=====================" << endl;
	Menu();

	return 0;
}
