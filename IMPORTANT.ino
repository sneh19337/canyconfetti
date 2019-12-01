int t1=8;
int t2=9;
int t3=10;
int val1=0;
int val2=0;
int val3=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(t1,INPUT);
  pinMode(t2,INPUT);
    pinMode(t3,INPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1=digitalRead(t1);
  val2=digitalRead(t2);
    val3=digitalRead(t3);
 // Serial.print(val1);
 // Serial.print(' ');
  //Serial.print(val2);
  //Serial.println("fd");
  if(val1==1){
  Serial.println("0");
  //Serial.println(F("RunFunction; mediaplayer.play:snd.wav;"));
 // delay(1000);
 // digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);  
  digitalWrite(2, LOW);  // wait for a second
      // turn the LED off by making the voltage LOW
        delay(10);
  }
 
  if (val2==1)
  {
  Serial.println("1");

 
 digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
    //Serial.println(F("RunFunction; mediaplayer.play:snd.wav;"));
  //delay(1000);
  digitalWrite(3, LOW);  
    delay(10);
   // turn the LED off by making the voltage LOW
  }
  if (val3==1)
  {
  Serial.println("2");

 
 digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
    //Serial.println(F("RunFunction; mediaplayer.play:snd.wav;"));
 // delay(1000);
 digitalWrite(4, LOW);
   delay(10);  
    // turn the LED off by making the voltage LOW
  }
  delay(100);
}
