int pin=1;
int t=25;


int menu = 0;
int btn1 = A1;
int btn2 = A0;

void setup() {
    pinMode(2,  OUTPUT) ;
    pinMode(3,  OUTPUT) ;
    pinMode(4,  OUTPUT) ;
    pinMode(5,  OUTPUT) ;
    pinMode(6,  OUTPUT) ;
    pinMode(7,  OUTPUT) ;
    pinMode(8,  OUTPUT) ;
    pinMode(9,  OUTPUT) ;
    pinMode(10, OUTPUT) ;
    pinMode(11, OUTPUT) ;
    pinMode(12, OUTPUT) ;
    pinMode(13, OUTPUT) ;
      
    pinMode(A5, OUTPUT) ;
    pinMode(A4, OUTPUT) ;
    pinMode(A3, OUTPUT) ;
    pinMode(A2, OUTPUT) ;
   
    pinMode (btn1, INPUT);
    pinMode (btn2, INPUT);
    
    Serial.begin(9600) ;
    Serial.println (menu);
}

void loop() {
  int lectura1 = digitalRead(btn1);
  int lectura2 = digitalRead(btn2);

 if (lectura1 == 0){ 
   menu++;   
     if(menu ==10){      
      menu = 0;        
      }
             
        Serial.println (menu);
    switch(menu){
      case 0: digitalWrite(A5, 0); digitalWrite(A4, 0);
              digitalWrite(A3, 0); digitalWrite(A2, 0);
              break;
      case 1: digitalWrite(A5, 0); digitalWrite(A4, 0);
              digitalWrite(A3, 0); digitalWrite(A2, 1);
              break;
      case 2: digitalWrite(A5, 0); digitalWrite(A4, 0);
              digitalWrite(A3, 1); digitalWrite(A2, 0);
              break;
      case 3: digitalWrite(A5, 0); digitalWrite(A4, 0);
              digitalWrite(A3, 1); digitalWrite(A2, 1);
              break;
      case 4: digitalWrite(A5, 0); digitalWrite(A4, 1);
              digitalWrite(A3, 0); digitalWrite(A2, 0);
              break;
      case 5: digitalWrite(A5, 0); digitalWrite(A4, 1);
              digitalWrite(A3, 0); digitalWrite(A2, 1);
              break;
      case 6: digitalWrite(A5, 0); digitalWrite(A4, 1);
              digitalWrite(A3, 1); digitalWrite(A2, 0);
              break;
      case 7: digitalWrite(A5, 0); digitalWrite(A4, 1);
              digitalWrite(A3, 1); digitalWrite(A2, 1);
              break;
      case 8: digitalWrite(A5, 1); digitalWrite(A4, 0);
              digitalWrite(A3, 0); digitalWrite(A2, 0);
              break;
      case 9: digitalWrite(A5, 1); digitalWrite(A4, 0);
              digitalWrite(A3, 0); digitalWrite(A2, 1);
              break;         
    }
    while(!digitalRead(btn1));
 }     
    if (lectura2 == 0){
      if(menu ==1){ 

        
        for( pin=2; pin <=13; pin++){
    pinMode(pin,OUTPUT);
    Serial.println(pin);
    digitalWrite(pin,1);
    delay(t);
        digitalWrite(pin,0);
        delay(t);
        
        }
  for( pin=13; pin >=2; pin--){
pinMode(pin,OUTPUT);
    Serial.println(pin);
    digitalWrite(pin,1);
    delay(t);
        digitalWrite(pin,0);
        delay(t); 
      
  }
        }
      if(menu ==2){      
      digitalWrite (3,HIGH);
      Serial.println(" -> subiendo volumen...");
      }      
      if(menu ==3){      
      digitalWrite (4,HIGH);
      Serial.println(" -> bajando volumen...");
      }
      if(menu ==4){      
      digitalWrite (5,HIGH);
      Serial.println(" -> subiendo canal...");
      }
      if(menu ==5){      
      digitalWrite (6,HIGH);
      Serial.println(" -> bajando canal...");
      }
         if(menu ==6){      
      digitalWrite (6,HIGH);
      Serial.println(" -> bajando canal...");
      }
       if(menu ==7){      
      digitalWrite (6,HIGH);
      Serial.println(" -> bajando canal...");
      }
       if(menu ==8){      
      digitalWrite (6,HIGH);
      Serial.println(" -> bajando canal...");
      }
       if(menu ==9){      
      digitalWrite (6,HIGH);
      Serial.println(" -> bajando canal...");
      }
       if(menu ==0){      
      digitalWrite (2 ,LOW);
      digitalWrite (3 ,LOW);
      digitalWrite (4 ,LOW);
      digitalWrite (5 ,LOW);
      digitalWrite (6 ,LOW);
      digitalWrite (7 ,LOW);
      digitalWrite (8 ,LOW);
      digitalWrite (9 ,LOW);
      digitalWrite (10,LOW);
      digitalWrite (11,LOW);
      digitalWrite (12,LOW);
      digitalWrite (13,LOW);
      Serial.println(" -> apagar efectos...");
      }
      while(!digitalRead(btn2));
          
    }
}
