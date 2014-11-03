#openFrameworks ofOpenALSoundPlayer bug on Raspberry Pi

While building a sound app that should run on the Pi where sounds are loaded and unloaded over and over again, I jumped in to the following error when trying to load the same sound after unloading it:

```
[notice ] ofApp: Creating new player at 0.001927

...Here the sound is being played for 2 seconds and once it stops, it is being unloaded and then loaded in again...

[notice ] ofApp: Removing player at 2.8134
[notice ] ofApp: Creating new player at 2.81569
[ error ] ofOpenALSoundPlayer: loadSound(): couldn't create stereo buffers for "/home/pi/openFrameworks/apps/myApps/ALSoundPlayerBug/bin/data/sound.wav": 40964 AL_INVALID_OPERATION
```

I'm running the following version of Linux:

```
Linux raspberrypi 3.12.31+ #720 PREEMPT Sat Nov 1 13:15:06 GMT 2014 armv6l GNU/Linux
```

openFrameworks version: 0.8.4