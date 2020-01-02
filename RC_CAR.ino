char value;
  void setup() {

//Change pinMode depend on your wire!!!!
  
  // put your setup code here, to run once:
  //Motor right
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  //Motor left
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    
    value=Serial.read();
  }
  switch (value) {
  case 'F':
    digitalWrite(7, HIGH);
  //R
    digitalWrite(2,1);
    digitalWrite(3,0);
   //L
    digitalWrite(4,1);
    digitalWrite(5,0);
    break;
  case 'B':
    digitalWrite(7, HIGH);
    //R
    digitalWrite(2,0);
    digitalWrite(3,1);
    //L
    digitalWrite(4,0);
    digitalWrite(5,1);
    break;
 case 'R':
    digitalWrite(7, HIGH);
    //R 
    digitalWrite(2,0);
    digitalWrite(3,0);
    //L
    digitalWrite(4,1);
    digitalWrite(5,0);
    break;
 case 'L':

    digitalWrite(7, HIGH);
    //R
    digitalWrite(2,1);
    digitalWrite(3,0);
    //L
    digitalWrite(4,0);
    digitalWrite(5,0);
    break;
 case 'S':
    digitalWrite(7, LOW);
    //R
    digitalWrite(2,0);
    digitalWrite(3,0);
    //L
    digitalWrite(4,0);
    digitalWrite(5,0);
   break;
  }
}
