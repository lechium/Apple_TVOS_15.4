//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSPreMyriadVoiceTriggerMetaData, NSDictionary, NSMutableDictionary, NSString;
@protocol CSSecondPassProgressProviding, CSVoiceTriggerDelegate, OS_dispatch_queue;

@interface CSPreMyriadCoordinator : NSObject
{
    id <CSVoiceTriggerDelegate> _delegate;	// 8 = 0x8
    id <CSSecondPassProgressProviding> _builtInSeconPassProgressProvider;	// 16 = 0x10
    id <CSSecondPassProgressProviding> _remoraSecondPassProgressProvider;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_targetQueue;	// 40 = 0x28
    NSDictionary *_pendingRemoraVoiceTriggerResult;	// 48 = 0x30
    NSString *_pendingRemoraVoiceTriggerDeviceId;	// 56 = 0x38
    CDUnknownBlockType _pendingRemoraVoiceTriggerCompletionBlk;	// 64 = 0x40
    unsigned long long _pendingRemoraVoiceTriggerDetectedTime;	// 72 = 0x48
    NSDictionary *_pendingBuiltInVoiceTriggerResult;	// 80 = 0x50
    CDUnknownBlockType _pendingBuiltInVoiceTriggerCompletionBlk;	// 88 = 0x58
    unsigned long long _pendingBuiltInVoiceTriggerDetectedTime;	// 96 = 0x60
    CSPreMyriadVoiceTriggerMetaData *_builtInVoiceTriggerMetaData;	// 104 = 0x68
    NSMutableDictionary *_accessoryVoiceTriggerMetaDataByDeviceId;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000000156f0
@property(retain, nonatomic) NSMutableDictionary *accessoryVoiceTriggerMetaDataByDeviceId; // @synthesize accessoryVoiceTriggerMetaDataByDeviceId=_accessoryVoiceTriggerMetaDataByDeviceId;
@property(retain, nonatomic) CSPreMyriadVoiceTriggerMetaData *builtInVoiceTriggerMetaData; // @synthesize builtInVoiceTriggerMetaData=_builtInVoiceTriggerMetaData;
@property(nonatomic) unsigned long long pendingBuiltInVoiceTriggerDetectedTime; // @synthesize pendingBuiltInVoiceTriggerDetectedTime=_pendingBuiltInVoiceTriggerDetectedTime;
@property(copy, nonatomic) CDUnknownBlockType pendingBuiltInVoiceTriggerCompletionBlk; // @synthesize pendingBuiltInVoiceTriggerCompletionBlk=_pendingBuiltInVoiceTriggerCompletionBlk;
@property(retain, nonatomic) NSDictionary *pendingBuiltInVoiceTriggerResult; // @synthesize pendingBuiltInVoiceTriggerResult=_pendingBuiltInVoiceTriggerResult;
@property(nonatomic) unsigned long long pendingRemoraVoiceTriggerDetectedTime; // @synthesize pendingRemoraVoiceTriggerDetectedTime=_pendingRemoraVoiceTriggerDetectedTime;
@property(copy, nonatomic) CDUnknownBlockType pendingRemoraVoiceTriggerCompletionBlk; // @synthesize pendingRemoraVoiceTriggerCompletionBlk=_pendingRemoraVoiceTriggerCompletionBlk;
@property(retain, nonatomic) NSString *pendingRemoraVoiceTriggerDeviceId; // @synthesize pendingRemoraVoiceTriggerDeviceId=_pendingRemoraVoiceTriggerDeviceId;
@property(retain, nonatomic) NSDictionary *pendingRemoraVoiceTriggerResult; // @synthesize pendingRemoraVoiceTriggerResult=_pendingRemoraVoiceTriggerResult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSSecondPassProgressProviding> remoraSecondPassProgressProvider; // @synthesize remoraSecondPassProgressProvider=_remoraSecondPassProgressProvider;
@property(nonatomic) __weak id <CSSecondPassProgressProviding> builtInSeconPassProgressProvider; // @synthesize builtInSeconPassProgressProvider=_builtInSeconPassProgressProvider;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)secondPassDidStartForClient:(unsigned long long)arg1 deviceId:(id)arg2 withFirstPassEstimate:(double)arg3;	// IMP=0x00100000000152ae
- (void)secondPassDidStopForClient:(unsigned long long)arg1 deviceId:(id)arg2;	// IMP=0x00100000000150b6
- (void)voiceTriggerDidRejected:(id)arg1 deviceId:(id)arg2;	// IMP=0x0010000000014fee
- (void)raiseToSpeakDetected:(id)arg1;	// IMP=0x0010000000014f94
- (void)voiceTriggerGotSuperVector:(id)arg1;	// IMP=0x0010000000014f3a
- (void)keywordDetectorDidDetectKeyword;	// IMP=0x0010000000014f09
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;	// IMP=0x0010000000014eaf
- (void)voiceTriggerDidDetectNearMiss:(id)arg1 deviceId:(id)arg2;	// IMP=0x0010000000014de7
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;	// IMP=0x0010000000014ca1
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014bfa
- (_Bool)_isRemoraSecondPassRunning;	// IMP=0x0010000000014af7
- (void)_getHighestRemoraFirstPassGoodnessScore:(CDUnknownBlockType)arg1;	// IMP=0x00100000000148c0
- (_Bool)handlePendingBuiltInVoiceTriggerIfNeeded;	// IMP=0x00100000000145ca
- (void)_clearPendingBuiltInVoiceTrigger;	// IMP=0x00100000000144cd
- (_Bool)handlePendingRemoraVoiceTriggerIfNeeded;	// IMP=0x001000000001407f
- (void)_clearPendingRemoraVoiceTrigger;	// IMP=0x0010000000013f54
- (_Bool)isRemoraVoiceTriggerEvent:(id)arg1;	// IMP=0x0010000000013e46
- (_Bool)isBultInVoiceTriggerEvent:(id)arg1;	// IMP=0x0010000000013d38
- (id)initWithTargetQueue:(id)arg1;	// IMP=0x0010000000013c75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
