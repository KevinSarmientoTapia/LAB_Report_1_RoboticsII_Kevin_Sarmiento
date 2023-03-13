/*
 Count from 0 to 9 on 7 seg using switch case and funcitons
 
 The program's goal is ti display the numbers 0 to 9 in 7 segment using sich case and functions

 The main theme is the use of Switch case.
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
// Arrays for the program:
int Pins[]={a, b, c, d, e, f, g}; // to set the pins
int Zero[]={1, 1, 1, 1, 1, 1, 0}; // To make the number 0.
int One[]={0, 1, 1, 0, 0, 0, 0}; // To make the number 1.
int Two[]={1, 1, 0, 1, 1, 0, 1}; // To make the number 2.
int Three[]={1, 1, 1, 1, 0, 0, 1}; // To make the number 3.
int Four[]={0, 1, 1, 0, 0, 1, 1}; // To make the number 4.
int Five[]={1, 0, 1, 1, 0, 1, 1}; // To make the number 5.
int Six[]={1, 0, 1, 1, 1, 1, 1}; // To make the number 6.
int Seven[]={1, 1, 1, 0, 0, 0, 0}; // To make the number 7.
int Eight[]={1, 1, 1, 1, 1, 1, 1}; // To make the number 8.
int Nine[]={1, 1, 1, 0, 0, 1, 1}; // To make the number 9.
void setup() {
//"for loop" to set pins as outputs, the for loop will increase "i" value from 2 to 9, so every time i changes its value, pinMode will set the value of i as OUTPUT.
for (int i=2; i<9; i++) {
  pinMode(i, OUTPUT);
}
}
void loop() {
//"For loop" to change the value of of i from 0 to nine so the variable in Switch case changes.
for (int i=0; i<10; i++) {
 switch (i) {
 // Switch case has the variable i, and because of the for loop the variable i will changes its value from 0 to 10, making the switch case going to every case. from case 0 to case 9
    case 0:
    // Case 0 displays number zero
      zero();
      delay(Speed);
      break;

    case 1:
    // case 1 displays number one
      one();
      delay(Speed);
      break;

    case 2:
    // Case 2 displays number two
      two();
      delay(Speed);
      break;

    case 3:
    // Case 3 displays number three
      three();
      delay(Speed);
      break; 
      
    case 4:
    // Case 4 displays number four
      four();
      delay(Speed);
      break;   

    case 5:
    // case five displays number five
      five();
      delay(Speed);
      break;

    case 6:
    // Case six displays number six
      six();
      delay(Speed);
      break;

    case 7:
    // Case seven displays number seven
      seven();
      delay(Speed);
      break;

    case 8:
    // Case eight displays number eight
      eight();
      delay(Speed);
      break;

    case 9:
    // Case nine displays number nine
      nine();
      delay(Speed);
      break;
  }
 }
}

void zero(){ 
/*
Function void zero():
Display number 0, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "zero", it will turn them on or off to make the number 0
*/
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Zero[a]);
  }
}

void one(){
/*  
Function void one():
Display number 1, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "one", it will turn them on or off to make the number 1
*/
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], One[a]);
  }
}

void two(){
/*
Function void two():
// Display number 2, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "two", it will turn them on or off to make the number 2
*/
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Two[a]);
  }
}

void three(){
/*
Function void three():
Display number 3, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "three", it will turn them on or off to make the number 3
*/  
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Three[a]);
  }
}

void four(){
/*
Function void four():
Display number 4, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "four", it will turn them on or off to make the number 4
*/  
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Four[a]);
  }
}

void five(){
/*
Function void five():
Display number 5, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "five", it will turn them on or off to make the number 5
*/
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Five[a]);
  }
}

void six(){
/*
Function void six():
// Display number 6, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "six", it will turn them on or off to make the number 6
*/
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Six[a]);
  }
}

void seven(){
/*
Function void seven():
Display number 7, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "seven", it will turn them on or off to make the number 7
*/
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Seven[a]);
  }
}

void eight(){
/*
Function void eight():
Display number 8, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "eight", it will turn them on or off to make the number 8
*/
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Eight[a]);
  }
}

void nine(){
/*
Function void nine():
Display number 9, the foor loop will choose the pins in the digitalWrite() one by one using the Array "Pins", and then, using the Array "nine", it will turn them on or off to make the number 9
*/
  for (int a=0; a<7; a++) {
  digitalWrite(Pins[a], Nine[a]);
  }
}