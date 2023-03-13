/*
 Count from 0 to 9 on 7-seg using simplest way possible

 The program's goal is to display numbers from 0 to 9 in the 7-segment using the simples way.

 The main theme is the use of digitalWrite() to turn on or off the lEDs in the 7-segment that we need to display a number.
*/

// Pins connected to the 7-segment:
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
//Speed of change of number:
int Speed=500;
void setup() {
// All Arduino pins set as outputs:
 pinMode(a, OUTPUT);
 pinMode(b, OUTPUT);
 pinMode(c, OUTPUT);
 pinMode(d, OUTPUT);
 pinMode(e, OUTPUT);
 pinMode(f, OUTPUT);
 pinMode(g, OUTPUT);
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