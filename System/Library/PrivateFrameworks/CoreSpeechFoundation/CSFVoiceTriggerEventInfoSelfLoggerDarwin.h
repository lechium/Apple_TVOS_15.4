//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSFCircularEventsCacheBuffer, NSObject;
@protocol OS_dispatch_queue;

@interface CSFVoiceTriggerEventInfoSelfLoggerDarwin
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CSFCircularEventsCacheBuffer *_firstPassEvents;	// 16 = 0x10
    CSFCircularEventsCacheBuffer *_rejectEvents;	// 24 = 0x18
    CSFCircularEventsCacheBuffer *_cancelledEvents;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001ed52
@property(retain, nonatomic) CSFCircularEventsCacheBuffer *cancelledEvents; // @synthesize cancelledEvents=_cancelledEvents;
@property(retain, nonatomic) CSFCircularEventsCacheBuffer *rejectEvents; // @synthesize rejectEvents=_rejectEvents;
@property(retain, nonatomic) CSFCircularEventsCacheBuffer *firstPassEvents; // @synthesize firstPassEvents=_firstPassEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)logTwoShotDetectedWithMHUUID:(id)arg1;	// IMP=0x000000000001ecb8
- (void)logTwoShotStartEventWithPromptType:(unsigned int)arg1 withMHUUID:(id)arg2;	// IMP=0x000000000001ecb2
- (void)logTwoShotEndEventWithSuppresedAlert:(_Bool)arg1 withTimedOut:(_Bool)arg2 withMHUUID:(id)arg3;	// IMP=0x000000000001ecac
- (void)logCancelledEventWithMHUUID:(id)arg1;	// IMP=0x000000000001eba0
- (void)logRejectEventWithVTEI:(id)arg1 withMHUUID:(id)arg2 withSecondPassResult:(unsigned long long)arg3;	// IMP=0x000000000001e9ca
- (void)logTriggerEventWithVTEI:(id)arg1 withMHUUID:(id)arg2;	// IMP=0x000000000001e9c4
- (void)logStartEventWithFirstPassStartedInfo:(id)arg1 withMHUUID:(id)arg2;	// IMP=0x000000000001e847
- (void)fetchAndClearCachedVoiceTriggerEventsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e5cb
- (id)init;	// IMP=0x000000000001e4a6

@end
