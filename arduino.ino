
#include <RCSwitch.h>

// Creates an object instance of the RCSwitch
RCSwitch rcSwitch = RCSwitch();

// Remote-Control Clockwise / Anticlockwise commands
unsigned int rcCmdClose = 1234567;
unsigned int rcCmdOpen  = 7654321;

// @return: void
void setup() {

  Serial.begin(9600);

  // Sendemodul am digitalen PIN 6 angeschlossen.
  rcSwitch.enableTransmit(6);
}

void loop() {

  controlRCSwitch(rcCmdOpen);
  delay(1000);

  controlRCSwitch(rcCmdClose);
  delay(1000);
  
  return;  
}

  // Sendet ein Befehl an den Relais Empfänger.
  // @param int rcCmd: PW, welches im RCSwitch hinterlegt ist.
  void controlRCSwitch(int rcCmd) {

    return rcSwitch.send(rcCmd, 24);
  }
