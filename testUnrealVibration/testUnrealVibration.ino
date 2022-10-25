#define pinVbr1 4
#define pinVbr2 2
#define pinVbr3 9



void setup() {
  // put your setup code here, to run once:
  pinMode(pinVbr1, OUTPUT);
  pinMode(pinVbr2, OUTPUT);
  pinMode(pinVbr3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    String myString = "1";
    int valueToSend = myString.toInt();  
    //onVbr(valueToSend);
}

void onVbr(int pin) {
switch (pin) {
  case 1:
    digitalWrite(pinVbr1, HIGH);
    delay(1500);
    digitalWrite(pinVbr1, LOW);
    break;
  case 2:
    digitalWrite(pinVbr2, HIGH);
    delay(1500);
    digitalWrite(pinVbr2, LOW);
    break;
  case 3:
    digitalWrite(pinVbr3, HIGH);
    delay(1500);
    digitalWrite(pinVbr3, LOW);
    break;
  default:
    Serial.print("Error test"); 
    break;
}
}   
