//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, SignpostCAInstrumentationProcessor;
@protocol OS_dispatch_queue;

@interface SignpostIntervalBuilder : NSObject
{
    _Bool _buildAnimationCompositeIntervalTimelines;	// 8 = 0x8
    _Bool _compositeIntervalIsInFlight;	// 9 = 0x9
    NSMutableDictionary *_systemwideDictionary;	// 16 = 0x10
    NSMutableDictionary *_processwideDictionary;	// 24 = 0x18
    NSMutableDictionary *_threadwideDictionary;	// 32 = 0x20
    NSMapTable *_outstandingAnimationState;	// 40 = 0x28
    unsigned long long _totalCompositeIntervalCount;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_syncQueue;	// 56 = 0x38
    unsigned long long _previousMCT;	// 64 = 0x40
    SignpostCAInstrumentationProcessor *_caInstrumentationProcessor;	// 72 = 0x48
}

+ (id)_framerateCalculationAllowlist;	// IMP=0x000000000000e4ea
+ (_Bool)_filterPassesRequiredSCForFramerate:(id)arg1;	// IMP=0x000000000000e485
- (void).cxx_destruct;	// IMP=0x000000000000fb1f
@property(readonly, nonatomic) SignpostCAInstrumentationProcessor *caInstrumentationProcessor; // @synthesize caInstrumentationProcessor=_caInstrumentationProcessor;
@property(nonatomic) unsigned long long previousMCT; // @synthesize previousMCT=_previousMCT;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) _Bool compositeIntervalIsInFlight; // @synthesize compositeIntervalIsInFlight=_compositeIntervalIsInFlight;
@property(nonatomic) unsigned long long totalCompositeIntervalCount; // @synthesize totalCompositeIntervalCount=_totalCompositeIntervalCount;
@property(retain, nonatomic) NSMapTable *outstandingAnimationState; // @synthesize outstandingAnimationState=_outstandingAnimationState;
@property(readonly, nonatomic) NSMutableDictionary *threadwideDictionary; // @synthesize threadwideDictionary=_threadwideDictionary;
@property(readonly, nonatomic) NSMutableDictionary *processwideDictionary; // @synthesize processwideDictionary=_processwideDictionary;
@property(readonly, nonatomic) NSMutableDictionary *systemwideDictionary; // @synthesize systemwideDictionary=_systemwideDictionary;
@property(nonatomic) _Bool buildAnimationCompositeIntervalTimelines; // @synthesize buildAnimationCompositeIntervalTimelines=_buildAnimationCompositeIntervalTimelines;
- (id)doneProcessing;	// IMP=0x000000000000f42e
- (id)processEndEvent:(id)arg1 isAnimation:(_Bool *)arg2;	// IMP=0x000000000000f183
- (id)_animationWithBegin:(id)arg1 endEvent:(id)arg2;	// IMP=0x000000000000f01a
- (void)_cleanupStateForBeginEvent:(id)arg1;	// IMP=0x000000000000ef42
- (_Bool)_handleCommonSpecialIntervals:(id)arg1;	// IMP=0x000000000000eec2
- (_Bool)_handleMacOsSpecialIntervals:(id)arg1;	// IMP=0x000000000000ee40
- (void)_processCompositeInterval:(id)arg1;	// IMP=0x000000000000ebb3
- (void)processEmittedEvent:(id)arg1;	// IMP=0x000000000000eb41
- (_Bool)processBeginEvent:(id)arg1;	// IMP=0x000000000000e94a
- (void)_startTrackingAnimationWithBeginEvent:(id)arg1;	// IMP=0x000000000000e82b
- (void)_initializeMapsIfNecessary;	// IMP=0x000000000000e7a7
@property(readonly, nonatomic) _Bool hasOutstandingAnimations;
- (_Bool)isMetadataSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x000000000000e6eb
- (_Bool)signpostIsAnimationMetadata:(id)arg1;	// IMP=0x000000000000e68e
- (_Bool)signpostIsCompositeLoop:(id)arg1;	// IMP=0x000000000000e5a8
- (_Bool)isCompositeLoopSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x000000000000e542
- (_Bool)_trackBegin:(id)arg1;	// IMP=0x000000000000de92
- (id)matchingEventForEvent:(id)arg1 removeIfFound:(_Bool)arg2;	// IMP=0x000000000000dc72
- (id)_matchingEventForEvent:(id)arg1 removeIfFound:(_Bool)arg2;	// IMP=0x000000000000d81f
- (_Bool)timestampIndicatesDeviceReboot:(unsigned long long)arg1;	// IMP=0x000000000000d788
- (void)dropAccumulatedState;	// IMP=0x000000000000c662
- (id)init;	// IMP=0x000000000000c5f6

@end
