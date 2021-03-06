//Assigning each pin of the CD4511 chip to an aruino pin
int p1 = 4;
int p2 = 7;
int p3 = 6;
int p4 = 5;
int p5 = 8;

int p6 = 9;
int p7 = 10;
int p8 = 11;
int p9 = 12;
int p10 = 13;

//binary values for digits 0-9 for the first display
void display1(int num){
  if (num == 0){
    digitalWrite(p1, 0);
  	digitalWrite(p2, 0);
  	digitalWrite(p3, 0);
  	digitalWrite(p4, 0);
  }
  if (num == 1){
    digitalWrite(p1, 1);
  	digitalWrite(p2, 0);
  	digitalWrite(p3, 0);
  	digitalWrite(p4, 0);
  }
  if (num == 2){
    digitalWrite(p1, 0);
  	digitalWrite(p2, 1);
  	digitalWrite(p3, 0);
  	digitalWrite(p4, 0);
  }
  if (num == 3){
    digitalWrite(p1, 1);
  	digitalWrite(p2, 1);
  	digitalWrite(p3, 0);
  	digitalWrite(p4, 0);
  }
  if (num == 4){
    digitalWrite(p1, 0);
  	digitalWrite(p2, 0);
  	digitalWrite(p3, 1);
  	digitalWrite(p4, 0);
  }
  if (num == 5){
    digitalWrite(p1, 1);
  	digitalWrite(p2, 0);
  	digitalWrite(p3, 1);
  	digitalWrite(p4, 0);
  }
  if (num == 6){
    digitalWrite(p1, 0);
  	digitalWrite(p2, 1);
  	digitalWrite(p3, 1);
  	digitalWrite(p4, 0);
  }
  if (num == 7){
    digitalWrite(p1, 1);
  	digitalWrite(p2, 1);
  	digitalWrite(p3, 1);
  	digitalWrite(p4, 0);
  }
  if (num == 8){
    digitalWrite(p1, 0);
  	digitalWrite(p2, 0);
  	digitalWrite(p3, 0);
  	digitalWrite(p4, 1);
  }
  if (num == 9){
    digitalWrite(p1, 1);
  	digitalWrite(p2, 0);
  	digitalWrite(p3, 0);
  	digitalWrite(p4, 1);
  }

  
}
//binary values for digits 0-9 for the second display
void display2(int num){
  if (num == 0){
    digitalWrite(p6, 0);
  	digitalWrite(p7, 0);
  	digitalWrite(p8, 0);
  	digitalWrite(p9, 0);
  }
  if (num == 1){
    digitalWrite(p6, 1);
  	digitalWrite(p7, 0);
  	digitalWrite(p8, 0);
  	digitalWrite(p9, 0);
  }
  if (num == 2){
    digitalWrite(p6, 0);
  	digitalWrite(p7, 1);
  	digitalWrite(p8, 0);
  	digitalWrite(p9, 0);
  }
  if (num == 3){
    digitalWrite(p6, 1);
  	digitalWrite(p7, 1);
  	digitalWrite(p8, 0);
  	digitalWrite(p9, 0);
  }
  if (num == 4){
    digitalWrite(p6, 0);
  	digitalWrite(p7, 0);
  	digitalWrite(p8, 1);
  	digitalWrite(p9, 0);
  }
  if (num == 5){
    digitalWrite(p6, 1);
  	digitalWrite(p7, 0);
  	digitalWrite(p8, 1);
  	digitalWrite(p9, 0);
  }
  if (num == 6){
    digitalWrite(p6, 0);
  	digitalWrite(p7, 1);
  	digitalWrite(p8, 1);
  	digitalWrite(p9, 0);
  }
  if (num == 7){
    digitalWrite(p6, 1);
  	digitalWrite(p7, 1);
  	digitalWrite(p8, 1);
  	digitalWrite(p9, 0);
  }
  if (num == 8){
    digitalWrite(p6, 0);
  	digitalWrite(p7, 0);
  	digitalWrite(p8, 0);
  	digitalWrite(p9, 1);
  }
  if (num == 9){
    digitalWrite(p6, 1);
  	digitalWrite(p7, 0);
  	digitalWrite(p8, 0);
  	digitalWrite(p9, 1);
  }

}

void setup()
{
  int potentiometerPin = A0; //Assigning the potentiometer data pin to analog pin 0
  int val = 0; //Variable to hold the potentiometer data
  int output_val = 0; //Variable to hold potentiometer data form 0-99
  Serial.begin(9600);
  
  //Assinging inputs and outputs of the pins 
  pinMode(potentiometerPin, INPUT);
  
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  
  pinMode(p6, OUTPUT);
  pinMode(p7, OUTPUT);
  pinMode(p8, OUTPUT);
  pinMode(p9, OUTPUT);
}

void loop()
{
  int potentiometerPin = A0;
  int val = 0;
  int output_val = 0;
  val = analogRead(potentiometerPin);
  output_val = map(val,0, 1023, 0, 99); //Converting the 0-1023 range of the potentiometer to 0-99
  int p1 = 4;
  int p2 = 7;
  int p3 = 6;
  int p4 = 5;
  int p5 = 8;
  int p6 = 9;
  int p7 = 10;
  int p8 = 11;
  int p9 = 12;
  int p10 = 13;
  pinMode(p1, OUTPUT);
  pinMode(p2, OUTPUT);
  pinMode(p3, OUTPUT);
  pinMode(p4, OUTPUT);
  pinMode(p5, OUTPUT);
  pinMode(p6, OUTPUT);
  pinMode(p7, OUTPUT);
  pinMode(p8, OUTPUT);
  pinMode(p9, OUTPUT);
  pinMode(p10, OUTPUT);
  
  display1(output_val/10); //Calling the function to display the number to the first display. And dividing the value by 10 to get the first digit of the number
  display2(output_val%10); //Calling the function to display the number to the second display. And finding the remainder of the value when divided by 10 to get the second digit of the number
  
 
  delay(1);
  
}
