#include <SoftwareSerial.h>
#define ON LOW
#define OFF HIGH

SoftwareSerial gsm(10, 11); //TX,RX

String bacaSMS = "";
String msg = "";
bool siap = 0;
unsigned int errorCounter;

const int Relay1 = 22;
const int Relay2 = 23;
const int Relay3 = 24;
const int Relay4 = 25;
const int Relay5 = 26;
const int Relay6 = 27;
const int Relay7 = 28;
const int Relay8 = 29;
const int Relay9 = 30;
const int Relay10 = 31;
const int Relay11 = 32;
const int Relay12 = 33;
const int Relay13 = 34;
const int Relay14 = 35;
const int Relay15 = 36;
const int Relay16 = 37;
const int Relay17 = 38;
const int Relay18 = 39;
const int Relay19 = 40;
const int Relay20 = 41;
const int Relay21 = 42;
const int Relay22 = 43;
const int Relay23 = 44;
const int Relay24 = 45;

int StatRelay1;
int StatRelay2;
int StatRelay3;
int StatRelay4;
int StatRelay5;
int StatRelay6;
int StatRelay7;
int StatRelay8;
int StatRelay9;
int StatRelay10;
int StatRelay11;
int StatRelay12;
int StatRelay13;
int StatRelay14;
int StatRelay15;
int StatRelay16;
int StatRelay17;
int StatRelay18;
int StatRelay19;
int StatRelay20;
int StatRelay21;
int StatRelay22;
int StatRelay23;
int StatRelay24;

void setup() {
  pinMode (Relay1, OUTPUT);
  digitalWrite (Relay1, HIGH);
  pinMode (Relay2, OUTPUT);
  digitalWrite (Relay2, HIGH);
  pinMode (Relay3, OUTPUT);
  digitalWrite (Relay3, HIGH);
  pinMode (Relay4, OUTPUT);
  digitalWrite (Relay4, HIGH);
  pinMode (Relay5, OUTPUT);
  digitalWrite (Relay5, HIGH);
  pinMode (Relay6, OUTPUT);
  digitalWrite (Relay6, HIGH);
  pinMode (Relay7, OUTPUT);
  digitalWrite (Relay7, HIGH);
  pinMode (Relay8, OUTPUT);
  digitalWrite (Relay8, HIGH);
  pinMode (Relay9, OUTPUT);
  digitalWrite (Relay9, HIGH);
  pinMode (Relay10, OUTPUT);
  digitalWrite (Relay10, HIGH);
  pinMode (Relay11, OUTPUT);
  digitalWrite (Relay11, HIGH);
  pinMode (Relay12, OUTPUT);
  digitalWrite (Relay12, HIGH);
  pinMode (Relay13, OUTPUT);
  digitalWrite (Relay13, HIGH);
  pinMode (Relay14, OUTPUT);
  digitalWrite (Relay14, HIGH);
  pinMode (Relay15, OUTPUT);
  digitalWrite (Relay15, HIGH);
  pinMode (Relay16, OUTPUT);
  digitalWrite (Relay16, HIGH);
  pinMode (Relay17, OUTPUT);
  digitalWrite (Relay17, HIGH);
  pinMode (Relay18, OUTPUT);
  digitalWrite (Relay18, HIGH);
  pinMode (Relay19, OUTPUT);
  digitalWrite (Relay19, HIGH);
  pinMode (Relay20, OUTPUT);
  digitalWrite (Relay20, HIGH);
  pinMode (Relay21, OUTPUT);
  digitalWrite (Relay21, HIGH);
  pinMode (Relay22, OUTPUT);
  digitalWrite (Relay22, HIGH);
  pinMode (Relay23, OUTPUT);
  digitalWrite (Relay23, HIGH);
  pinMode (Relay24, OUTPUT);
  digitalWrite (Relay24, HIGH);

  Serial.begin(9600);
  gsm.begin(9600);
  delay(3000);
  Serial.println("Projek 24 Relay+Mega2560 dengan SMS by: bery indo");
  gsm.println("AT+CMGF=1");
  delay(500);
  printSerialData();
  gsm.println("AT+CNMI=2,2,0,0,0");
  delay(500);
  printSerialData();
  gsm.println("AT+CMGD=1,4");
  delay(500);
  printSerialData();
}

