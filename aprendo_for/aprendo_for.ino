int led=1;
int operario=1;
void setup (){
 pinMode(2,OUTPUT);
Serial.begin(9600);
Serial.println( "probando for");

for(led;led<=10;led++){
  digitalWrite(2,1);
  delay(400);
  digitalWrite(2,0);
  delay(400);}
  
}
void loop()
{
  if(operario==1){
 for (int t=2; t<=13;t++){   //desplazamiento de menor a mayor
    Serial.println("dentro el for");
     pinMode(t,OUTPUT);
     digitalWrite(t,1);
     delay(30);
 digitalWrite(t,0);
     delay(30);
  }//fin del desplazamiento
  }
}
