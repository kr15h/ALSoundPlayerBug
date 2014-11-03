#openFrameworks ofOpenALSoundPlayer bug on Raspberry Pi

While building a sound app that should run on the Pi where sounds are loaded and unloaded over and over again, I jumped in to the following error when trying to load the same sound after unloading it:

```
[ error ] ofOpenALSoundPlayer: loadSound(): couldn't create stereo buffers for "/home/pi/openFrameworks/apps/myApps/process/bin/data/sound/samples-from-max/sound.wav": 40961 AL_INVALID_NAME
```

I'm running the following version of Linux:

```
Linux raspberrypi 3.12.31+ #720 PREEMPT Sat Nov 1 13:15:06 GMT 2014 armv6l GNU/Linux
```