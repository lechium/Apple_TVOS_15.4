//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSDate, NSHashTable, NSString;
@protocol HMDXPCActivityInterfacing, HMMLogEventSubmitting;

@interface HMDLogEventDailyScheduler : HMFObject <HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    CDUnknownBlockType _dateFactory;	// 16 = 0x10
    NSDate *_lastRunTime;	// 24 = 0x18
    NSString *_xpcActivityIdentifier;	// 32 = 0x20
    NSHashTable *_mutableLogEventDailyProviders;	// 40 = 0x28
    id <HMDXPCActivityInterfacing> _xpcActivityInterface;	// 48 = 0x30
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x000000000021fffa
+ (id)sharedInstance;	// IMP=0x000000000021ffca
- (void).cxx_destruct;	// IMP=0x000000000021fcce
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(retain, nonatomic) id <HMDXPCActivityInterfacing> xpcActivityInterface; // @synthesize xpcActivityInterface=_xpcActivityInterface;
@property(retain, nonatomic) NSHashTable *mutableLogEventDailyProviders; // @synthesize mutableLogEventDailyProviders=_mutableLogEventDailyProviders;
@property(readonly, nonatomic) NSString *xpcActivityIdentifier; // @synthesize xpcActivityIdentifier=_xpcActivityIdentifier;
@property(retain, nonatomic) NSDate *lastRunTime; // @synthesize lastRunTime=_lastRunTime;
@property(copy) CDUnknownBlockType dateFactory; // @synthesize dateFactory=_dateFactory;
- (id)statusSummary;	// IMP=0x000000000021fb02
- (void)forceRunRegisteredBlocks;	// IMP=0x000000000021faf0
- (id)logEventDailyProviders;	// IMP=0x000000000021fa52
- (void)registerLogEventDailyProvider:(id)arg1;	// IMP=0x000000000021f9dc
- (void)_runRegisteredBlocks;	// IMP=0x000000000021f6dd
- (void)_runActivity:(id)arg1;	// IMP=0x000000000021f34a
- (void)_handleCheckInForActivity:(id)arg1;	// IMP=0x000000000021f0c5
- (void)_registerActivity;	// IMP=0x000000000021eee8
- (id)_criteriaForActivity;	// IMP=0x000000000021ee49
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 xpcActivityInterface:(id)arg3 dateFactory:(CDUnknownBlockType)arg4;	// IMP=0x000000000021ecb0
- (id)init;	// IMP=0x000000000021ec2d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
