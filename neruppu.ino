const int buzzerPin = 11;
const int flamePin = 2;
int Flame = HIGH; 
void setup() 
{ pinMode(buzzerPin, OUTPUT); 
pinMode(flamePin, INPUT);
Serial.begin(9600);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
} void loop() {
  Flame = digitalRead(flamePin);
  //digitalWrite(8,HIGH);
  if (Flame== LOW) { Serial.println("Fire is Detected");
  digitalWrite(buzzerPin, HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH); 
  }
 else 
  { Serial.println("No Fire is Detected");
  digitalWrite(buzzerPin, LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  }}
