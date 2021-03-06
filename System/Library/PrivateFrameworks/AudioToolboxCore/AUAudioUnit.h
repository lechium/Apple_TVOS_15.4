//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AUAudioUnitBusArray, AUAudioUnitPreset, AUParameterTree, NSArray, NSDictionary, NSMutableArray, NSString, UIViewController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AUAudioUnit : NSObject
{
    struct OpaqueAudioComponent *_component;	// 8 = 0x8
    NSString *_componentName;	// 16 = 0x10
    unsigned int _componentVersion;	// 24 = 0x18
    UIViewController *_cachedViewController;	// 32 = 0x20
    unsigned int _maximumFramesToRender;	// 40 = 0x28
    long long _MIDIOutputBufferSizeHint;	// 48 = 0x30
    struct RealtimeState _realtimeState;	// 64 = 0x40
    AUParameterTree *_parameterTree;	// 336 = 0x150
    NSMutableArray *_userPresets;	// 344 = 0x158
    _Bool _isLoadedInProcess;	// 352 = 0x160
    NSObject<OS_dispatch_queue> *_presetMonitoringQueue;	// 360 = 0x168
    NSObject<OS_dispatch_source> *_presetFolderWatcher;	// 368 = 0x170
    CDUnknownBlockType _MIDIOutputEventBlock;	// 376 = 0x178
    CDUnknownBlockType _MIDIOutputEventListBlock;	// 384 = 0x180
    CDUnknownBlockType _MIDIOutputEventHostBlock;	// 392 = 0x188
    CDUnknownBlockType _MIDIOutputEventListHostBlock;	// 400 = 0x190
    _Bool _shouldUseMIDI2;	// 408 = 0x198
    _Bool _renderResourcesAllocated;	// 409 = 0x199
    _Bool _allParameterValues;	// 410 = 0x19a
    _Bool _supportsUserPresets;	// 411 = 0x19b
    _Bool _shouldBypassEffect;	// 412 = 0x19c
    _Bool _canProcessInPlace;	// 413 = 0x19d
    _Bool _renderingOffline;	// 414 = 0x19e
    _Bool _supportsMPE;	// 415 = 0x19f
    _Bool _requestViewControllerSynchronously;	// 416 = 0x1a0
    int _AudioUnitMIDIProtocol;	// 420 = 0x1a4
    int _hostMIDIProtocol;	// 424 = 0x1a8
    NSString *_audioUnitShortName;	// 432 = 0x1b0
    long long _virtualMIDICableCount;	// 440 = 0x1b8
    NSArray *_factoryPresets;	// 448 = 0x1c0
    AUAudioUnitPreset *_currentPreset;	// 456 = 0x1c8
    double _latency;	// 464 = 0x1d0
    double _tailTime;	// 472 = 0x1d8
    long long _renderQuality;	// 480 = 0x1e0
    CDUnknownBlockType _musicalContextBlock;	// 488 = 0x1e8
    CDUnknownBlockType _transportStateBlock;	// 496 = 0x1f0
    NSString *_contextName;	// 504 = 0x1f8
    NSArray *_channelMap;	// 512 = 0x200
    CDUnknownBlockType _profileChangedBlock;	// 520 = 0x208
    struct AudioComponentDescription _componentDescription;	// 528 = 0x210
}

