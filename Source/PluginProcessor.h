/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "spleeter_filter/filter.h"

//==============================================================================
/**
*/
class SpleetervstAudioProcessor : public AudioProcessor {
public:
  //==============================================================================
  SpleetervstAudioProcessor();

  ~SpleetervstAudioProcessor();

  //==============================================================================
  void prepareToPlay(double sampleRate, int samplesPerBlock) override;
  void releaseResources() override;

#ifndef JucePlugin_PreferredChannelConfigurations
  bool isBusesLayoutSupported(const BusesLayout &layouts) const override;
#endif

  void processBlock(AudioBuffer<float> &, MidiBuffer &) override;

  //==============================================================================
  AudioProcessorEditor *createEditor() override;
  bool hasEditor() const override;

  //==============================================================================
  const String getName() const override;

  bool acceptsMidi() const override;
  bool producesMidi() const override;
  bool isMidiEffect() const override;
  double getTailLengthSeconds() const override;

  //==============================================================================
  int getNumPrograms() override;
  int getCurrentProgram() override;
  void setCurrentProgram(int index) override;
  const String getProgramName(int index) override;
  void changeProgramName(int index, const String &newName) override;

  //==============================================================================
  void getStateInformation(MemoryBlock &destData) override;
  void setStateInformation(const void *data, int sizeInBytes) override;

private:
  //==============================================================================
  std::shared_ptr<spleeter::Filter> m_filter;
  std::shared_ptr<rtff::AudioBuffer> m_buffer;
  AudioParameterFloat* m_vocals_volume;
  AudioParameterFloat* m_bass_volume;
  AudioParameterFloat* m_drums_volume;
  AudioParameterFloat* m_other_volume;
  
  std::vector<LagrangeInterpolator> m_in_interpolator;
  std::vector<LagrangeInterpolator> m_out_interpolator;
  double m_interpolation_ratio;
  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(SpleetervstAudioProcessor)
};
