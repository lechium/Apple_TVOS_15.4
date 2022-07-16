//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchWhitelistedBundleIDsOperationCallbacks-Protocol.h>

@class NSArray;
@protocol CKFetchWhitelistedBundleIDsOperationCallbacks;

@interface CKFetchWhitelistedBundleIDsOperation <CKFetchWhitelistedBundleIDsOperationCallbacks>
{
    CDUnknownBlockType _fetchWhitelistedBundleIDsCompletionBlock;	// 8 = 0x8
    NSArray *_bundleIDs;	// 16 = 0x10
}

+ (SEL)daemonCallbackCompletionSelector;	// IMP=0x00000000001584ce
+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x000000000015843c
- (void).cxx_destruct;	// IMP=0x00000000001584fd
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x0000000000157fee
- (void)handleOperationDidCompleteWithBundleIDs:(id)arg1 metrics:(id)arg2 error:(id)arg3;	// IMP=0x0000000000157e4c
- (void)performCKOperation;	// IMP=0x0000000000157a7d
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x0000000000157a19
- (id)activityCreate;	// IMP=0x00000000001579f0
@property(copy, nonatomic) CDUnknownBlockType fetchWhitelistedBundleIDsCompletionBlock; // @synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock;

// Remaining properties
@property(readonly, nonatomic) id <CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

