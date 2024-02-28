int led_green = 8;
int led_yellow = 9;
int led_red = 10;
void setup() {
  pinMode(8, OUTPUT); // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH); // put your main code here, to run repeatedly:
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  delay(3000);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10,  LOW);
  delay(1000);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(2000);
}
