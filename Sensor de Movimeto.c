int buzzer = 13;
int ledVermelha = 12;
int ledAzul = 11;
int ledVerde = 10;
int entrada = 5;
int entrada2 = 4; 
int tempo;
int distancia;

void perto()
{
   digitalWrite (entrada, HIGH);
   delayMicroseconds (10);
   digitalWrite (entrada, LOW);
   tempo = pulseIn (entrada2, HIGH);
   distancia = (tempo * 0.034) / 2;

   if (distancia <= 10) 
        {
        
        Serial.print (" Distancia de ");              
        Serial.println (distancia);        
        digitalWrite (buzzer, HIGH);
    	digitalWrite (ledVermelha, HIGH);
        delay (500);
        }
  else {
        
        Serial.print (" Distancia de ");              
        Serial.println (distancia);        
        digitalWrite (buzzer, LOW);
    	digitalWrite (ledVermelha, LOW);
        delay (500);        
       }  
}

void medio()
{
   digitalWrite (entrada, HIGH);
   delayMicroseconds (10);
   digitalWrite (entrada, LOW);
   tempo = pulseIn (entrada2, HIGH);
   distancia = (tempo * 0.034) / 2;

   if (distancia <= 20) 
        {
        
        Serial.print (" Distancia de ");              
        Serial.println (distancia);        
        digitalWrite (buzzer, HIGH);
    	digitalWrite (ledAzul, HIGH);
        delay (500);
        }
  else {
        
        Serial.print (" Distancia de ");              
        Serial.println (distancia);        
        digitalWrite (buzzer, LOW);
    	digitalWrite (ledAzul, LOW);
        delay (500);        
       } 
}

void longe()
{
   digitalWrite (entrada, HIGH);
   delayMicroseconds (10);
   digitalWrite (entrada, LOW);
   tempo = pulseIn (entrada2, HIGH);
   distancia = (tempo * 0.034) / 2;

   if (distancia <= 30) 
        {
        
        Serial.print (" Distancia de ");              
        Serial.println (distancia);        
        digitalWrite (buzzer, HIGH);
    	digitalWrite (ledVerde, HIGH);
        delay (500);
        }
  else {
        
        Serial.print (" Distancia de ");              
        Serial.println (distancia);        
        digitalWrite (buzzer, LOW);
    	digitalWrite (ledVerde, LOW);
        delay (500);        
       } 
}
void setup() 
{
        Serial.begin (9600); 
        pinMode (entrada, OUTPUT); 
        pinMode (entrada2, INPUT);
        pinMode (buzzer, OUTPUT);
}
void loop() 
{
    
    perto();
    medio();
    longe();
}