//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, NSArray, NSDate, NSHashTable, NSString, OSDAnalyzer;
@protocol OS_dispatch_queue;

@interface CSAttSiriOSDNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _didAddAudio;	// 9 = 0x9
    _Bool _didTimestampFirstAudioPacket;	// 10 = 0xa
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAsset *_prefetchedAsset;	// 48 = 0x30
    CSAsset *_currentAsset;	// 56 = 0x38
    NSHashTable *_receivers;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_apQueue;	// 72 = 0x48
    unsigned long long _numSamplesProcessed;	// 80 = 0x50
    OSDAnalyzer *_osdAnalyzer;	// 88 = 0x58
    unsigned long long _currentRequestSampleRate;	// 96 = 0x60
    unsigned long long _vtEndInSampleCount;	// 104 = 0x68
    NSString *_configFile;	// 112 = 0x70
    NSDate *_firstAudioPacketTimestamp;	// 120 = 0x78
    double _firstAudioSampleSensorTimestamp;	// 128 = 0x80
    unsigned long long _firstAudioStartSampleCount;	// 136 = 0x88
    double _frameDurationMs;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_targetQueue;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_queue;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_osdQueue;	// 168 = 0xa8
    unsigned long long _countOfConsecutiveBoron;	// 176 = 0xb0
    unsigned long long _lastKnownConsecutiveBoronStartSampleCount;	// 184 = 0xb8
    unsigned long long _numOfConsecutiveBoronActivationThreshold;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x002000000007c4ca
@property(nonatomic) unsigned long long numOfConsecutiveBoronActivationThreshold; // @synthesize numOfConsecutiveBoronActivationThreshold=_numOfConsecutiveBoronActivationThreshold;
@property(nonatomic) unsigned long long lastKnownConsecutiveBoronStartSampleCount; // @synthesize lastKnownConsecutiveBoronStartSampleCount=_lastKnownConsecutiveBoronStartSampleCount;
@property(nonatomic) unsigned long long countOfConsecutiveBoron; // @synthesize countOfConsecutiveBoron=_countOfConsecutiveBoron;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *osdQueue; // @synthesize osdQueue=_osdQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(nonatomic) double frameDurationMs; // @synthesize frameDurationMs=_frameDurationMs;
@property(nonatomic) _Bool didTimestampFirstAudioPacket; // @synthesize didTimestampFirstAudioPacket=_didTimestampFirstAudioPacket;
@property(nonatomic) unsigned long long firstAudioStartSampleCount; // @synthesize firstAudioStartSampleCount=_firstAudioStartSampleCount;
@property(nonatomic) double firstAudioSampleSensorTimestamp; // @synthesize firstAudioSampleSensorTimestamp=_firstAudioSampleSensorTimestamp;
@property(retain, nonatomic) NSDate *firstAudioPacketTimestamp; // @synthesize firstAudioPacketTimestamp=_firstAudioPacketTimestamp;
@property(nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(nonatomic) unsigned long long vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) unsigned long long currentRequestSampleRate; // @synthesize currentRequestSampleRate=_currentRequestSampleRate;
@property(retain, nonatomic) OSDAnalyzer *osdAnalyzer; // @synthesize osdAnalyzer=_osdAnalyzer;
@property(nonatomic) _Bool didAddAudio; // @synthesize didAddAudio=_didAddAudio;
@property(nonatomic) unsigned long long numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue; // @synthesize apQueue=_apQueue;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(readonly, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)osdAnalyzer:(id)arg1 didDetectEndOfSpeechAt:(double)arg2;	// IMP=0x001000000007c0a2
- (void)osdAnalyzer:(id)arg1 didDetectStartOfSpeechAt:(double)arg2;	// IMP=0x001000000007beea
- (void)osdAnalyzer:(id)arg1 didUpdateOSDFeatures:(id)arg2;	// IMP=0x001000000007bca3
- (void)endpointerAssetManagerDidUpdateAsset:(id)arg1;	// IMP=0x001000000007bc9d
- (void)endpointerAssetManagerDidUpdateOSDAsset:(id)arg1;	// IMP=0x001000000007bbf2
- (unsigned long long)fetchLastKnownConsecutiveBoronStartSampleCount;	// IMP=0x001000000007bb49
- (unsigned long long)audioStartSampleCount;	// IMP=0x001000000007ba9d
- (void)resetForNewRequestWithRecordContext:(id)arg1 voiceTriggerInfo:(id)arg2;	// IMP=0x001000000007b5a3
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x001000000007b496
- (void)checkConsecutiveBoronSignalWithAudioChunk:(id)arg1;	// IMP=0x001000000007b23e
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000007a8ca
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000007a8c4
- (void)stop;	// IMP=0x001000000007a6a6
- (void)pause;	// IMP=0x001000000007a6a0
- (void)start;	// IMP=0x001000000007a69a
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000007a5bb
- (void)addReceiver:(id)arg1;	// IMP=0x001000000007a440
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x0010000000079ffb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

