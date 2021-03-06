//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchNotificationChangesOperationCallbacks-Protocol.h>

@class CKFetchNotificationChangesOperationInfo, CKServerChangeToken;
@protocol CKFetchNotificationChangesOperationCallbacks;

@interface CKFetchNotificationChangesOperation <CKFetchNotificationChangesOperationCallbacks>
{
    _Bool _moreComing;	// 8 = 0x8
    CDUnknownBlockType _notificationChangedBlock;	// 16 = 0x10
    CDUnknownBlockType _fetchNotificationChangesCompletionBlock;	// 24 = 0x18
    CKServerChangeToken *_previousServerChangeToken;	// 32 = 0x20
    unsigned long long _resultsLimit;	// 40 = 0x28
    CKServerChangeToken *_resultServerChangeToken;	// 48 = 0x30
}

+ (SEL)daemonCallbackCompletionSelector;	// IMP=0x00000000000de31e
+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x00000000000de28c
- (void).cxx_destruct;	// IMP=0x00000000000de3b4
@property(retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // @synthesize resultServerChangeToken=_resultServerChangeToken;
@property(nonatomic) _Bool moreComing; // @synthesize moreComing=_moreComing;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (id)activityCreate;	// IMP=0x00000000000de263
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000dde09
- (void)handleOperationDidCompleteWithServerChangeToken:(id)arg1 moreComing:(_Bool)arg2 metrics:(id)arg3 error:(id)arg4;	// IMP=0x00000000000ddc28
- (void)handleChangedNotification:(id)arg1;	// IMP=0x00000000000dd950
- (void)performCKOperation;	// IMP=0x00000000000dd581
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x00000000000dd4ee
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x00000000000dd431
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x00000000000dd34c
@property(copy, nonatomic) CDUnknownBlockType fetchNotificationChangesCompletionBlock; // @synthesize fetchNotificationChangesCompletionBlock=_fetchNotificationChangesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType notificationChangedBlock; // @synthesize notificationChangedBlock=_notificationChangedBlock;
- (id)initWithPreviousServerChangeToken:(id)arg1;	// IMP=0x00000000000dcbe0
- (id)init;	// IMP=0x00000000000dcbb1

// Remaining properties
@property(readonly, nonatomic) id <CKFetchNotificationChangesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchNotificationChangesOperationInfo *operationInfo; // @dynamic operationInfo;

@end

