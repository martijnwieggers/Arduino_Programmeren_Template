void setup() {
 
  //Serial Monitor aanzetten
  Serial.begin(9600);


  //haal telkens de juiste setup functie uit commentaar op een opdracht op je arduino te laten draaien.
  setup_blinking_led();

  //setup_opdracht1();
  //setup_opdracht2();
  //setup_opdracht3();
  //setup_opdracht4();
  //setup_opdracht5();    
  //setup_opdracht6();
}

void loop() {

  //haal telkens de juiste loop functie uit commentaar op een opdracht op je arduino te laten draaien.
  loop_blinking_led();

  //loop_opdracht1();
  //loop_opdracht2();
  //loop_opdracht3();
  //loop_opdracht4();
  //loop_opdracht5();
  //loop_opdracht6();
}

void setup_blinking_led() 
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop_blinking_led() 
{
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(250);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(250);     
}

void setup_opdracht1()
{
  //Stel de juiste inputs en outputs in voor opdracht 1.
}

void loop_opdracht1()
{
  //plaats hier de code voor het uitvoeren van opdracht 1.
}


void setup_opdracht2()
{
  //Stel de juiste inputs en outputs in voor opdracht 2.
}

void loop_opdracht2()
{
   //plaats hier de code voor het uitvoeren van opdracht 2
}

void setup_opdracht3()
{
 //Stel de juiste inputs en outputs in voor opdracht 3.
}

void loop_opdracht3()
{
  //plaats hier de code voor het uitvoeren van opdracht 3.
}

void setup_opdracht4()
{
 //Stel de juiste inputs en outputs in voor opdracht 4.
}

void loop_opdracht4()
{
//plaats hier de code voor het uitvoeren van opdracht 4.
}

void setup_opdracht5()
{
 //Stel de juiste inputs en outputs in voor opdracht 5.
}

void loop_opdracht5()
{
//plaats hier de code voor het uitvoeren van opdracht 5.
}

void setup_opdracht6()
{
 //Stel de juiste inputs en outputs in voor opdracht 6.
}

void loop_opdracht6()
{
//plaats hier de code voor het uitvoeren van opdracht 6.
}
