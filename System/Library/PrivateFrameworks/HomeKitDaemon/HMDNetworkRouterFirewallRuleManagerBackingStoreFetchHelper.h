//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKOperationGroup, HMBProcessingOptions, HMFActivity, NAPromise, NSDate, NSString;

@interface HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper : HMFObject <HMFLogging>
{
    NAPromise *_promise;	// 8 = 0x8
    _Bool _finished;	// 16 = 0x10
    HMFActivity *_activity;	// 24 = 0x18
    HMBProcessingOptions *_options;	// 32 = 0x20
    CKOperationGroup *_operationGroup;	// 40 = 0x28
    double _retryIntervalSeconds;	// 48 = 0x30
    unsigned long long _retryCount;	// 56 = 0x38
    NSDate *_operationStartTime;	// 64 = 0x40
}

+ (unsigned long long)maxOperationDurationSeconds;	// IMP=0x0000000000010f28
+ (unsigned long long)maxRetryCount;	// IMP=0x0000000000010f0a
+ (unsigned long long)__integerForPreferenceKey:(id)arg1 defaultValue:(unsigned long long)arg2;	// IMP=0x0000000000010e23
+ (id)logCategory;	// IMP=0x0000000000010df3
- (void).cxx_destruct;	// IMP=0x0000000000010d8f
@property(readonly, nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) NSDate *operationStartTime; // @synthesize operationStartTime=_operationStartTime;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) double retryIntervalSeconds; // @synthesize retryIntervalSeconds=_retryIntervalSeconds;
@property(readonly, nonatomic) CKOperationGroup *operationGroup; // @synthesize operationGroup=_operationGroup;
@property(readonly, nonatomic) HMBProcessingOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000010a8c
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000010a75
- (void)finishWithResult:(id)arg1;	// IMP=0x0000000000010a61
@property(nonatomic) _Bool shouldRetry;
- (void)dealloc;	// IMP=0x00000000000106c3
- (id)initWithActivity:(id)arg1 options:(id)arg2 container:(id)arg3 useAnonymousRequests:(_Bool)arg4 promise:(id)arg5;	// IMP=0x00000000000104af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

