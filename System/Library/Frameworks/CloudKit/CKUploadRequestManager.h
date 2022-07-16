//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKSyncEngine, CKUploadRequestManagerInternals, CKUploadRequestPersistentStore, NSString;

@interface CKUploadRequestManager : NSObject
{
    CKUploadRequestManagerInternals *_internals;	// 8 = 0x8
}

+ (id)activityIdentifierForSchedulingRepairsInContainer:(id)arg1;	// IMP=0x0000000000081fd2
+ (double)retryableErrorMaxRetryCount;	// IMP=0x0000000000081fc4
+ (double)cancelledErrorRetryTime;	// IMP=0x0000000000081fb6
+ (double)retryableErrorRetryTime;	// IMP=0x0000000000081fa8
+ (double)tryAgainLaterRetryTime;	// IMP=0x0000000000081f9a
+ (double)recurringFetchPeriod;	// IMP=0x0000000000081f8c
- (void).cxx_destruct;	// IMP=0x0000000000082988
@property(readonly, nonatomic) CKUploadRequestManagerInternals *internals; // @synthesize internals=_internals;
- (void)setCallback:(CDUnknownBlockType)arg1 forOverridePoint:(long long)arg2;	// IMP=0x0000000000082906
- (void)cancelAllOperations;	// IMP=0x0000000000082886
- (void)scheduleOrInvokeRepairsNow;	// IMP=0x0000000000082849
- (void)fetchServerChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000008278f
- (void)manuallyTriggerUploadRequests;	// IMP=0x00000000000826ee
- (void)unregister;	// IMP=0x000000000008266b
- (void)registerForItemRequests;	// IMP=0x00000000000825ee
@property(readonly, nonatomic) CKUploadRequestPersistentStore *database;
@property(readonly, nonatomic) CKContainer *repairContainer;
@property(readonly, nonatomic) CKSyncEngine *repairZoneSyncEngine;
@property(readonly, nonatomic) NSString *activityIdentifierForSchedulingRepairs;
@property(copy) NSString *machServiceName;
@property(copy) CDUnknownBlockType packageRequestCallback;
@property(copy) CDUnknownBlockType assetRequestCallback;
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2 ignoringSystemConditions:(_Bool)arg3;	// IMP=0x00000000000821b6
- (id)initWithContainer:(id)arg1 repairContainerOverrides:(id)arg2;	// IMP=0x000000000008210f
- (void)dealloc;	// IMP=0x000000000008209b

@end
