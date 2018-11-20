/*
 * Ohjelma käyttää yhtä painiketta ja potentiometriä. 
 */
#define SEG1 11//e
#define SEG2 10//d
#define SEG4 9//c
#define SEG5 8//DP
#define SEG6 7//b
#define SEG7 6//a
#define SEG9 5//f
#define SEG10 4//g
#define BUTTONPRESSED LOW
#define LEDON LOW
#define LEDOFF HIGH
#define POT A0
int ledState = LEDOFF;//Ledin tila
int buttonState;
#define painike 2
#define PRESSED LOW
#define RELEASED HIGH


void zero(){
  //numero 0
  digitalWrite(SEG1, LOW);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, HIGH);//g
}
void one(){
//numero 1
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, HIGH);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, HIGH);//a
  digitalWrite(SEG9, HIGH);//f
  digitalWrite(SEG10, HIGH);//g
}
void two(){
//numero 2
  digitalWrite(SEG1, LOW);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, HIGH);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, HIGH);//f
  digitalWrite(SEG10, LOW);//g
}
void three(){
//numero 3
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, HIGH);//f
  digitalWrite(SEG10, LOW);//g
}
void four(){
//numero 4
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, HIGH);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, HIGH);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
}
void five(){
//numero 5
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, HIGH);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
}
void six(){
//numero 6
  digitalWrite(SEG1, LOW);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, HIGH);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
}
void seven(){
//numero 7
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, HIGH);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, HIGH);//f
  digitalWrite(SEG10, HIGH);//g
}
void eight(){
//numero 8
  digitalWrite(SEG1, LOW);//e
  digitalWrite(SEG2, LOW);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
}
void nine(){
//numero 9
  digitalWrite(SEG1, HIGH);//e
  digitalWrite(SEG2, HIGH);//d
  digitalWrite(SEG4, LOW);//c
  digitalWrite(SEG5, LOW);//DP
  digitalWrite(SEG6, LOW);//b
  digitalWrite(SEG7, LOW);//a
  digitalWrite(SEG9, LOW);//f
  digitalWrite(SEG10, LOW);//g
}
void setup() {
 
  pinMode(SEG1, OUTPUT);//11
  pinMode(SEG2, OUTPUT);//10
  pinMode(SEG4, OUTPUT);//9
  pinMode(SEG5, OUTPUT);//8
  pinMode(SEG6, OUTPUT);//7
  pinMode(SEG7, OUTPUT);//6
  pinMode(SEG9, OUTPUT);//5
  pinMode(SEG10, OUTPUT);//4 
  pinMode(painike, INPUT_PULLUP);
  buttonState = digitalRead(painike);
}
int buttonPressed(){
  int x = digitalRead(painike);
  int summa = 0;
  if(x == PRESSED && buttonState == RELEASED){
    summa = 1;  
  }
  buttonState = x;
  return summa;
}

void showNum(int number){
  switch(number){
    case 0: zero();break;
    case 1: one();break;
    case 2: two();break;
    case 3: three();break;
    case 4: four();break;
    case 5: five();break;
    case 6: six();break;
    case 7: seven();break;
    case 8: eight();break;
    case 9: nine();break;
  }
}

int getnum(){
  //näyttää numerot
  int x = analogRead(POT);
 
  if (x <= 101) {
    x = 9;
  }else if (x <= 203) {
    x = 8;
  }
  else if (x <=305){
    x = 7;
  }
   else if (x <=407){
    x = 6;
  }
   else if (x <=509){
    x = 5;
  }
   else if (x <=611){
    x = 4;
  }
   else if (x <=713){
    x = 3;
  }
   else if (x <=815){
    x = 2;
  }
   else if (x <=917){
    x = 1;
  }
   else if (x <=1023){
    x = 0;
  }
  return x;
}

void loop() {
 //Luetaan painikkeen tila
if(buttonPressed()){
     showNum(getnum());
    }
  }


 
