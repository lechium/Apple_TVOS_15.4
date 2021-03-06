//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKModifySubscriptionsOperationCallbacks-Protocol.h>

@class CKModifySubscriptionsOperationInfo, NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKModifySubscriptionsOperationCallbacks;

@interface CKModifySubscriptionsOperation <CKModifySubscriptionsOperationCallbacks>
{
    CDUnknownBlockType _perSubscriptionSaveBlock;	// 8 = 0x8
    CDUnknownBlockType _perSubscriptionDeleteBlock;	// 16 = 0x10
    CDUnknownBlockType _modifySubscriptionsCompletionBlock;	// 24 = 0x18
    NSArray *_subscriptionsToSave;	// 32 = 0x20
    NSArray *_subscriptionIDsToDelete;	// 40 = 0x28
    NSMutableArray *_savedSubscriptions;	// 48 = 0x30
    NSMutableArray *_deletedSubscriptionIDs;	// 56 = 0x38
    NSMutableDictionary *_subscriptionsBySubscriptionIDs;	// 64 = 0x40
    NSMutableDictionary *_subscriptionErrors;	// 72 = 0x48
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x0000000000113a11
- (void).cxx_destruct;	// IMP=0x0000000000113b29
@property(copy, nonatomic) NSArray *subscriptionIDsToDelete; // @synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete;
@property(copy, nonatomic) NSArray *subscriptionsToSave; // @synthesize subscriptionsToSave=_subscriptionsToSave;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x0000000000113429
- (void)handleSubscriptionDeleteForSubscriptionID:(id)arg1 error:(id)arg2;	// IMP=0x00000000001130cc
- (void)handleSubscriptionSaveForSubscriptionID:(id)arg1 error:(id)arg2;	// IMP=0x0000000000112cf2
- (void)performCKOperation;	// IMP=0x0000000000112923
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000001121e6
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x0000000000112124
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x0000000000112059
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x0000000000111f96
- (id)activityCreate;	// IMP=0x0000000000111f6d
@property(copy, nonatomic) CDUnknownBlockType modifySubscriptionsCompletionBlock; // @synthesize modifySubscriptionsCompletionBlock=_modifySubscriptionsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perSubscriptionDeleteBlock; // @synthesize perSubscriptionDeleteBlock=_perSubscriptionDeleteBlock;
@property(copy, nonatomic) CDUnknownBlockType perSubscriptionSaveBlock; // @synthesize perSubscriptionSaveBlock=_perSubscriptionSaveBlock;
- (id)initWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2;	// IMP=0x0000000000111441
- (id)init;	// IMP=0x0000000000111382

// Remaining properties
@property(readonly, nonatomic) id <CKModifySubscriptionsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKModifySubscriptionsOperationInfo *operationInfo; // @dynamic operationInfo;

@end

