#pragma once

#include "WdfProcessor.h"

//==============================================================================
class WdfEditor final : public juce::AudioProcessorEditor
{
public:
    explicit WdfEditor (WdfProcessor&);
    ~WdfEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the WdfProcessor object that created it.
    WdfProcessor& p;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (WdfEditor)
};
