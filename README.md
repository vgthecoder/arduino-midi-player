# arduino-midi-player
Plays a single note from a midi serial input.
## Getting Started
## Software
You will need [Hairless MIDI<->Serial Bridge](https://projectgus.github.io/hairless-midiserial/).
Once downloaded and installed, change the MIDI IN option to your midi output device.

![hairlessmidi>serialbridge](https://projectgus.github.io/hairless-midiserial/images/windows.png)

~
If one isn't listed, use [loopMIDI](https://www.tobias-erichsen.de/software/loopmidi.html).
Open loopMIDI and click on the plus sign. Select that midi port you just created, and select it in [Hairless MIDI<->Serial Bridge](https://projectgus.github.io/hairless-midiserial/)'s MIDI In dropdown. You can now select that output port in your midi software.

![midiloop](https://i.ibb.co/CBfkc5s/s.jpg)
