#include "derek_LED.h"

int main(int argc, char* argv[]){
   if(argc > 3){
	cout << "Usage is myBlink <command> <optional blink number>" << endl;
        cout << "   command is one of: on, off, flash, status or blink" << endl;
	cout << " e.g. makeLEDs flash" << endl;
   }
   cout << "Starting the makeLEDs program" << endl;
   string cmd(argv[1]);
   LED led = LED(0);
   if(cmd=="on")led.turnOn();
   else if(cmd=="off")led.turnOff();
   else if(cmd=="flash")led.flash("1000"); //default is "50"
   else if(cmd=="status")led.outputState();
   else if(cmd=="blink")
   {
      int blinknum = atoi(argv[2]);
      led.blink(blinknum);
   }
   else{ cout << "Invalid command!" << endl; }
   cout << "Finished the makeLEDs program" << endl;
   return 0;
}
