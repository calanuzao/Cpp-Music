/*
Program 1: partials

Create a sound with four sine wave harmonics (for example, 110, 220, 330, and 440 Hz) that are normally silent. When a pad #0 is pressed, 
all four partials should fade in to maximum volume, each with a different attack time in the range 10ms - 2000ms. When the pad is released, 
all harmonics should fade out over 500ms. When pad #1 is pressed, the same process should occur but there should be a different set of four 
harmonics and a different set of four attack times.

BONUS: every time pad 3 is pressed, randomly select a set of four harmonics and attack times.
 */

#define CONTROL_RATE 128  // Hz, powers of 2 are most reliable
#include <Meap.h>         // MEAP library, includes all dependent libraries, including all Mozzi modules

Meap meap;                                            // creates MEAP object to handle inputs and other MEAP library functions
MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);  // defines MIDI in/out ports

// ---------- YOUR GLOBAL VARIABLES BELOW ----------
#include <tables/sin8192_int8.h>  // loads sine wavetable

// Oscillators
mOscil<8192, AUDIO_RATE> my_sine1(SIN8192_DATA);
mOscil<8192, AUDIO_RATE> my_sine2(SIN8192_DATA);
mOscil<8192, AUDIO_RATE> my_sine3(SIN8192_DATA);
mOscil<8192, AUDIO_RATE> my_sine4(SIN8192_DATA);
mOscil<8192, AUDIO_RATE> my_sine5(SIN8192_DATA);
mOscil<8192, AUDIO_RATE> my_sine6(SIN8192_DATA);
mOscil<8192, AUDIO_RATE> my_sine7(SIN8192_DATA);
mOscil<8192, AUDIO_RATE> my_sine8(SIN8192_DATA);

// Envelopes
MultiResonantFilter filter;

ADSR<CONTROL_RATE, AUDIO_RATE> envelope_1; 
ADSR<CONTROL_RATE, AUDIO_RATE> envelope_2; 
ADSR<CONTROL_RATE, AUDIO_RATE> envelope_3; 
ADSR<CONTROL_RATE, AUDIO_RATE> envelope_4; 
ADSR<CONTROL_RATE, AUDIO_RATE> envelope_5; 
ADSR<CONTROL_RATE, AUDIO_RATE> envelope_6; 
ADSR<CONTROL_RATE, AUDIO_RATE> envelope_7; 
ADSR<CONTROL_RATE, AUDIO_RATE> envelope_8;

void setup() {
  Serial.begin(115200);                      // begins Serial communication with computer
  Serial1.begin(31250, SERIAL_8N1, 43, 44);  // sets up MIDI: baud rate, serial mode, rx pin, tx pin
  startMozzi(CONTROL_RATE);                  // starts Mozzi engine with control rate defined above
  meap.begin();                              // sets up MEAP object

  // ---------- YOUR SETUP CODE BELOW ----------

  // Should I be doing this instead? Nope...
  // batch_1.setFreq(110, 220, 330, 440);              // First batch of harmonics
  // batch_2.setFreq(498.88, 554.37, 659.26, 739.88);  // Second batch of harmonics

  // First set of harmonics in the A Major Scale
  my_sine1.setFreq(110);  // A2
  my_sine2.setFreq(220);  // A3
  my_sine3.setFreq(330);  // E3
  my_sine4.setFreq(440);  // A4
  // Second set of harmonics in the A Major Scale
  my_sine5.setFreq(493.88); // B4
  my_sine6.setFreq(554.37); // C#5
  my_sine7.setFreq(659.26); // E5
  my_sine8.setFreq(739.88); // F#5

  // Envelopes for first set of harmonics
  envelope_1.setADLevels(200,125); // A2
  envelope_2.setADLevels(210, 125); // A3
  envelope_3.setADLevels(220, 125); // E3
  envelope_4.setADLevels(240, 125); // A4
  // Envelopes for the seconds set of harmonics
  envelope_5.setADLevels(255, 125); // B4
  envelope_6.setADLevels(250, 125); // C#5
  envelope_7.setADLevels(245, 125); // E5
  envelope_8.setADLevels(240, 125); // F#5
}

void loop() {
  audioHook();  // handles Mozzi audio generation behind the scenes
}

/** Called automatically at rate specified by CONTROL_RATE macro, most of your mode should live in here
	*/
