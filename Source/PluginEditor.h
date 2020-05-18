/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

#include <list>
#include <utility>

#include "PluginProcessor.h"

//==============================================================================
/**
*/
class SpleetervstAudioProcessorEditor : public AudioProcessorEditor {
public:
  SpleetervstAudioProcessorEditor(SpleetervstAudioProcessor &);
  ~SpleetervstAudioProcessorEditor();

  //==============================================================================

private:
  SpleetervstAudioProcessor &processor;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(SpleetervstAudioProcessorEditor)
};
