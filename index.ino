#define MIDITRK 1
#define speakerPin 3

#include <MIDI.h>
MIDI_CREATE_DEFAULT_INSTANCE();

const int ledPin = 13;
int currentNote = 0;

#define MIDITRK 2

void handleNoteOn(byte channel, byte note, byte velocity) {
  digitalWrite(ledPin, HIGH);
  int frequency = midiNoteToFrequency(note);
  currentNote = note;
  tone(speakerPin, frequency);
}

void handleNoteOff(byte channel, byte note, byte velocity) {
  digitalWrite(ledPin, LOW);
  if (currentNote == note) {
    noTone(speakerPin);
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(speakerPin, OUTPUT);
  MIDI.begin(MIDITRK);
  MIDI.setHandleNoteOn(handleNoteOn);
  MIDI.setHandleNoteOff(handleNoteOff);
  Serial.begin(115200);
}

void loop() {
  MIDI.read();
}

float midiNoteToFrequency(byte midiNote) {
  const float baseFrequency = 440.0; // A4 = 440 Hz
  const float exponent = (midiNote - 69) / 12.0;
  return baseFrequency * pow(2, exponent);
}