+ (id)keyPathsForValuesAffectingAllParameterValues;	// IMP=0x00000000000d2edc
+ (id)auAudioUnitForAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;	// IMP=0x00000000000d2df0
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d2d41
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 connectionProvider:(function_d7e73f38)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d2a9a
+ (id)_monitorUserPresets:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000002e80
+ (void)_loadUserPresets:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002bf2
+ (id)_presetStateFor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002a26
+ (_Bool)_deleteUserPreset:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002886
+ (_Bool)_saveUserPreset:(id)arg1 state:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002486
+ (id)__userPresetPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000021c0
+ (void)__sanitizePresetNumber:(id)arg1;	// IMP=0x0000000000002128
+ (id)__sanitizeFileName:(id)arg1;	// IMP=0x0000000000001eaf
+ (id)__presetFromPath:(id)arg1;	// IMP=0x0000000000001bd8
+ (void)registerSubclass:(Class)arg1 asComponentDescription:(struct AudioComponentDescription)arg2 name:(id)arg3 version:(unsigned int)arg4;	// IMP=0x00000000000d5328
- (id).cxx_construct;	// IMP=0x00000000000c9e13
- (void).cxx_destruct;	// IMP=0x00000000000c9cc6
@property(nonatomic) _Bool requestViewControllerSynchronously; // @synthesize requestViewControllerSynchronously=_requestViewControllerSynchronously;
@property(copy, nonatomic) CDUnknownBlockType profileChangedBlock; // @synthesize profileChangedBlock=_profileChangedBlock;
@property(copy, nonatomic) NSArray *channelMap; // @synthesize channelMap=_channelMap;
@property(readonly, nonatomic) _Bool supportsMPE; // @synthesize supportsMPE=_supportsMPE;
@property(copy, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;
@property(copy, nonatomic) CDUnknownBlockType transportStateBlock; // @synthesize transportStateBlock=_transportStateBlock;
@property(copy, nonatomic) CDUnknownBlockType musicalContextBlock; // @synthesize musicalContextBlock=_musicalContextBlock;
@property(nonatomic, getter=isRenderingOffline) _Bool renderingOffline; // @synthesize renderingOffline=_renderingOffline;
@property(readonly, nonatomic) _Bool canProcessInPlace; // @synthesize canProcessInPlace=_canProcessInPlace;
@property(nonatomic) _Bool shouldBypassEffect; // @synthesize shouldBypassEffect=_shouldBypassEffect;
@property(nonatomic) long long renderQuality; // @synthesize renderQuality=_renderQuality;
@property(readonly, nonatomic) double tailTime; // @synthesize tailTime=_tailTime;
@property(readonly, nonatomic) double latency; // @synthesize latency=_latency;
@property(retain, nonatomic) AUAudioUnitPreset *currentPreset; // @synthesize currentPreset=_currentPreset;
@property(readonly, nonatomic) _Bool supportsUserPresets; // @synthesize supportsUserPresets=_supportsUserPresets;
@property(readonly, copy, nonatomic) NSArray *factoryPresets; // @synthesize factoryPresets=_factoryPresets;
@property(nonatomic) int hostMIDIProtocol; // @synthesize hostMIDIProtocol=_hostMIDIProtocol;
@property(readonly, nonatomic) int AudioUnitMIDIProtocol; // @synthesize AudioUnitMIDIProtocol=_AudioUnitMIDIProtocol;
@property(readonly, nonatomic) long long virtualMIDICableCount; // @synthesize virtualMIDICableCount=_virtualMIDICableCount;
@property(readonly, nonatomic) _Bool allParameterValues; // @synthesize allParameterValues=_allParameterValues;
@property(readonly, nonatomic) _Bool renderResourcesAllocated; // @synthesize renderResourcesAllocated=_renderResourcesAllocated;
@property(readonly, copy, nonatomic) NSString *audioUnitShortName; // @synthesize audioUnitShortName=_audioUnitShortName;
@property(readonly, nonatomic) struct AudioComponentDescription componentDescription; // @synthesize componentDescription=_componentDescription;
- (_Bool)isSpeechSynthesisProvider;	// IMP=0x00000000000c9a3a
- (int)remoteProcessIdentifier;	// IMP=0x00000000000c9a32
@property(readonly, nonatomic) _Bool isLoadedInProcess;
- (id)osWorkgroup;	// IMP=0x00000000000c9a1e
@property(readonly, copy, nonatomic) NSArray *userPresets;
- (void)startUserPresetFolderMonitoring;	// IMP=0x00000000000c9714
- (_Bool)deleteUserPreset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c962f
- (id)presetStateFor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c9555
- (_Bool)saveUserPreset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c942d
- (void)tearDownExtension;	// IMP=0x00000000000c9427
- (_Bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x00000000000c93cc
- (_Bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x00000000000c9371
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;	// IMP=0x00000000000c9281
- (void)selectViewConfiguration:(id)arg1;	// IMP=0x00000000000c927b
- (id)supportedViewConfigurations:(id)arg1;	// IMP=0x00000000000c9252
- (void)_setValue:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c9240
- (id)_valueForProperty:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c921a
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000c9214
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000c920c
@property(nonatomic) long long MIDIOutputBufferSizeHint;
@property(nonatomic) unsigned int maximumFramesToRender;
@property(copy, nonatomic) CDUnknownBlockType MIDIOutputEventListBlock;
@property(copy, nonatomic) CDUnknownBlockType MIDIOutputEventBlock;
- (void)setupMIDIConversion;	// IMP=0x00000000000c8a31
@property(readonly, nonatomic) _Bool providesUserInterface;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c89d2
- (void)setCachedViewController:(id)arg1;	// IMP=0x00000000000c8987
- (id)cachedViewController;	// IMP=0x00000000000c8979
@property(copy, nonatomic) NSDictionary *fullStateForDocument;
@property(copy, nonatomic) NSDictionary *fullState;
@property(readonly, nonatomic) AUAudioUnitBusArray *outputBusses;
@property(readonly, nonatomic) AUAudioUnitBusArray *inputBusses;
@property(readonly, copy, nonatomic) NSArray *channelCapabilities;
- (void)flushEventSchedule;	// IMP=0x00000000000c82fa
- (void)reset;	// IMP=0x00000000000c82e8
- (id)parametersForOverviewWithCount:(long long)arg1;	// IMP=0x00000000000c82cf
@property(retain, nonatomic) AUParameterTree *parameterTree;
- (void)internalDeallocateRenderResources;	// IMP=0x00000000000c8034
- (void)deallocateRenderResources;	// IMP=0x00000000000c8010
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;	// IMP=0x00000000000c7d40
- (void)removeRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;	// IMP=0x00000000000c7cd3
- (void)addRenderObserver:(CDUnknownFunctionPointerType)arg1 userData:(void *)arg2;	// IMP=0x00000000000c7c5e
- (void)removeRenderObserver:(long long)arg1;	// IMP=0x00000000000c7bf1
- (long long)tokenByAddingRenderObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7b68
@property(readonly, copy, nonatomic) NSArray *MIDIOutputNames;
@property(readonly, nonatomic) CDUnknownBlockType scheduleMIDIEventListBlock;
@property(readonly, nonatomic) CDUnknownBlockType scheduleMIDIEventBlock;
@property(readonly, nonatomic, getter=isMusicDeviceOrEffect) _Bool musicDeviceOrEffect;
- (float)getV2Parameter:(unsigned long long)arg1 sequenceNumber:(unsigned int)arg2;	// IMP=0x00000000000c75ef
- (void)setV2Parameter:(unsigned long long)arg1 value:(float)arg2 bufferOffset:(unsigned int)arg3 sequenceNumber:(unsigned int)arg4;	// IMP=0x00000000000c74b9
@property(readonly, nonatomic) CDUnknownBlockType scheduleParameterBlock;
@property(readonly, nonatomic) CDUnknownBlockType internalRenderBlock;
- (void)deliverV2Parameters:(const union AURenderEvent *)arg1;	// IMP=0x00000000000c737a
@property(readonly, nonatomic) CDUnknownBlockType renderBlock;
- (void *)auv2GetParameterSynchronizer;	// IMP=0x00000000000c7212
- (void *)scheduledParameterRefresher;	// IMP=0x00000000000c7147
- (void *)eventSchedule;	// IMP=0x00000000000c713d
@property(readonly, nonatomic) unsigned int componentVersion;
@property(readonly, copy, nonatomic) NSString *manufacturerName;
@property(readonly, copy, nonatomic) NSString *audioUnitName;
@property(readonly, copy, nonatomic) NSString *componentName;
@property(readonly, nonatomic) struct OpaqueAudioComponent *component;
- (struct OpaqueAudioComponentInstance *)audioUnit;	// IMP=0x00000000000c6f41
- (void)invalidateAudioUnit;	// IMP=0x00000000000c6f0f
- (void)dealloc;	// IMP=0x00000000000c6dc9
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 error:(id *)arg2;	// IMP=0x00000000000c6db2
- (void)setLoadedOutOfProcess;	// IMP=0x00000000000c6da5
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000c67a4
- (id)init;	// IMP=0x00000000000c6702
@property(readonly, nonatomic) CDUnknownBlockType renderContextObserver;
- (void)setRenderResourcesAllocated:(_Bool)arg1;	// IMP=0x00000000000d52fb
- (_Bool)shouldChangeToFormat:(id)arg1 forBus:(id)arg2;	// IMP=0x00000000000d52eb

@end

