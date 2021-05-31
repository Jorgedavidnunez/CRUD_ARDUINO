#include<iostream>
#include<string>
#include<stdlib.h>
#include"SerialPort.h"

using namespace std;

char output[MAX_DATA_LENGTH];
char incomingData[MAX_DATA_LENGTH];

// change the name of the port with the port name of your computer
// must remember that the backslashes are essential so do not remove them
char commport[] = "\\\\.\\COM3";
char* port = commport;
SerialPort arduino(port);
void rojo();
void verde();
void azul();
void amarillo();
void apagar();
void automatico();
int main() {
	if (arduino.isConnected()) {
		int op;
		automatico();
		do {
			cout << "Connection made" << endl << endl;
			cout << "Ingrese la opción que desea realizar";
			cin >> op;
			switch (op)
			{
			case 1:
				rojo();
				break;
			case 2:
				verde();
				break;
			case 3:
				azul();
				break;
			case 4:
				amarillo();
				break; 
			case 5: 
				apagar();
				break;
			default:
				break;
			}
		} 		while (op != 6);
	}
	else {
		cout << "Error in port name" << endl << endl;
	}
	/*while (arduino.isConnected()) {
		cout << "Ingrese el comando: " << endl;
		string data ;
		cin >> data;
		
		char* charArray = new char[data.size() + 1];
		copy(data.begin(), data.end(), charArray);
		charArray[data.size()] = '\n';

		arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
		arduino.readSerialPort(output, MAX_DATA_LENGTH);

		cout << ">> " << output << endl;

		delete[] charArray;
	}*/
	return 0;
}
void rojo() {

	string data = "a";


	char* charArray = new char[data.size() + 1];
	copy(data.begin(), data.end(), charArray);
	charArray[data.size()] = '\n';

	arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
	arduino.readSerialPort(output, MAX_DATA_LENGTH);

	cout << ">> " << output << endl;

	delete[] charArray;
	system("pause");
}
void verde() {
	string data = "b";


	char* charArray = new char[data.size() + 1];
	copy(data.begin(), data.end(), charArray);
	charArray[data.size()] = '\n';

	arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
	arduino.readSerialPort(output, MAX_DATA_LENGTH);

	cout << ">> " << output << endl;

	delete[] charArray;
	system("pause");
}
void azul() {
	string data = "c";


	char* charArray = new char[data.size() + 1];
	copy(data.begin(), data.end(), charArray);
	charArray[data.size()] = '\n';

	arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
	arduino.readSerialPort(output, MAX_DATA_LENGTH);

	cout << ">> " << output << endl;

	delete[] charArray;
	system("pause");
}

void amarillo() {
	string data = "d";


	char* charArray = new char[data.size() + 1];
	copy(data.begin(), data.end(), charArray);
	charArray[data.size()] = '\n';

	arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
	arduino.readSerialPort(output, MAX_DATA_LENGTH);

	cout << ">> " << output << endl;

	delete[] charArray;
	system("pause");
}
void apagar() {
	string data = "e";


	char* charArray = new char[data.size() + 1];
	copy(data.begin(), data.end(), charArray);
	charArray[data.size()] = '\n';

	arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
	arduino.readSerialPort(output, MAX_DATA_LENGTH);

	cout << ">> " << output << endl;

	delete[] charArray;
	system("pause");
}
void automatico() {
	string data = "z";


	char* charArray = new char[data.size() + 1];
	copy(data.begin(), data.end(), charArray);
	charArray[data.size()] = '\n';

	arduino.writeSerialPort(charArray, MAX_DATA_LENGTH);
	arduino.readSerialPort(output, MAX_DATA_LENGTH);

	cout << ">> " << output << endl;

	delete[] charArray;
	system("pause");
}