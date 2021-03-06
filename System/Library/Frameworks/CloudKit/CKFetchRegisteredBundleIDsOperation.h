//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchRegisteredBundleIDsOperationCallbacks-Protocol.h>

@class NSArray;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKFetchRegisteredBundleIDsOperation <CKFetchRegisteredBundleIDsOperationCallbacks>
{
    CDUnknownBlockType _fetchRegisteredBundleIDsCompletionBlock;	// 8 = 0x8
    NSArray *_bundleIDs;	// 16 = 0x10
}

+ (SEL)daemonCallbackCompletionSelector;	// IMP=0x00000000001400b3
+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x0000000000140021
- (void).cxx_destruct;	// IMP=0x00000000001400e2
@property(copy, nonatomic) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000013fbd3
- (void)handleOperationDidCompleteWithBundleIDs:(id)arg1 metrics:(id)arg2 error:(id)arg3;	// IMP=0x000000000013fa31
- (void)performCKOperation;	// IMP=0x000000000013f662
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x000000000013f5fe
- (id)activityCreate;	// IMP=0x000000000013f5d5
@property(copy, nonatomic) CDUnknownBlockType fetchRegisteredBundleIDsCompletionBlock; // @synthesize fetchRegisteredBundleIDsCompletionBlock=_fetchRegisteredBundleIDsCompletionBlock;

// Remaining properties
@property(readonly, nonatomic) id <CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;

@end

