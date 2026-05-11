#ifndef __aeffect__
#define __aeffect__
#include <stdint.h>
#include <string.h>
#define VST_CALLBACK
typedef intptr_t VstIntPtr;
typedef int32_t VstInt32;
enum VstPlugCategory { kPlugCategUnknown = 0, kPlugCategEffect };
struct AEffect;
typedef VstIntPtr (VST_CALLBACK *audioMasterCallback) (struct AEffect* effect, VstInt32 opcode, VstInt32 index, VstIntPtr value, void* ptr, float opt);
typedef VstIntPtr (VST_CALLBACK *AEffectDispatcherProc) (struct AEffect* effect, VstInt32 opcode, VstInt32 index, VstIntPtr value, void* ptr, float opt);
typedef void (VST_CALLBACK *AEffectProcessProc) (struct AEffect* effect, float** inputs, float** outputs, VstInt32 sampleFrames);
typedef void (VST_CALLBACK *AEffectSetParameterProc) (struct AEffect* effect, VstInt32 index, float parameter);
typedef float (VST_CALLBACK *AEffectGetParameterProc) (struct AEffect* effect, VstInt32 index);
struct AEffect { VstInt32 magic; AEffectDispatcherProc dispatcher; AEffectProcessProc process; AEffectSetParameterProc setParameter; AEffectGetParameterProc getParameter; VstInt32 numPrograms, numParams, numInputs, numOutputs, flags; VstIntPtr resvd1, resvd2; VstInt32 initialDelay, realQualities, offQualities; float ioRatio; void* object, *user; VstInt32 uniqueID, version; AEffectProcessProc processReplacing; char future[56]; };
#endif
