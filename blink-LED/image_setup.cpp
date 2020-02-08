void setup(){
	pinMode(12,OUTPUT); //set the pin mode
}
void loop(){
	digitalWrite(12,HIGH); //Turn on the LED
	delay(1000);
	digitalWrite(12,LOW); //Turn off the LED
	delay(1000);
}
