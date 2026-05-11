#ifndef __audioeffect__
#define __audioeffect__
#include "aeffect.h"
class AudioEffect {
public:
    AudioEffect(audioMasterCallback audioMaster, VstInt32 numP, VstInt32 numParams) {
        memset(&aeffect, 0, sizeof(aeffect)); aeffect.magic = 0x56737450; aeffect.numPrograms = numP; aeffect.numParams = numParams;
    }
    virtual ~AudioEffect() {}
    virtual void setParameter(VstInt32 index, float value) {}
    virtual float getParameter(VstInt32 index) { return 0; }
    virtual void setProgram(VstInt32 program) {}
    virtual void setProgramName(char* name) {}
    virtual void getProgramName(char* name) {}
    virtual void getParameterLabel(VstInt32 index, char* label) {}
    virtual void getParameterDisplay(VstInt32 index, char* text) {}
    virtual void getParameterName(VstInt32 index, char* text) {}
    virtual void setSampleRate(float rate) { sampleRate = rate; }
    virtual void setBlockSize(VstInt32 blockSize) {}
    virtual void resume() {}
    virtual void suspend() {}
    virtual VstInt32 getVendorVersion() { return 1000; }
    virtual VstPlugCategory getPlugCategory() { return kPlugCategEffect; }
    virtual bool getProgramNameIndexed(VstInt32 category, VstInt32 index, char* text) { return false; }
    AEffect* getAeffect() { return &aeffect; }
protected:
    AEffect aeffect; float sampleRate; VstInt32 curProgram;
};
class AudioEffectX : public AudioEffect {
public:
    AudioEffectX(audioMasterCallback audioMaster, VstInt32 numP, VstInt32 numParams) : AudioEffect(audioMaster, numP, numParams) {}
    void setSampleRate(float rate) { AudioEffect::setSampleRate(rate); }
};
#endif
