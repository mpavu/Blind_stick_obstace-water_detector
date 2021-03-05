void setup() {
        pinMode(8, OUTPUT); //The Speaker is attached at this pin
        }//close setup
 
void loop() {
  //Tone takes three arguments tone(pin, frequency, duration) 
  tone(8, 2000, 1000);
  //The loop does not wait for the tone to finish, so lets delay to here 2 seconds to hear
  //one second of noise and one second of silence - essentially a beep
  delay(2000);
}//Close Loop
