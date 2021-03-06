//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchShareParticipantsOperationCallbacks-Protocol.h>

@class CKFetchShareParticipantsOperationInfo, NSArray, NSMutableDictionary, NSMutableSet;
@protocol CKFetchShareParticipantsOperationCallbacks;

@interface CKFetchShareParticipantsOperation <CKFetchShareParticipantsOperationCallbacks>
{
    CDUnknownBlockType _shareParticipantFetchedBlock;	// 8 = 0x8
    CDUnknownBlockType _perShareParticipantCompletionBlock;	// 16 = 0x10
    CDUnknownBlockType _fetchShareParticipantsCompletionBlock;	// 24 = 0x18
    NSArray *_userIdentityLookupInfos;	// 32 = 0x20
    NSMutableSet *_discoveredUserIdentities;	// 40 = 0x28
    NSMutableDictionary *_lookupErrors;	// 48 = 0x30
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x0000000000175d03
- (void).cxx_destruct;	// IMP=0x0000000000175e01
@property(retain, nonatomic) NSMutableDictionary *lookupErrors; // @synthesize lookupErrors=_lookupErrors;
@property(retain, nonatomic) NSMutableSet *discoveredUserIdentities; // @synthesize discoveredUserIdentities=_discoveredUserIdentities;
@property(copy, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
- (id)activityCreate;	// IMP=0x0000000000175cda
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000017549a
- (void)handleShareParticipantFetchForLookupInfo:(id)arg1 shareParticipant:(id)arg2 error:(id)arg3;	// IMP=0x000000000017500d
- (void)performCKOperation;	// IMP=0x0000000000174c3e
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x000000000017482d
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x000000000017476b
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x00000000001746d0
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x000000000017463b
@property(copy, nonatomic) CDUnknownBlockType fetchShareParticipantsCompletionBlock; // @synthesize fetchShareParticipantsCompletionBlock=_fetchShareParticipantsCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType perShareParticipantCompletionBlock; // @synthesize perShareParticipantCompletionBlock=_perShareParticipantCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantFetchedBlock; // @synthesize shareParticipantFetchedBlock=_shareParticipantFetchedBlock;
- (id)initWithUserIdentityLookupInfos:(id)arg1;	// IMP=0x0000000000173b61
- (id)init;	// IMP=0x0000000000173ade

// Remaining properties
@property(readonly, nonatomic) id <CKFetchShareParticipantsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchShareParticipantsOperationInfo *operationInfo; // @dynamic operationInfo;

@end

