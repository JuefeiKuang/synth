/*
  ==============================================================================

    SynthSound.h
    Created: 15 Nov 2019 3:04:18pm
    Author:  邝觉非

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class SynthSound : public SynthesiserSound
{
public:
    bool appliesToNote (int midiNoteNumber) override
    {
        return true;
    }
    bool appliesToChannel (int midiChannel) override
       {
           return true;
       }
};