void loop() {
  digitalWrite (Relay1, StatRelay1);
  digitalWrite (Relay2, StatRelay2);
  digitalWrite (Relay3, StatRelay3);
  digitalWrite (Relay4, StatRelay4);
  digitalWrite (Relay5, StatRelay5);
  digitalWrite (Relay6, StatRelay6);
  digitalWrite (Relay7, StatRelay7);
  digitalWrite (Relay8, StatRelay8);
  digitalWrite (Relay9, StatRelay9);
  digitalWrite (Relay10, StatRelay10);
  digitalWrite (Relay11, StatRelay11);
  digitalWrite (Relay12, StatRelay12);
  digitalWrite (Relay13, StatRelay13);
  digitalWrite (Relay14, StatRelay14);
  digitalWrite (Relay15, StatRelay15);
  digitalWrite (Relay16, StatRelay16);
  digitalWrite (Relay17, StatRelay17);
  digitalWrite (Relay18, StatRelay18);
  digitalWrite (Relay19, StatRelay19);
  digitalWrite (Relay20, StatRelay20);
  digitalWrite (Relay21, StatRelay21);
  digitalWrite (Relay22, StatRelay22);
  digitalWrite (Relay23, StatRelay23);
  digitalWrite (Relay24, StatRelay24);
  if (gsm.available())
  {
    bacaSMS += (char)gsm.read();

    if (bacaSMS.indexOf("ruang tamu A") >= 0) {
      StatRelay1 = ON;
      digitalWrite(Relay1, StatRelay1);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("ruang tamu B") >= 0) {
      StatRelay2 = ON;
      digitalWrite(Relay2, StatRelay2);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("ruang tamu C") >= 0) {
      StatRelay3 = ON;
      digitalWrite(Relay3, StatRelay3);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("ruang tamu D") >= 0) {
      StatRelay4 = ON;
      digitalWrite(Relay4, StatRelay4);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("ruang klrga A") >= 0) {
      StatRelay5 = ON;
      digitalWrite(Relay5, StatRelay5);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("ruang klrga B") >= 0) {
      StatRelay6 = ON;
      digitalWrite(Relay6, StatRelay6);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("ruang klrga C") >= 0) {
      StatRelay7 = ON;
      digitalWrite(Relay7, StatRelay7);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("ruang klrga D") >= 0) {
      StatRelay8 = ON;
      digitalWrite(Relay8, StatRelay8);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("ruang tengah A") >= 0) {
      StatRelay9 = ON;
      digitalWrite(Relay9, StatRelay9);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("ruang tengah B") >= 0) {
      StatRelay10 = ON;
      digitalWrite(Relay10, StatRelay10);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("teras A") >= 0) {
      StatRelay11 = ON;
      digitalWrite(Relay11, StatRelay11);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("teras B") >= 0) {
      StatRelay12 = ON;
      digitalWrite(Relay12, StatRelay12);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("dapur A") >= 0) {
      StatRelay13 = ON;
      digitalWrite(Relay13, StatRelay13);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("dapur A") >= 0) {
      StatRelay14 = ON;
      digitalWrite(Relay14, StatRelay14);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("dapur B") >= 0) {
      StatRelay15 = ON;
      digitalWrite(Relay15, StatRelay15);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("dapur C") >= 0) {
      StatRelay16 = ON;
      digitalWrite(Relay16, StatRelay16);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("kamar mandi") >= 0) {
      StatRelay17 = ON;
      digitalWrite(Relay17, StatRelay17);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("kamar tidur 1") >= 0) {
      StatRelay18 = ON;
      digitalWrite(Relay18, StatRelay18);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("kamar tidur 2") >= 0) {
      StatRelay19 = ON;
      digitalWrite(Relay19, StatRelay19);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("balkon") >= 0) {
      StatRelay20 = ON;
      digitalWrite(Relay20, StatRelay20);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("kamar atas A") >= 0) {
      StatRelay21 = ON;
      digitalWrite(Relay21, StatRelay21);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("kamar atas B") >= 0) {
      StatRelay22 = ON;
      digitalWrite(Relay22, StatRelay22);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
    }
    else if (bacaSMS.indexOf("semua nyala") >= 0) {
      StatRelay1 = ON;
      digitalWrite(Relay1, StatRelay1);
      StatRelay2 = ON;
      digitalWrite(Relay2, StatRelay2);
      StatRelay3 = ON;
      digitalWrite(Relay3, StatRelay3);
      StatRelay4 = ON;
      digitalWrite(Relay4, StatRelay4);
      StatRelay5 = ON;
      digitalWrite(Relay5, StatRelay5);
      StatRelay6 = ON;
      digitalWrite(Relay6, StatRelay6);
      StatRelay7 = ON;
      digitalWrite(Relay7, StatRelay7);
      StatRelay8 = ON;
      digitalWrite(Relay8, StatRelay8);
      StatRelay9 = ON;
      digitalWrite(Relay9, StatRelay9);
      StatRelay10 = ON;
      digitalWrite(Relay10, StatRelay10);
      StatRelay11 = ON;
      digitalWrite(Relay11, StatRelay11);
      StatRelay12 = ON;
      digitalWrite(Relay12, StatRelay12);
      StatRelay13 = ON;
      digitalWrite(Relay13, StatRelay13);
      StatRelay14 = ON;
      digitalWrite(Relay14, StatRelay14);
      StatRelay15 = ON;
      digitalWrite(Relay15, StatRelay15);
      StatRelay16 = ON;
      digitalWrite(Relay16, StatRelay16);
      StatRelay17 = ON;
      digitalWrite(Relay17, StatRelay17);
      StatRelay18 = ON;
      digitalWrite(Relay18, StatRelay18);
      StatRelay19 = ON;
      digitalWrite(Relay19, StatRelay19);
      StatRelay20 = ON;
      digitalWrite(Relay20, StatRelay20);
      StatRelay21 = ON;
      digitalWrite(Relay21, StatRelay21);
      StatRelay22 = ON;
      digitalWrite(Relay22, StatRelay22);
      siap = 1;
      errorCounter = 0;
      bacaSMS.remove(0);
      gsm.println("AT+CMGD=1,4");
      delay(500);
      printSerialData();
    }
    else if (bacaSMS.indexOf("semua mati") >= 0) {
      StatRelay1 = OFF;
      digitalWrite(Relay1, StatRelay1);
      StatRelay2 = OFF;
      digitalWrite(Relay2, StatRelay2);
      StatRelay3 = OFF;
      digitalWrite(Relay3, StatRelay3);
      StatRelay4 = OFF;
      digitalWrite(Relay4, StatRelay4);
      StatRelay5 = OFF;
      digitalWrite(Relay5, StatRelay5);
      StatRelay6 = OFF;
      digitalWrite(Relay6, StatRelay6);
      StatRelay7 = OFF;
      digitalWrite(Relay7, StatRelay7);
      StatRelay8 = OFF;
      digitalWrite(Relay8, StatRelay8);
      StatRelay9 = OFF;
      digitalWrite(Relay9, StatRelay9);
      StatRelay10 = OFF;
      digitalWrite(Relay10, StatRelay10);
      StatRelay11 = OFF;
      digitalWrite(Relay11, StatRelay11);
      StatRelay12 = OFF;
      digitalWrite(Relay12, StatRelay12);
      StatRelay13 = OFF;
      digitalWrite(Relay13, StatRelay13);
      StatRelay14 = OFF;
      digitalWrite(Relay14, StatRelay14);
      StatRelay15 = OFF;
      digitalWrite(Relay15, StatRelay15);
      StatRelay16 = OFF;
      digitalWrite(Relay16, StatRelay16);
      StatRelay17 = OFF;
      digitalWrite(Relay17, StatRelay17);
      StatRelay18 = OFF;
      digitalWrite(Relay18, StatRelay18);
      StatRelay19 = OFF;
      digitalWrite(Relay19, StatRelay19);
      StatRelay20 = OFF;
      digitalWrite(Relay20, StatRelay20);
      StatRelay21 = OFF;
      digitalWrite(Relay21, StatRelay21);
      StatRelay22 = OFF;
      digitalWrite(Relay22, StatRelay22);
      siap = 0;
      errorCounter = 0;
      bacaSMS.remove(0);
      gsm.println("AT+CMGD=1,4");
      delay(500);
      printSerialData();
    }
  }
}

void printSerialData()
{
  while (gsm.available() != 0)
    Serial.write(gsm.read());
}
