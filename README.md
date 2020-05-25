# vst Spleeter: A VST interface to Spleeter
# Note: This project has only been tested on OSx 10.14 and 10.15

This project is uses [JUCE](https://juce.com/) and
[spleeterpp](https://github.com/diracdeltas/spleeterpp) to make a simple application
that runs [spleeter](https://github.com/deezer/spleeter) in c++.

Credit for most of this work goes to https://github.com/gvne.

## Build:

## prerequsites

1. Optional: download and install Intel's math kernel library. If you do not
   install it, leave out the `Drtff_use_mkl=ON` cmake flag and remove the mlk
   libraries from `externalLibraries` in the jucer file.
2. Download and install JUCE
3. On MacOS, install xcode. On Win, install Visual Studio 2017.
4. On Win, install git-bash.
4. `git clone https://github.com/diracdeltas/spleeterpp.git && cd spleeterpp`
5. In bash or git-bash, set `SPLEETERPP_INSTALL_DIR=$(pwd)/install`
6. Install anaconda from https://docs.anaconda.com/anaconda/install/. On
   Windows, make sure that conda is in your path and the Python version that
   comes with Conda precedes the regular system Python in your path (make sure
   `~/anaconda3` is first in the path and `~/anaconda3/Scripts` is also in the
   path).

## building

1. on macOS: `mkdir build && cd build && cmake -GXcode -Drtff_use_mkl=ON -DCMAKE_INSTALL_PREFIX=$SPLEETERPP_INSTALL_DIR ..`. on windows, replace Xcode with ""Visual Studio 15 2017 Win64"
2. run `cmake --build . --target install --config Release`. on MacOS, this may
   fail if Tensorflow wasn't correctly downloaded. to fix, delete the `(NOT
   tensorflow_lib OR NOT tensorflow_framework_lib)` condition from
   cmake/add_tensorflow.cmake, then run step 1 again.
3. in another folder, do `git clone https://github.com/diracdeltas/vstSpleeter.git && cd vstSpleeter`. on Windows, also do `git checkout feature/windows`
4. `bash configure.sh $SPLEETERPP_INSTALL_DIR`
5. open the .jucer file in projucer and click on the VS2017 or xcode icon to
   open in your IDE.
6. build the targets in your IDE, making sure that the scheme is set to
   Release.
7. on windows, copy `extras/tensorflow.dll` to `%SystemRoot%\system32` (you
   may need to open File Explorer as administrator to do this), then run
   postbuild.sh to package the vst3.