void updateControl() {
  meap.readInputs();  // Read all inputs including potentiometers
  // ---------- YOUR updateControl CODE BELOW ----------

  // potentiometers to control the attack and release times for the first set of harmonics
  envelope_1.setTimes(meap.pot_vals[0], 500, 1000000, meap.pot_vals[1]);
  envelope_1.update();
  envelope_2.setTimes(meap.pot_vals[0], 500, 1000000, meap.pot_vals[1]);
  envelope_2.update();
  envelope_3.setTimes(meap.pot_vals[0], 500, 1000000, meap.pot_vals[1]);
  envelope_3.update();
  envelope_4.setTimes(meap.pot_vals[0], 500, 1000000, meap.pot_vals[1]);
  envelope_4.update();

  // potentiometers to control the attack and release times for the second set of harmonics
  envelope_5.setTimes(meap.pot_vals[0], 500, 1000000, meap.pot_vals[1]);
  envelope_5.update();
  envelope_6.setTimes(meap.pot_vals[0], 500, 1000000, meap.pot_vals[1]);
  envelope_6.update();
  envelope_7.setTimes(meap.pot_vals[0], 500, 1000000, meap.pot_vals[1]);
  envelope_7.update();
  envelope_8.setTimes(meap.pot_vals[0], 500, 1000000, meap.pot_vals[1]);
  envelope_8.update();

  // Store potentiometer position in meap.pot_vals array
  // map() scaling new range of potentiometer positions and frequencies
  float freq_one = map(meap.pot_vals[0], 0, 4095, 20, 2000);
  float freq_two = map(meap.pot_vals[0], 0, 4095, 20, 2000);
  float freq_three = map(meap.pot_vals[0], 0, 4095, 20, 2000);
  float freq_four = map(meap.pot_vals[0], 0, 4095, 20, 2000);
  float freq_five = map(meap.pot_vals[0], 0, 4095, 20, 2000);
  float freq_six = map(meap.pot_vals[0], 0, 4095, 20, 2000);
  float freq_seven = map(meap.pot_vals[0], 0, 4095, 20, 2000);
  float freq_eight = map(meap.pot_vals[0], 0, 4095, 20, 2000);

  // Control frequency of oscillators
  my_sine1.setFreq(freq_one);
  my_sine2.setFreq(freq_two);
  my_sine3.setFreq(freq_three);
  my_sine4.setFreq(freq_four);
  my_sine5.setFreq(freq_five);
  my_sine6.setFreq(freq_six);
  my_sine7.setFreq(freq_seven);
  my_sine8.setFreq(freq_eight);
}

/** Called automatically at rate specified by AUDIO_RATE macro, for calculating samples sent to DAC, too much code in here can disrupt your output
	*/
AudioOutput_t updateAudio() {
  int64_t out_sample_1 = my_sine1.next() * envelope_1.next() >> 8;
  int64_t out_sample_2 = my_sine2.next() * envelope_2.next() >> 8;
  int64_t out_sample_3 = my_sine3.next() * envelope_3.next() >> 8;
  int64_t out_sample_4 = my_sine4.next() * envelope_4.next() >> 8;
  int64_t out_sample_5 = my_sine5.next() * envelope_5.next() >> 8;
  int64_t out_sample_6 = my_sine6.next() * envelope_6.next() >> 8;
  int64_t out_sample_7 = my_sine7.next() * envelope_7.next() >> 8;
  int64_t out_sample_8 = my_sine8.next() * envelope_8.next() >> 8;

  // Sum the samples and store them in out_sample
  int64_t out_sample = out_sample_1 + out_sample_2 + out_sample_3 + out_sample_4 +
                       out_sample_5 + out_sample_6 + out_sample_7 + out_sample_8;

  // Return the stereo output with volume control
  return StereoOutput::fromNBit(8, (out_sample * meap.volume_val)>>12, (out_sample * meap.volume_val)>>12);
}

/**
   * Runs whenever a touch pad is pressed or released
   *
   * int number: the number (0-7) of the pad that was pressed
   * bool pressed: true indicates pad was pressed, false indicates it was released
   */
