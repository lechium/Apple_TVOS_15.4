//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMediaStream/MSReauthorizationProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSSubscribeStorageProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSSubscribeStreamsProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSSubscriber-Protocol.h>

@class MSMediaStreamDaemon, MSObjectQueue, MSReauthorizationProtocol, MSSubscribeStreamsProtocol, NSMutableArray, NSMutableDictionary, NSString;
@protocol MSSubscribeStorageProtocol, MSSubscriberDelegate;

@interface MSSubscriber <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate>
{
    id <MSSubscriberDelegate> _delegate;	// 48 = 0x30
    MSMediaStreamDaemon *_daemon;	// 56 = 0x38
    _Bool _checkOneMoreTime;	// 64 = 0x40
    int _state;	// 68 = 0x44
    MSSubscribeStreamsProtocol *_protocol;	// 72 = 0x48
    NSMutableDictionary *_newSubscriptionsByStreamID;	// 80 = 0x50
    int _retrievalState;	// 88 = 0x58
    id <MSSubscribeStorageProtocol> _storageProtocol;	// 96 = 0x60
    MSReauthorizationProtocol *_reauthProtocol;	// 104 = 0x68
    MSObjectQueue *_retrievalQueue;	// 112 = 0x70
    NSMutableArray *_assetsBeingRetrieved;	// 120 = 0x78
    long long _targetRetrievalByteCount;	// 128 = 0x80
    int _retrievalBatchSize;	// 136 = 0x88
    long long _maxErrorCount;	// 144 = 0x90
}

+ (id)_descriptionForRetrievalState:(int)arg1;	// IMP=0x000000000001900b
+ (id)_descriptionForState:(int)arg1;	// IMP=0x0000000000018fd5
+ (_Bool)isInRetryState;	// IMP=0x0000000000018e95
+ (void)stopAllActivities;	// IMP=0x0000000000018d61
+ (id)personIDsWithOutstandingActivities;	// IMP=0x0000000000018d1a
+ (id)nextActivityDateForPersonID:(id)arg1;	// IMP=0x0000000000018cb2
+ (id)nextActivityDate;	// IMP=0x0000000000018b07
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;	// IMP=0x00000000000189e3
+ (void)forgetPersonID:(id)arg1;	// IMP=0x000000000001895f
+ (id)_clearInstantiatedSubscribersByPersonID;	// IMP=0x0000000000018943
+ (id)existingSubscriberForPersonID:(id)arg1;	// IMP=0x000000000001892a
+ (id)subscriberForPersonID:(id)arg1;	// IMP=0x000000000001880b
- (void).cxx_destruct;	// IMP=0x000000000001868d
@property(nonatomic) int retrievalBatchSize; // @synthesize retrievalBatchSize=_retrievalBatchSize;
@property(nonatomic) long long targetRetrievalByteCount; // @synthesize targetRetrievalByteCount=_targetRetrievalByteCount;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) id <MSSubscriberDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reauthorizationProtocol:(id)arg1 reauthorizedAssets:(id)arg2 rejectedAssets:(id)arg3 error:(id)arg4;	// IMP=0x0000000000017dfb
- (void)reauthorizationProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;	// IMP=0x0000000000017c59
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)arg1;	// IMP=0x0000000000016d2f
- (void)subscribeStorageProtocol:(id)arg1 didFinishRetrievingAsset:(id)arg2 error:(id)arg3;	// IMP=0x0000000000016b5d
- (void)_finishedRetrievingAsset:(id)arg1;	// IMP=0x00000000000169f8
- (_Bool)_isInRetryState;	// IMP=0x00000000000169d0
- (void)_forget;	// IMP=0x0000000000016977
- (void)abort;	// IMP=0x0000000000016965
- (void)_abort;	// IMP=0x00000000000165df
- (void)stop;	// IMP=0x00000000000165c9
- (void)_stopOutSubscriberState:(int *)arg1 outRetrievalState:(int *)arg2;	// IMP=0x000000000001647e
- (void)_reauthorizeAssets;	// IMP=0x00000000000162d1
- (void)_retrieveNextAssets;	// IMP=0x0000000000015df8
- (void)_retrieveAssets;	// IMP=0x0000000000015b66
- (void)checkForOutstandingActivities;	// IMP=0x0000000000015a1a
- (void)retrieveAssets:(id)arg1;	// IMP=0x00000000000153dc
- (void)subscribeStreamsProtocol:(id)arg1 didFindTemporarilyUnavailableSubscriptionForPersonID:(id)arg2;	// IMP=0x00000000000152db
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;	// IMP=0x00000000000152c6
- (void)_didReceiveAuthenticationError:(id)arg1;	// IMP=0x0000000000015124
- (void)subscribeStreamsProtocol:(id)arg1 didFinishError:(id)arg2;	// IMP=0x0000000000014d8e
- (void)subscribeStreamsProtocol:(id)arg1 didFindDisappearedSubscriptionForPersonID:(id)arg2;	// IMP=0x0000000000014c27
- (void)subscribeStreamsProtocol:(id)arg1 didFinishReceivingUpdatesForPersonID:(id)arg2 ctag:(id)arg3;	// IMP=0x0000000000014895
- (void)subscribeStreamsProtocol:(id)arg1 didReceiveAssetCollections:(id)arg2 forPersonID:(id)arg3;	// IMP=0x0000000000014451
- (void)subscribeStreamsProtocol:(id)arg1 willReceiveUpdatesForPersonID:(id)arg2 wasReset:(_Bool)arg3 metadata:(id)arg4;	// IMP=0x00000000000140ac
- (void)_didFinishRetrievingSubscriptionUpdate;	// IMP=0x0000000000013f8c
- (void)_checkForNewAssetCollections;	// IMP=0x0000000000013c83
- (void)checkForNewAssetCollections;	// IMP=0x0000000000013a96
- (void)checkForNewAssetCollectionsIfMissingCtag;	// IMP=0x0000000000013847
- (_Bool)_isAllowedToDownload;	// IMP=0x0000000000013653
- (void)resetSync;	// IMP=0x0000000000013522
- (void)_setSubscriptionsByStreamID:(id)arg1;	// IMP=0x000000000001349c
- (id)_subscriptionsByStreamID;	// IMP=0x00000000000133f5
- (void)_setHasOutstandingPoll:(_Bool)arg1;	// IMP=0x0000000000013282
- (_Bool)_hasOutstandingPoll;	// IMP=0x000000000001320d
- (void)_updateMasterManifest;	// IMP=0x000000000001312f
- (void)_serverSideConfigurationDidChange:(id)arg1;	// IMP=0x0000000000012f0d
- (void)_refreshServerSideConfigurationParameters;	// IMP=0x0000000000012df7
- (void)_changeRetrievalStateTo:(int)arg1;	// IMP=0x0000000000012ca6
- (void)_changeStateTo:(int)arg1;	// IMP=0x0000000000012b55
- (void)dealloc;	// IMP=0x0000000000012b17
- (void)deactivate;	// IMP=0x00000000000129e3
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;	// IMP=0x00000000000127c2
- (id)ownSubscribedStream;	// IMP=0x0000000000012742
- (id)subscribedStreams;	// IMP=0x000000000001255e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
