//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchUserQuotaOperationCallbacks-Protocol.h>

@protocol CKFetchUserQuotaOperationCallbacks;

@interface CKFetchUserQuotaOperation <CKFetchUserQuotaOperationCallbacks>
{
    CDUnknownBlockType _fetchUserQuotaCompletionBlock;	// 8 = 0x8
    unsigned long long _quotaAvailable;	// 16 = 0x10
}

+ (SEL)daemonCallbackCompletionSelector;	// IMP=0x0000000000176f14
+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x0000000000176e82
- (void).cxx_destruct;	// IMP=0x0000000000176f43
@property(nonatomic) unsigned long long quotaAvailable; // @synthesize quotaAvailable=_quotaAvailable;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x0000000000176a4e
- (void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)arg1 metrics:(id)arg2 error:(id)arg3;	// IMP=0x00000000001768bc
- (void)performCKOperation;	// IMP=0x00000000001764ed
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x0000000000176489
- (id)activityCreate;	// IMP=0x0000000000176460
@property(copy, nonatomic) CDUnknownBlockType fetchUserQuotaCompletionBlock; // @synthesize fetchUserQuotaCompletionBlock=_fetchUserQuotaCompletionBlock;
- (id)init;	// IMP=0x0000000000176097

// Remaining properties
@property(readonly, nonatomic) id <CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

