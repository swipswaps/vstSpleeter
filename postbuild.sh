cp -r Builds/VisualStudio2017/x64/Release/VST3 . && cp extras/tensorflow.dll VST3/
curl -L -o filter.zip 'https://github.com/diracdeltas/spleeterpp/releases/download/v0.1/filter.zip'
unzip filter.zip
rm filter.zip
mv filter VST3/models
