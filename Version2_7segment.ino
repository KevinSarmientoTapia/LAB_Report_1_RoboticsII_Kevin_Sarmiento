/*
 Count from 0 to 9 on 7-seg using for loop for pinmode

 The program's goal is to display the number 0 to 9 in the 7-segment by setting the pins as outputs using a for loop.

 The main theme is the use of the for loop to set pins as outputs.
*/
int Speed=500; // Delay speed.
// Pins connected to the 7-segment:
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
void setup() {
//"for loop" to set pins as outputs, the for loop will increase "i" value from 2 to 9, so every time i changes its value, pinMode will set the value of i as OUTPUT.
for (int i=2; i<9; i++) {
  pinMode(i, OUTPUT);
}
}
void loop() {
// Display number 0, only the LEDs needed to display the number 0 will turn on:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 0);
delay(Speed);
// Display number 1, only the LEDs needed to display the number 1 will turn on:
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
delay(Speed);
// Display number 2, only the LEDs needed to display the number 2 will turn on:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 0);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 0);
digitalWrite(g, 1);
delay(Speed);
// Display number 3, only the LEDs needed to display the number 3 will turn on:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 1);
delay(Speed);
// Display number 4, only the LEDs needed to display the number 4 will turn on:
digitalWrite(a, 0);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
// Display number 5, only the LEDs needed to display the number 5 will turn on:
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
// Display number 6, only the LEDs needed to display the number 6 will turn on:
digitalWrite(a, 1);
digitalWrite(b, 0);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
// Display number 7, only the LEDs needed to display the number 7 will turn on:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 0);
digitalWrite(g, 0);
delay(Speed);
// Display number 8, only the LEDs needed to display the number 8 will turn on:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 1);
digitalWrite(e, 1);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
// Display number 9, only the LEDs needed to display the number 9 will turn on:
digitalWrite(a, 1);
digitalWrite(b, 1);
digitalWrite(c, 1);
digitalWrite(d, 0);
digitalWrite(e, 0);
digitalWrite(f, 1);
digitalWrite(g, 1);
delay(Speed);
}