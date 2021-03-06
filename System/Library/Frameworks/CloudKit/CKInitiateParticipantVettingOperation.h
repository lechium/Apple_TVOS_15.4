//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKInitiateParticipantVettingOperationCallbacks-Protocol.h>

@class CKInitiateParticipantVettingOperationInfo, CKShareMetadata, NSString;
@protocol CKInitiateParticipantVettingOperationCallbacks;

@interface CKInitiateParticipantVettingOperation <CKInitiateParticipantVettingOperationCallbacks>
{
    CDUnknownBlockType _participantVettingInitiatedBlock;	// 8 = 0x8
    CDUnknownBlockType _participantVettingInitiationCompletionBlock;	// 16 = 0x10
    CKShareMetadata *_shareMetadata;	// 24 = 0x18
    NSString *_participantID;	// 32 = 0x20
    NSString *_address;	// 40 = 0x28
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x00000000000e3890
- (void).cxx_destruct;	// IMP=0x00000000000e3985
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(copy, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000e3327
- (void)handleParticipantVettingProgressWithError:(id)arg1;	// IMP=0x00000000000e3068
- (void)performCKOperation;	// IMP=0x00000000000e2c99
- (void)retryTimes:(unsigned long long)arg1 container:(id)arg2 participantVettingInitiatedBlock:(CDUnknownBlockType)arg3 participantVettingInitiationCompletionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000e2453
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000000e234c
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x00000000000e2253
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x00000000000e2162
@property(copy, nonatomic) CDUnknownBlockType participantVettingInitiationCompletionBlock; // @synthesize participantVettingInitiationCompletionBlock=_participantVettingInitiationCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType participantVettingInitiatedBlock; // @synthesize participantVettingInitiatedBlock=_participantVettingInitiatedBlock;
- (id)initWithShareMetadata:(id)arg1 participantID:(id)arg2 address:(id)arg3;	// IMP=0x00000000000e195f

// Remaining properties
@property(readonly, nonatomic) id <CKInitiateParticipantVettingOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKInitiateParticipantVettingOperationInfo *operationInfo; // @dynamic operationInfo;

@end

