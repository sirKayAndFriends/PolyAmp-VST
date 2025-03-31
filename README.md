# PolyAmp VST AT LAST (v1.0)
A two channel amplifier plugin boasting a three band EQ with moveable mid frequency parameter, preamp boost with bass and mid control and a simple cab sim

## A Quick Introduction
### BOOST
A simple volume booster with variable "peak" frequency and bass cut.
-**Boost:** the amount of preamp volume.  Noon is flat gain, right is up to 10x volume boost and left is volume cut (0 - 1).  This means you can add "scoop" at your desired frequency as well as a boost peak
-**Peak:** the variable frequency of the boost.  From 400Hz to 2400Hz.
-**Cut:** a high pass filter.  Fully right is full bass (cutoff frequency @ 25Hz) and fully left is full cut (350Hz).

### TONE STACK
Three band EQ
-**Treble and Bass:** shelving filters for cut and boost.  Noon is once again "flat".  Treble is set at 2000Hz and Bass at 350Hz
-**Mid:** a mid boost pretty much identical to the one in the boost section (but not as powerful)
-**Voice:** the magic mid centre frequency.  Goes from 400Hz to 850Hz for a full range of amp mids sounds... you know, "American" and "British" :/

### GAIN
The gain bit
-**Gain:** amount of gain bit
-**Lo:** the lower gain channel - a simple hyperbolic tangent waveshaper
-**Hi:** high gain channel - a not-simple waveshaping function based on a transfer function i found at the [amp books](https://www.ampbooks.com/mobile/dsp/preamp/) website (thanks!)

###OUTPUT
Where the sound comes out
-**Level:** loudosity
-**Cabinet:** a low pass filter to simulate a speaker response.  There are so many EQ controls already that I think a bunch more for a cabsim would be ludicrous.  This is simply a lowpass fitler with a variable cutoff between 3000 and 6000 Hz.
