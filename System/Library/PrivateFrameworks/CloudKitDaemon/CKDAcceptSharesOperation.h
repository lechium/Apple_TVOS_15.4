//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;
@protocol CKAcceptSharesOperationCallbacks;

@interface CKDAcceptSharesOperation
{
    CDUnknownBlockType _acceptCompletionBlock;	// 8 = 0x8
    NSMutableDictionary *_clientProvidedMetadatasByURL;	// 16 = 0x10
    NSMutableArray *_shareURLsToAccept;	// 24 = 0x18
    NSMutableArray *_acceptedShareURLsToFetch;	// 32 = 0x20
    NSMutableDictionary *_shareMetadatasToAcceptByURL;	// 40 = 0x28
    unsigned long long _numShareAcceptAttempts;	// 48 = 0x30
    NSMutableDictionary *_anonymousShareTuplesAcceptAttempted;	// 56 = 0x38
    NSMutableArray *_anonymousShareTuplesAccepted;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002cff67
@property(retain, nonatomic) NSMutableArray *anonymousShareTuplesAccepted; // @synthesize anonymousShareTuplesAccepted=_anonymousShareTuplesAccepted;
@property(retain, nonatomic) NSMutableDictionary *anonymousShareTuplesAcceptAttempted; // @synthesize anonymousShareTuplesAcceptAttempted=_anonymousShareTuplesAcceptAttempted;
@property(nonatomic) unsigned long long numShareAcceptAttempts; // @synthesize numShareAcceptAttempts=_numShareAcceptAttempts;
@property(retain, nonatomic) NSMutableDictionary *shareMetadatasToAcceptByURL; // @synthesize shareMetadatasToAcceptByURL=_shareMetadatasToAcceptByURL;
@property(retain, nonatomic) NSMutableArray *acceptedShareURLsToFetch; // @synthesize acceptedShareURLsToFetch=_acceptedShareURLsToFetch;
@property(retain, nonatomic) NSMutableArray *shareURLsToAccept; // @synthesize shareURLsToAccept=_shareURLsToAccept;
@property(retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL; // @synthesize clientProvidedMetadatasByURL=_clientProvidedMetadatasByURL;
@property(copy, nonatomic) CDUnknownBlockType acceptCompletionBlock; // @synthesize acceptCompletionBlock=_acceptCompletionBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002cfddf
- (void)main;	// IMP=0x00000000002cfd7e
- (void)_processAnonymousShares;	// IMP=0x00000000002cfada
- (void)_fetchMetadataForShares;	// IMP=0x00000000002ce6d3
- (void)_prepareShareMetadata;	// IMP=0x00000000002cda83
- (_Bool)_callingParticipantOONForShareMetadata:(id)arg1;	// IMP=0x00000000002cd9b4
- (id)_keySwapForOONParticipant:(id)arg1;	// IMP=0x00000000002cd0bf
- (_Bool)_validateInvitedPCSCanBeDecryptedForShare:(id)arg1;	// IMP=0x00000000002ccd88
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002cbef7
- (void)_fetchAcceptedShares;	// IMP=0x00000000002cb2ed
- (void)_decryptShareMetadata;	// IMP=0x00000000002ca8dc
- (unsigned long long)sharingServiceTypeForShareMetadata:(id)arg1;	// IMP=0x00000000002ca851
- (_Bool)_acceptShares;	// IMP=0x00000000002c8ea9
- (int)operationType;	// IMP=0x00000000002c8e9e
- (void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3;	// IMP=0x00000000002c81e5
- (void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3;	// IMP=0x00000000002c7ff0
- (id)nameForState:(unsigned long long)arg1;	// IMP=0x00000000002c7f4c
- (_Bool)makeStateTransition;	// IMP=0x00000000002c7d6a
- (id)activityCreate;	// IMP=0x00000000002c7d41
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002c79bc

// Remaining properties
@property(retain, nonatomic) id <CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

