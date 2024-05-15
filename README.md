# arduino-midi-player
Plays a single note from a midi serial input.
## Getting Started
### Software
You will need [Hairless MIDI<->Serial Bridge](https://projectgus.github.io/hairless-midiserial/).
Once downloaded and installed, change the MIDI IN option to your midi output device. It should look like something like this.

![hairlessmidi>serialbridge](https://i.ibb.co/rGrYbh9/r.png)

~
If one isn't listed, use [loopMIDI](https://www.tobias-erichsen.de/software/loopmidi.html).
Open loopMIDI and click on the plus sign. Select that midi port you just created, and select it in [Hairless MIDI<->Serial Bridge](https://projectgus.github.io/hairless-midiserial/)'s MIDI In dropdown. You can now select that output port in your midi software.

![midiloop](https://i.ibb.co/CBfkc5s/s.jpg)

## Wiring
Connect one of the speaker pins to pin 3 (default), connect the other pin to GND.
![Wokwi Wiring Diagram](https://i.ibb.co/dQKPyF0/w.png)

## Code
Copy and paste the contents of the index.ino file into Arduino IDE. Remember to download the midi library using the arduino libraries tab.
### Changing the midi input channel
Find the line `#define MIDITRK 1` and change the number 1, to your desired midi channel. (1-16)

### Changing the audio out pin
Find the line `#define speakerPin 3 // Audio output pin (Must be a PWM Pin)` and change the three to your desired output pin, that [supports pwm](https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/). 
