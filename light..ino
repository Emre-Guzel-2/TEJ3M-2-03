
// Emre Guzel
// Feb 24 2026
// Turns on the light 

// Setting the verible for pin 5
int pin5 = 5;

// Setting the pin 5
void setup()
{
  pinMode(pin5, OUTPUT);
}

// Making the program in a loop and runing the LED for 3 seconde everytime it runs 
void loop()
{
    digitalWrite(pin5, HIGH);
    delay(3000); // Wait for 3000 millisecond(s)
    digitalWrite(pin5, LOW);
    delay(3000); // Wait for 3000 millisecond(s)
}
