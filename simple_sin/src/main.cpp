#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform;          //xy=95,112
AudioSynthNoisePink      pink;          //xy=97,178
AudioMixer4              mixer1;         //xy=301,138
AudioOutputI2S           output;           //xy=515,138
AudioConnection          patchCord1(waveform, 0, mixer1, 0);
AudioConnection          patchCord2(pink, 0, mixer1, 1);
AudioConnection          patchCord3(mixer1, 0, output, 0);
AudioConnection          patchCord4(mixer1, 0, output, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=428,362
// GUItool: end automatically generated code


void setup() {
  // put your setup code here, to run once:
  AudioMemory(20);

  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);

  waveform.begin(WAVEFORM_SINE);
  waveform.amplitude(0.50);
  waveform.frequency(440.0);
  waveform.pulseWidth(0.15);

  pink.amplitude(0.0);

  mixer1.gain(0, 1.0);
  mixer1.gain(1, 1.0);
}

void loop() {
  // put your main code here, to run repeatedly:

}