//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUNeighborhoodActivityConduitXPCClientDelegate-Protocol.h>

@class NSDictionary, NSMapTable, NSMutableDictionary, NSString, NSUUID, TUConversation, TUConversationManager, TUNearbyDeviceHandle, TUNeighborhoodActivityConduitXPCClient;

@interface TUNeighborhoodActivityConduit : NSObject <TUNeighborhoodActivityConduitXPCClientDelegate>
{
    NSUUID *_currentSplitSessionConversationUUID;	// 8 = 0x8
    TUNearbyDeviceHandle *_currentSplitSessionDevice;	// 16 = 0x10
    NSMapTable *_delegates;	// 24 = 0x18
    TUNeighborhoodActivityConduitXPCClient *_xpcClient;	// 32 = 0x20
    NSMutableDictionary *_allNearbyActivityConversations;	// 40 = 0x28
    TUConversationManager *_conversationManager;	// 48 = 0x30
    unsigned long long _stateHandle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003c383
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(readonly, nonatomic) TUConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) NSMutableDictionary *allNearbyActivityConversations; // @synthesize allNearbyActivityConversations=_allNearbyActivityConversations;
@property(readonly, nonatomic) TUNeighborhoodActivityConduitXPCClient *xpcClient; // @synthesize xpcClient=_xpcClient;
@property(retain, nonatomic) NSMapTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) TUNearbyDeviceHandle *currentSplitSessionDevice; // @synthesize currentSplitSessionDevice=_currentSplitSessionDevice;
@property(retain, nonatomic) NSUUID *currentSplitSessionConversationUUID; // @synthesize currentSplitSessionConversationUUID=_currentSplitSessionConversationUUID;
- (void)leftSplitSession:(id)arg1;	// IMP=0x000000000003bff9
- (void)joinedSplitSession:(id)arg1 device:(id)arg2;	// IMP=0x000000000003bc3c
- (void)contactsUpdated:(id)arg1 fromDevice:(id)arg2;	// IMP=0x000000000003bb2a
- (void)joinableConversationDisappeared:(id)arg1 fromDevice:(id)arg2;	// IMP=0x000000000003b969
- (void)joinableConversationAppeared:(id)arg1 onDevice:(id)arg2;	// IMP=0x000000000003b723
- (void)connectionEstablishedForClient:(id)arg1;	// IMP=0x000000000003b6d0
- (void)cancelPendingJoinRequest;	// IMP=0x000000000003b693
- (void)joinConversation:(id)arg1 onDevice:(id)arg2 withContext:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003b213
- (void)joinExpanseSessionForConversation:(id)arg1 onDevice:(id)arg2 proposingActivity:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003b1fe
@property(readonly, nonatomic) NSDictionary *nearbyConversations;
- (void)nearbyConversationsForProfileIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003afa9
@property(readonly, nonatomic) NSDictionary *knownContacts;
- (void)_forEachDelegate:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ac8d
- (void)_grouped:(id)arg1 forEachDelegate:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a9f0
- (void)_requestInitialState;	// IMP=0x000000000003a248
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000003a1d0
- (void)addDelegate:(id)arg1;	// IMP=0x000000000003a141
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000003a0a7
@property(readonly, nonatomic) TUConversation *currentSplitSessionConversation;
- (id)findConversationForUUID:(id)arg1;	// IMP=0x0000000000039e8f
- (id)findCurrentSplitSessionConversation;	// IMP=0x0000000000039e30
- (id)_osStateDictionary;	// IMP=0x0000000000039b05
- (void)dealloc;	// IMP=0x0000000000039a93
- (id)initWithConversationManager:(id)arg1;	// IMP=0x000000000003965c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

