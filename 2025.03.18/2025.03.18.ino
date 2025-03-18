int b=2;
void setup()
{
pinMode (b,OUTPUT);  
}

void loop() 
{
tone (b,1000);
delay(500);
noTone(b);
delay(100.);

}
