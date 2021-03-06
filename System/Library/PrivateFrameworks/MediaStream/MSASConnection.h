//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaStream/XPCNSClientConnectionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, XPCNSClientConnection;
@protocol OS_dispatch_queue;

@interface MSASConnection : NSObject <XPCNSClientConnectionDelegate>
{
    XPCNSClientConnection *_connection;	// 8 = 0x8
    NSMutableDictionary *_foregroundPingTimerContextByPersonID;	// 16 = 0x10
    NSMutableDictionary *_focusAlbumTimerByPersonID;	// 24 = 0x18
    NSMutableDictionary *_focusAlbumGUIDByPersonID;	// 32 = 0x20
    NSMutableDictionary *_serverSideConfigurationDictionaryByPersonID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_memberQueue;	// 48 = 0x30
}

+ (id)sharedConnection;	// IMP=0x000000000000d467
- (void).cxx_destruct;	// IMP=0x000000000000bc2b
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSMutableDictionary *serverSideConfigurationDictionaryByPersonID; // @synthesize serverSideConfigurationDictionaryByPersonID=_serverSideConfigurationDictionaryByPersonID;
@property(retain, nonatomic) NSMutableDictionary *focusAlbumGUIDByPersonID; // @synthesize focusAlbumGUIDByPersonID=_focusAlbumGUIDByPersonID;
@property(retain, nonatomic) NSMutableDictionary *focusAlbumTimerByPersonID; // @synthesize focusAlbumTimerByPersonID=_focusAlbumTimerByPersonID;
@property(retain, nonatomic) NSMutableDictionary *foregroundPingTimerContextByPersonID; // @synthesize foregroundPingTimerContextByPersonID=_foregroundPingTimerContextByPersonID;
@property(retain, nonatomic) XPCNSClientConnection *connection; // @synthesize connection=_connection;
- (void)XPCNSClientConnection:(id)arg1 didReceiveRequest:(id)arg2;	// IMP=0x000000000000bb5d
- (void)retrieveAssetsFromAssetCollectionsWithGUIDs:(id)arg1 assetTypeFlags:(int)arg2 personID:(id)arg3;	// IMP=0x000000000000ba39
- (void)retrieveAssets:(id)arg1 inAlbumWithGUID:(id)arg2 personID:(id)arg3;	// IMP=0x000000000000b9a0
- (void)forgetEverythingAboutPersonID:(id)arg1;	// IMP=0x000000000000b922
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000b886
- (void)deleteCommentWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000b871
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x000000000000b7bf
- (void)addComments:(id)arg1 toAssetCollectionWithGUID:(id)arg2 personID:(id)arg3;	// IMP=0x000000000000b7aa
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x000000000000b6f8
- (void)markCommentsForAssetCollectionWithGUID:(id)arg1 asViewedWithLastViewedDate:(id)arg2 personID:(id)arg3;	// IMP=0x000000000000b6e3
- (void)deleteAssetCollectionsWithGUIDs:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000b655
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000b5b9
- (void)deleteAssetCollectionWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000b5a4
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x000000000000b4f2
- (void)addAssetCollections:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;	// IMP=0x000000000000b4dd
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000b441
- (void)removeAccessControlEntryWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000b42c
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x000000000000b37a
- (void)addAccessControlEntries:(id)arg1 toAlbumWithGUID:(id)arg2 personID:(id)arg3;	// IMP=0x000000000000b365
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000b2c9
- (void)rejectInvitationWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000b2b4
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000b218
- (void)acceptInvitationWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000b203
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 info:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b099
- (void)acceptInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000affb
- (void)markAsSpamAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ae54
- (void)markAsSpamInvitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000acad
- (void)markAsSpamInvitationWithToken:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ab06
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000aa6a
- (void)unsubscribeFromAlbumWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000aa55
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000a9b9
- (void)subscribeToAlbumWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000a9a4
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000000a7a6
- (void)setMultipleContributorsEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000a6ff
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 info:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000000a501
- (void)setPublicAccessEnabled:(_Bool)arg1 forAlbumWithGUID:(id)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000a45a
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 moveLastViewedAssetCollectionMarker:(_Bool)arg3 info:(id)arg4;	// IMP=0x000000000000a30e
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000a2f3
- (void)markAlbumGUIDAsViewed:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000a2de
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000a242
- (void)deleteAlbumWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000a22d
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000a191
- (void)modifyAlbumMetadata:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000a17c
- (void)addAlbum:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x000000000000a0e0
- (void)addAlbum:(id)arg1 personID:(id)arg2;	// IMP=0x000000000000a0cb
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x0000000000009f80
- (void)refreshCommentsForAssetCollectionWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3;	// IMP=0x0000000000009f6b
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000009ecf
- (void)refreshAccessControlListForAlbumWithGUID:(id)arg1 personID:(id)arg2;	// IMP=0x0000000000009eba
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3 info:(id)arg4;	// IMP=0x0000000000009d76
- (void)refreshContentOfAlbumWithGUID:(id)arg1 resetSync:(_Bool)arg2 personID:(id)arg3;	// IMP=0x0000000000009d61
- (void)refreshResetSync:(_Bool)arg1 personID:(id)arg2 info:(id)arg3;	// IMP=0x0000000000009c4a
- (void)refreshResetSync:(_Bool)arg1 personID:(id)arg2;	// IMP=0x0000000000009c35
- (void)serverSideConfigurationDictionaryForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009a2e
- (void)commentWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000098ec
- (void)commentGUIDsForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000097aa
- (void)isAssetCollectionWithGUID:(id)arg1 markedAsUnviewedPersonID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009668
- (void)videoURLsForAssetCollectionWithGUID:(id)arg1 forMediaAssetType:(unsigned long long)arg2 personID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000094bc
- (void)videoURLForAssetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009397
- (void)assetCollectionWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009255
- (void)assetCollectionGUIDsInAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009113
- (void)invitationWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008fd1
- (void)invitationGUIDsForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008ea0
- (void)accessControlWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008d5e
- (void)accessControlGUIDsForAlbumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008c1c
- (void)albumWithGUID:(id)arg1 personID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000008ada
- (void)albumGUIDsForPersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000089a9
- (void)setFocusAssetCollectionGUID:(id)arg1 forPersonID:(id)arg2;	// IMP=0x00000000000087fe
- (void)setFocusAlbumGUID:(id)arg1 forPersonID:(id)arg2;	// IMP=0x0000000000008653
- (void)setFocusAlbum:(id)arg1 forPersonID:(id)arg2;	// IMP=0x00000000000085db
- (void)setIsUIForeground:(_Bool)arg1 forPersonID:(id)arg2;	// IMP=0x000000000000851a
- (void)timerPingQueueForegroundPingTimerExpiredContext:(id)arg1 personID:(id)arg2;	// IMP=0x00000000000083c6
- (void)pingForeground;	// IMP=0x000000000000835d
- (void)timerPingQueueSendSetUIForeground:(_Bool)arg1 personID:(id)arg2;	// IMP=0x000000000000825e
- (void)activityIsThrottledByLackOfDiskSpacePersonID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000812d
- (void)handlePushNotificationForPersonID:(id)arg1;	// IMP=0x000000000000800e
- (void)cancelActivitiesForPersonID:(id)arg1;	// IMP=0x0000000000007f90
- (void)retryOutstandingActivitiesForPersonID:(id)arg1;	// IMP=0x0000000000007e65
- (void)retryOutstandingActivities;	// IMP=0x0000000000007dfe
- (void)isInRetryStateHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007ce8
- (void)nextActivityDateHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007bd2
- (id)_cloneArray:(id)arg1;	// IMP=0x00000000000079ff
- (void)_sendMessageReliably:(id)arg1;	// IMP=0x00000000000079e5
- (id)_communicationFailureError;	// IMP=0x00000000000079b5
- (void)_sendMessageReliably:(id)arg1 data:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000007883
- (id)init;	// IMP=0x0000000000007578

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

