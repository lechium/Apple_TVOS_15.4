//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchShareParticipantKeyOperationCallbacks-Protocol.h>

@class CKFetchShareParticipantKeyOperationInfo, NSArray, NSDictionary, NSMutableDictionary;
@protocol CKFetchShareParticipantKeyOperationCallbacks;

@interface CKFetchShareParticipantKeyOperation <CKFetchShareParticipantKeyOperationCallbacks>
{
    CDUnknownBlockType _shareParticipantKeyFetchedBlock;	// 8 = 0x8
    CDUnknownBlockType _shareParticipantKeyCompletionBlock;	// 16 = 0x10
    NSDictionary *_baseTokensByShareID;	// 24 = 0x18
    NSDictionary *_childRecordIDsByShareID;	// 32 = 0x20
    NSArray *_shareIDs;	// 40 = 0x28
    NSMutableDictionary *_errorsByShareID;	// 48 = 0x30
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x00000000000fd024
- (void).cxx_destruct;	// IMP=0x00000000000fd141
@property(retain, nonatomic) NSMutableDictionary *errorsByShareID; // @synthesize errorsByShareID=_errorsByShareID;
@property(copy, nonatomic) NSArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(copy, nonatomic) NSDictionary *childRecordIDsByShareID; // @synthesize childRecordIDsByShareID=_childRecordIDsByShareID;
@property(copy, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
- (id)activityCreate;	// IMP=0x00000000000fcffb
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000fca81
- (void)handleParticipantKeyFetchForRecordID:(id)arg1 participantKey:(id)arg2 error:(id)arg3;	// IMP=0x00000000000fc711
- (void)performCKOperation;	// IMP=0x00000000000fc342
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000000fc255
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x00000000000fc1c2
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x00000000000fc0c9
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x00000000000fbfd8
@property(copy, nonatomic) CDUnknownBlockType shareParticipantKeyCompletionBlock; // @synthesize shareParticipantKeyCompletionBlock=_shareParticipantKeyCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantKeyFetchedBlock; // @synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock;
- (id)initWithShareIDs:(id)arg1;	// IMP=0x00000000000fb830

// Remaining properties
@property(readonly, nonatomic) id <CKFetchShareParticipantKeyOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchShareParticipantKeyOperationInfo *operationInfo; // @dynamic operationInfo;

@end

