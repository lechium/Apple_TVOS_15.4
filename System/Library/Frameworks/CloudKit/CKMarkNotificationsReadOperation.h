//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKMarkNotificationsReadOperationCallbacks-Protocol.h>

@class CKMarkNotificationsReadOperationInfo, NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKMarkNotificationsReadOperationCallbacks;

@interface CKMarkNotificationsReadOperation <CKMarkNotificationsReadOperationCallbacks>
{
    CDUnknownBlockType _markNotificationsReadCompletionBlock;	// 8 = 0x8
    NSArray *_notificationIDs;	// 16 = 0x10
    NSMutableArray *_notificationIDsMarkedRead;	// 24 = 0x18
    NSMutableDictionary *_errorsByNotificationID;	// 32 = 0x20
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x000000000008d4af
- (void).cxx_destruct;	// IMP=0x000000000008d5ad
@property(retain, nonatomic) NSMutableDictionary *errorsByNotificationID; // @synthesize errorsByNotificationID=_errorsByNotificationID;
@property(retain, nonatomic) NSMutableArray *notificationIDsMarkedRead; // @synthesize notificationIDsMarkedRead=_notificationIDsMarkedRead;
@property(copy, nonatomic) NSArray *notificationIDs; // @synthesize notificationIDs=_notificationIDs;
- (id)activityCreate;	// IMP=0x000000000008d486
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000008cede
- (void)performCKOperation;	// IMP=0x000000000008cb0f
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x000000000008ca8e
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x000000000008ca2a
- (void)handleMarkNotificationReadCompletionForNotificationID:(id)arg1 error:(id)arg2;	// IMP=0x000000000008c95e
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x000000000008c8c3
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x000000000008c82e
@property(copy, nonatomic) CDUnknownBlockType markNotificationsReadCompletionBlock; // @synthesize markNotificationsReadCompletionBlock=_markNotificationsReadCompletionBlock;
- (id)initWithNotificationIDsToMarkRead:(id)arg1;	// IMP=0x000000000008c277
- (id)init;	// IMP=0x000000000008c1f4

// Remaining properties
@property(readonly, nonatomic) id <CKMarkNotificationsReadOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKMarkNotificationsReadOperationInfo *operationInfo; // @dynamic operationInfo;

@end
