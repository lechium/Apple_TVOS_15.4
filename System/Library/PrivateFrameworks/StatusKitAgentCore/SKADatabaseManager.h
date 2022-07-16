//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StatusKitAgentCore/SKADatabaseManaging-Protocol.h>

@class NSString;
@protocol SKADatabaseManagingDelegate, SKADatabaseProviding;

@interface SKADatabaseManager : NSObject <SKADatabaseManaging>
{
    id <SKADatabaseProviding> _databaseProvider;	// 8 = 0x8
    id <SKADatabaseManagingDelegate> _delegate;	// 16 = 0x10
}

+ (id)logger;	// IMP=0x000000000003dc45
- (void).cxx_destruct;	// IMP=0x000000000003dcc1
@property(readonly, nonatomic) __weak id <SKADatabaseManagingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SKADatabaseProviding> databaseProvider; // @synthesize databaseProvider=_databaseProvider;
- (void)deviceToDeviceEncryptedDatabaseCapableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000003db7b
- (void)cleanupOldChannelsForHandle:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x000000000003db2b
- (void)cleanupDecommisionedChannelsWithDatabaseContext:(id)arg1;	// IMP=0x000000000003d826
- (void)cleanupOldReceivedInvitationsForChannelIdentifier:(id)arg1 excludingInvitation:(id)arg2 databaseContext:(id)arg3;	// IMP=0x000000000003d279
- (id)receivedInvitationsForChannel:(id)arg1 databaseContext:(id)arg2;	// IMP=0x000000000003cf81
- (id)_existingReceivedInvitationsForChannelIdentifier:(id)arg1 sortedByDateReceived:(_Bool)arg2 databaseContect:(id)arg3;	// IMP=0x000000000003cb3e
- (id)createReceivedInvitationForChannel:(id)arg1 senderHandle:(id)arg2 invitedHandle:(id)arg3 invitationIdentifier:(id)arg4 dateInvitationCreated:(id)arg5 incomingRatchetState:(id)arg6 invitationPayload:(id)arg7 databaseContext:(id)arg8;	// IMP=0x000000000003c512
- (id)_existingReceivedInvitationsForHandle:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x000000000003c1d3
- (id)_existingRemovedUsersForHandle:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x000000000003bfa8
- (_Bool)deleteRemovedUserWithHandle:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x000000000003bba8
- (id)existingRemovedUserWithHandle:(id)arg1 statusTypeIdentifier:(id)arg2 withDatabaseContext:(id)arg3;	// IMP=0x000000000003b985
- (id)createRemovedUserWithHandle:(id)arg1 dateRemoved:(id)arg2 statusTypeIdentifier:(id)arg3 databaseContext:(id)arg4;	// IMP=0x000000000003b69c
- (_Bool)incrementPendingPublishRequestRetryCountWithUniqueIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x000000000003b3f8
- (_Bool)deletePendingPublishRequestWithWithUniqueIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x000000000003b15f
- (id)existingPendingPublishRequestsWithDatabaseContext:(id)arg1;	// IMP=0x000000000003ae61
- (id)existingPendingPublishRequestsForStatusTypeIdentifier:(id)arg1 withDatabaseContext:(id)arg2;	// IMP=0x000000000003ab36
- (id)existingPendingPublishRequestForUniqueIdentifier:(id)arg1 withDatabaseContext:(id)arg2;	// IMP=0x000000000003a97b
- (id)createPendingPublishRequestWithUniqueIdentifier:(id)arg1 dateCreated:(id)arg2 payloadData:(id)arg3 statusTypeIdentifier:(id)arg4 databaseContext:(id)arg5;	// IMP=0x000000000003a66e
- (id)_existingPendingPublishRequestsWithDatabaseContext:(id)arg1;	// IMP=0x000000000003a579
- (id)_existingPendingPublishRequestsForStatusTypeIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x000000000003a430
- (id)_existingPendingPublishRequestForUniqueIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x000000000003a2b2
- (void)cleanupOldStatusUpdatesForChannelIdentifier:(id)arg1 excludingStatusUniqueIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000039b1f
- (id)existingStatusForUniqueIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x000000000003975a
- (id)existingStatusForChannel:(id)arg1 databaseContext:(id)arg2;	// IMP=0x00000000000392cc
- (id)createStatusWithUniqueIdentifier:(id)arg1 dateCreated:(id)arg2 datePublished:(id)arg3 dateReceived:(id)arg4 dateExpired:(id)arg5 rawData:(id)arg6 channelIdentifier:(id)arg7 databaseContext:(id)arg8;	// IMP=0x0000000000038e37
- (_Bool)deleteAllInvitedUsersForPersonalChannel:(id)arg1 databaseContext:(id)arg2;	// IMP=0x000000000003894d
- (_Bool)deleteInvitedUserForHandle:(id)arg1 personalChannel:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000038410
- (id)_existingInvitedUsersForInvitedHandle:(id)arg1 channel:(id)arg2 databaseContext:(id)arg3;	// IMP=0x000000000003815f
- (id)_existingInvitedUsersForDatabaseInvitedUser:(id)arg1 databaseChannel:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000037eb5
- (id)existingInvitedUsersForPersonalChannel:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000037aca
- (id)existingInvitedUsersForInvitedHandle:(id)arg1 onChannel:(id)arg2 databaseContext:(id)arg3;	// IMP=0x00000000000376d8
- (id)updateInvitationPayload:(id)arg1 onExistingInvitedUser:(id)arg2 channel:(id)arg3 databaseContext:(id)arg4;	// IMP=0x0000000000037099
- (_Bool)copyInvitedUsersFromChannel:(id)arg1 toChannel:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000036b09
- (id)createInvitedUserWithHandle:(id)arg1 senderHandle:(id)arg2 invitationPayload:(id)arg3 channel:(id)arg4 databaseContext:(id)arg5;	// IMP=0x0000000000036664
- (id)existingRecentTransientSubscriptionHistoriesWithLimit:(long long)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000036304
- (id)createOrUpdateTransientSubscriptionHistoryForChannelIdentifier:(id)arg1 lastSubscriptionDate:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000035f5c
- (id)_existingTransientSubscriptionHistoryWithLimit:(long long)arg1 orderedByLastSubscriptionDateAscending:(_Bool)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000035db8
- (id)_existingTransientSubscriptionHistoryForChannelIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000035bbe
- (_Bool)deleteSubscriptionAssertionWithSubscriptionIdentifier:(id)arg1 applicationIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x000000000003597a
- (id)createSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 applicationIdentifier:(id)arg2 statusTypeIdentifier:(id)arg3 databaseContext:(id)arg4;	// IMP=0x00000000000356bb
- (id)_existingSubscriptionAssertionsForStatusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000035490
- (id)existingSubscriptionAssertionsForStatusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x00000000000350d5
- (id)existingSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 applicationIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000034ee2
- (id)_existingSubscriptionAssertionForSubscriptionIdentifier:(id)arg1 applicationIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000034c94
- (id)allPersistentSubscriptionAssertionChannelIdentifiersWithDatabaseContext:(id)arg1;	// IMP=0x00000000000348a5
- (id)generatedEncryptionKeysForPersonalChannel:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000034474
- (id)createGeneratedEncryptionKeyWithOriginalOutgoingRatchetState:(id)arg1 personalChannel:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000034171
- (_Bool)decomissionAllPersonalChannelsWithStatusTypeIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000033e7a
- (id)updatePersonalChannel:(id)arg1 withCurrentOutgoingRatchetState:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000033b8b
- (id)createChannelForStatusTypeIdentifier:(id)arg1 channelIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000033837
- (id)createPersonalChannelForStatusTypeIdentifier:(id)arg1 channelIdentifier:(id)arg2 channelToken:(id)arg3 databaseContext:(id)arg4;	// IMP=0x0000000000033473
- (id)allExistingChannelsForStatusTypeIdentifier:(id)arg1 includingPersonalChannel:(_Bool)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000032bbb
- (id)allExistingChannelsForHandle:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x00000000000324ca
- (id)existingChannelForHandle:(id)arg1 statusTypeIdentifier:(id)arg2 databaseContext:(id)arg3;	// IMP=0x0000000000031f38
- (id)_existingChannelsForChannelIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000031cdf
- (id)_existingPersonalChannelForDatabaseChannel:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000031bfd
- (id)_existingChannelsForDatabaseChannel:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000031b74
- (id)existingChannelForSubscriptionIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x000000000003199f
- (_Bool)deletePersonalChannelForStatusTypeIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000031789
- (id)_existingPersonalChannelsForStatusTypeIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000031413
- (id)_existingDecomissionedPersonalChannelsWithDatabaseContext:(id)arg1;	// IMP=0x0000000000031187
- (id)_existingPersonalChannelForStatusTypeIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000030e10
- (id)existingPersonalChannelForStatusTypeIdentifier:(id)arg1 databaseContext:(id)arg2;	// IMP=0x0000000000030b3c
- (id)newBackgroundContext;	// IMP=0x0000000000030b26
- (id)initWithDatabaseProvider:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000030a8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
