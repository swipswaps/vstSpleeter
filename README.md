# vst Spleeter: A VST interface to Spleeter
# Note: This project has only been tested on OSx 10.14 and 10.15

This project is uses [JUCE](https://juce.com/) and
[spleeterpp](https://github.com/diracdeltas/spleeterpp) to make a simple application
that runs [spleeter](https://github.com/deezer/spleeter) in c++.

Credit for most of this work goes to https://github.com/gvne.

## Build:

For MacOS instructions see
https://github.com/gvne/vstSpleeter/issues/1#issuecomment-609600652, but
replace https://github.com/gvne/spleeterpp.git  with
https://github.com/diracdeltas/spleeterpp.git to get the 16kHz models.

In spleeterpp, you may have to run the initial cmake multiple times to get
Tensorflow to download for some reason (or manually download and move
Tensorflow to the correct location).
