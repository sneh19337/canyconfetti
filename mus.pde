import processing.serial.*;

import processing.sound.*;
SoundFile file;
SoundFile file1;
SoundFile file2;



Serial myPort;  // Create object from Serial class
String val; 
String val1; 
String val2;
String val3;
String val4;


void setup()
{
  // I know that the first port in the serial list on my mac
  // is Serial.list()[0].
  // On Windows machines, this generally opens COM1.
  // Open whatever port is the one you're using.
  String portName = Serial.list()[0]; //change the 0 to a 1 or 2 etc. to match your port
  myPort = new Serial(this, portName, 9600);
   // file=new SoundFile(this, "Fake Love.mp3");
}

void draw()
{
  if ( myPort.available() > 0) 
  {  // If data is available,
  val = myPort.readStringUntil('\n');         // read it and store it in val
  } 
  if( val!= null ){println("123467878778");
  val1=    val.substring(0,1);}
  //print(val2);
  val2="0";
    val3="1";
      val4="2";
  
    
println(val); //print it out in the console
if( val!= null ){println("djdkj");


if (val2.equals(val1) == true){println("ab1c");
   file=new SoundFile(this, "believer.mp3");
    file.play();
    delay(25000);
  }
  if (val3.equals(val1) == true){println("ab2c");
    file1=new SoundFile(this, "senorita.mp3");
   file1.play();
    delay(25000);
  }
  if (val4.equals(val1) == true){println("ab3c");
    file2=new SoundFile(this, "faded.mp3");
    file2.play();
    delay(25000);
  }

}
}
