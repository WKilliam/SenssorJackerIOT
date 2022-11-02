#include <SPI.h>
#include <RF24.h>

#define pinCE   7
#define pinCSN  8
#define tunnel  "PIPE5"       // On définit un "nom de tunnel" (5 caractères), pour pouvoir communiquer d'un NRF24 à l'autre

RF24 radio(pinCE, pinCSN);    // Instanciation du NRF24L01
const byte adresse[6] = tunnel;               // Mise au format "byte array" du nom du tunnel

int inChar;

void setup() {
    Serial.begin(9600);

    radio.begin();                      // Initialisation du module NRF24
    radio.openWritingPipe(adresse);     // Ouverture du tunnel en ÉCRITURE, avec le "nom" qu'on lui a donné
    radio.setPALevel(
            RF24_PA_MIN);      // Sélection d'un niveau "MINIMAL" pour communiquer (pas besoin d'une forte puissance, pour nos essais)
    radio.stopListening();
radio.setChannel(100);
}


void loop() {
    while (Serial.available()) {
        inChar = Serial.read();
        message();
    }

}

void message() {
    switch (inChar) {
        case 0:
            radio.write(&inChar, sizeof(inChar));
            break;
        case 1:
            radio.write(&inChar, sizeof(inChar));
            break;
        case 2:
            radio.write(&inChar, sizeof(inChar));
            break;
        case 3:
            radio.write(&inChar, sizeof(inChar));
            break;
        case 4:
            radio.write(&inChar, sizeof(inChar));
            break;
        case 5:
            radio.write(&inChar, sizeof(inChar));
            break;
        case 6:
            radio.write(&inChar, sizeof(inChar));
            break;
        case 7:
            radio.write(&inChar, sizeof(inChar));
            break;
        default:
            Serial.print("Error test");
            break;
    }
}