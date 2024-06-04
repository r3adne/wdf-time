#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
WdfEditor::WdfEditor (WdfProcessor& processor)
    : AudioProcessorEditor (&processor), p (processor)
{
    setSize (400, 300);
}

WdfEditor::~WdfEditor()
{

}

//==============================================================================
void WdfEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void WdfEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
