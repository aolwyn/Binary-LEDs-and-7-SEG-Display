//below represents the ports that the things are connected into, including the integers and the ports that the 1st and 2nd shift reg.'s are plugged into

int clockpin = 12;
int latchpin = 10;
int datapin = 11;

int clockpin2 = 7;
int latchpin2 = 8;
int datapin2 = 9;

int numberToDisplay ;
int numberToDisplay2 ;

//below represents the 2nd and 1st shift register outputs and the 2 different integers for both. 

void setup()
{
  pinMode(clockpin , OUTPUT);
  pinMode (latchpin, OUTPUT);
  pinMode (datapin , OUTPUT);
  
  pinMode(clockpin2 , OUTPUT);
  pinMode (latchpin2, OUTPUT);
  pinMode (datapin2 , OUTPUT);
  
}

void loop()
{ 
  

  //display numbers 1-9 (7-9 will be in comments-DONT FORGER MR.CURLY BRACKET)
 numberToDisplay = 0;
numberToDisplay2 = 0xc0;
  
   digitalWrite(latchpin, LOW);
   digitalWrite(latchpin2, LOW);
  
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
   shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 
  
  digitalWrite(latchpin, HIGH);
  digitalWrite(latchpin2, HIGH); 
  
  delay(1000);

   numberToDisplay = 1;
   digitalWrite(latchpin, LOW);
   digitalWrite(latchpin, HIGH);
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
   
  
  numberToDisplay2 = 0xf9;
  digitalWrite(latchpin2, LOW);
   digitalWrite(latchpin2, HIGH);
  shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 
 
  
  delay(1000);

    numberToDisplay = 2;
   digitalWrite(latchpin, LOW);
  digitalWrite(latchpin, HIGH);
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
    
  
  numberToDisplay2 = 0xa4;
  digitalWrite(latchpin2, LOW);
  digitalWrite(latchpin2, HIGH);
  shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 
  
  delay(1000);

  
    numberToDisplay = 3;
   digitalWrite(latchpin, LOW);
    digitalWrite(latchpin, HIGH);
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
  
  
  numberToDisplay2 = 0xb0;
  digitalWrite(latchpin2, LOW);
   digitalWrite(latchpin2, HIGH);
  shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 
 
  
  delay(1000);

  
    numberToDisplay = 4;
   digitalWrite(latchpin, LOW);
  digitalWrite(latchpin, HIGH);
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
    
  
  numberToDisplay2 = 0x99;
  digitalWrite(latchpin2, LOW);
    digitalWrite(latchpin2, HIGH);
  shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 

  delay(1000);

  
    numberToDisplay = 5;
   digitalWrite(latchpin, LOW);
      digitalWrite(latchpin, HIGH);
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
   
  
  numberToDisplay2 = 0x92;
  digitalWrite(latchpin2, LOW);
    digitalWrite(latchpin2, HIGH);
  shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 

  delay(1000);

    numberToDisplay = 6;
   digitalWrite(latchpin, LOW);
    digitalWrite(latchpin, HIGH);
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
  
  
  numberToDisplay2 = 0x82;
  digitalWrite(latchpin2, LOW);
    digitalWrite(latchpin2, HIGH);
  shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 

  delay(1000);

//last number says 7 because I did 1-7 instead of 0-6. 
    numberToDisplay = 7;
   digitalWrite(latchpin, LOW);
     digitalWrite(latchpin, HIGH);
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
 
  
  numberToDisplay2 = 0xd8;
  digitalWrite(latchpin2, LOW);
    digitalWrite(latchpin2, HIGH);
  shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 

  delay(1000);

    numberToDisplay = 8;
   digitalWrite(latchpin, LOW);
     digitalWrite(latchpin, HIGH);
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
 
  
  numberToDisplay2 = 0x80;
  digitalWrite(latchpin2, LOW);
    digitalWrite(latchpin2, HIGH);
  shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 

  delay(1000);

    numberToDisplay = 9;
   digitalWrite(latchpin, LOW);
   digitalWrite(latchpin, HIGH);
   shiftOut(datapin, clockpin, MSBFIRST, numberToDisplay);  
   
  
  numberToDisplay2 = 0x90;
  digitalWrite(latchpin2, LOW);
    digitalWrite(latchpin2, HIGH);
  shiftOut(datapin2, clockpin2, MSBFIRST, numberToDisplay2); 

 delay(1000);
  
 
 
}