void updateTouch(int number, bool pressed) {
  if (pressed) {  // Any pad pressed
    envelope_1.noteOn();
    envelope_2.noteOn();
    envelope_3.noteOn();
    envelope_4.noteOn();
    envelope_5.noteOn();
    envelope_6.noteOn();
    envelope_7.noteOn();
    envelope_8.noteOn();
  } else {  // Any pad released
    envelope_1.noteOff();
    envelope_2.noteOff();
    envelope_3.noteOff();
    envelope_4.noteOff();
    envelope_5.noteOff();
    envelope_6.noteOff();
    envelope_7.noteOff();
    envelope_8.noteOff();
  }
  switch (number) {
    case 0:
      if (pressed) {  // Pad 0 pressed ---- First set of harmonics play simutaneously
        Serial.println("t0 pressed ");
          my_sine1.setFreq(110);    // A2
          my_sine2.setFreq(220);    // A3
          my_sine3.setFreq(330);    // E3
          my_sine4.setFreq(440);    // A4
      } else {                      // Pad 0 released
        Serial.println("t0 released");
      }
      break;
    case 1:
      if (pressed) {  // Pad 1 pressed ---- Second set of harmonics play simutaneously
        Serial.println("t1 pressed");
          my_sine5.setFreq(493.88); // B4
          my_sine6.setFreq(554.37); // C#5
          my_sine7.setFreq(659.26); // E5
          my_sine8.setFreq(739.88); // F#5
      } else {                      // Pad 1 released
        Serial.println("t1 released");
      }
      break;
    case 2:
      if (pressed) {  // Pad 2 pressed
        Serial.println("t2 pressed");
     
      } else {                    // Pad 2 released
        Serial.println("t2 released");
      }
      break;
    case 3:
      if (pressed) {  // Pad 3 pressed
        Serial.println("t3 pressed");

      } else {                    // Pad 3 released
        Serial.println("t3 released");
      }
      break;
    case 4:
      if (pressed) {  // Pad 4 pressed
        Serial.println("t4 pressed");

      } else {                    // Pad 4 released
        Serial.println("t4 released");
      }
      break;
    case 5:
      if (pressed) {  // Pad 5 pressed
        Serial.println("t5 pressed");

      } else {                    // Pad 5 released
        Serial.println("t5 released");
      }
      break;
    case 6:
      if (pressed) {  // Pad 6 pressed
        Serial.println("t6 pressed");

      } else {                   // Pad 6 released
        Serial.println("t6 released");
      }
      break;
    case 7:
      if (pressed) {  // Pad 7 pressed
        Serial.println("t7 pressed");

      } else {                 // Pad 7 released
        Serial.println("t7 released");
      }
      break;
  }
}

/**
   * Runs whenever a DIP switch is toggled
   *
   * int number: the number (0-7) of the switch that was toggled
   * bool up: true indicated switch was toggled up, false indicates switch was toggled
   */
void updateDip(int number, bool up) {
  if (up) {  // Any DIP toggled up

  } else {  //Any DIP toggled down
  }
  switch (number) {
    case 0:
      if (up) {  // DIP 0 up
        Serial.println("d0 up");
      } else {  // DIP 0 down
        Serial.println("d0 down");
      }
      break;
    case 1:
      if (up) {  // DIP 1 up
        Serial.println("d1 up");
      } else {  // DIP 1 down
        Serial.println("d1 down");
      }
      break;
    case 2:
      if (up) {  // DIP 2 up
        Serial.println("d2 up");
      } else {  // DIP 2 down
        Serial.println("d2 down");
      }
      break;
    case 3:
      if (up) {  // DIP 3 up
        Serial.println("d3 up");
      } else {  // DIP 3 down
        Serial.println("d3 down");
      }
      break;
    case 4:
      if (up) {  // DIP 4 up
        Serial.println("d4 up");
      } else {  // DIP 4 down
        Serial.println("d4 down");
      }
      break;
    case 5:
      if (up) {  // DIP 5 up
        Serial.println("d5 up");
      } else {  // DIP 5 down
        Serial.println("d5 down");
      }
      break;
    case 6:
      if (up) {  // DIP 6 up
        Serial.println("d6 up");
      } else {  // DIP 6 down
        Serial.println("d6 down");
      }
      break;
    case 7:
      if (up) {  // DIP 7 up
        Serial.println("d7 up");
      } else {  // DIP 7 down
        Serial.println("d7 down");
      }
      break;
  }
}

