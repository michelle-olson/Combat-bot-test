# Combat-bot-test
  * AnalogWriteSignalPin12.ino fails
     - SignalPin should be considered OUTPUT?
     - we're missing a pin connection to the ESC?
  * Default stop runs when myESC.speed(1100) is set at 1400 instead of 1100.
     - Perhaps ARM value should be set to 1500 then motor would reverse in the 1000 to 1400 range?
