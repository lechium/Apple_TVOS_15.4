//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSBaseSocketPairConnectionDelegate-Protocol.h>
#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class CUTWeakReference, IDSBaseSocketPairConnection, IDSGroupEncryptionKeyMaterialCache, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface _IDSGroupSession : NSObject <IDSDaemonListenerProtocol, IDSBaseSocketPairConnectionDelegate>
{
    id _delegateContext;	// 8 = 0x8
    id _boostContext;	// 16 = 0x10
    NSString *_uniqueID;	// 24 = 0x18
    NSString *_instanceID;	// 32 = 0x20
    NSString *_accountID;	// 40 = 0x28
    NSSet *_destinations;	// 48 = 0x30
    NSDictionary *_destinationsLightweightStatus;	// 56 = 0x38
    NSString *_fromID;	// 64 = 0x40
    IDSBaseSocketPairConnection *_unreliableSocketPairConnection;	// 72 = 0x48
    CUTWeakReference *_delegate;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    _Bool _isInvalidated;	// 96 = 0x60
    unsigned int _state;	// 100 = 0x64
    long long _transportType;	// 104 = 0x68
    unsigned long long _connectionCountHint;	// 112 = 0x70
    _Bool _needsToWaitForPreConnectionData;	// 120 = 0x78
    _Bool _disallowCellularInterface;	// 121 = 0x79
    _Bool _disallowWifiInterface;	// 122 = 0x7a
    unsigned long long _preferredAddressFamily;	// 128 = 0x80
    _Bool _preferCellularForCallSetup;	// 136 = 0x88
    NSString *_clientUUID;	// 144 = 0x90
    _Bool _alwaysSkipSelf;	// 152 = 0x98
    _Bool _startAsUPlusOneSession;	// 153 = 0x99
    _Bool _isLightweightParticipant;	// 154 = 0x9a
    unsigned int _sessionEndedReason;	// 156 = 0x9c
    NSMutableDictionary *_preferences;	// 160 = 0xa0
    NSMutableDictionary *_sessionConfig;	// 168 = 0xa8
    _Bool _useConfServer;	// 176 = 0xb0
    NSString *_stableGroupID;	// 184 = 0xb8
    NSString *_groupID;	// 192 = 0xc0
    NSDictionary *_participantInfo;	// 200 = 0xc8
    struct cfs_client_s *_cfs_client;	// 208 = 0xd0
    int _cfs_requestID;	// 216 = 0xd8
    _Bool _cfsJoinReply;	// 220 = 0xdc
    _Bool _didJoinCallback;	// 221 = 0xdd
    _Bool _cfsLeaveReply;	// 222 = 0xde
    _Bool _didLeaveCallback;	// 223 = 0xdf
    NSArray *_existingParticipants;	// 224 = 0xe0
    NSError *_joinLeaveError;	// 232 = 0xe8
    NSNumber *_qrReason;	// 240 = 0xf0
    NSNumber *_previousError;	// 248 = 0xf8
    unsigned long long _localParticipantID;	// 256 = 0x100
    IDSGroupEncryptionKeyMaterialCache *_keyMaterialCache;	// 264 = 0x108
    NSMutableArray *_dataCryptorRequests;	// 272 = 0x110
    NSMutableDictionary *_createParticipantIDAliasCallbacks;	// 280 = 0x118
    NSMutableDictionary *_getParticipantIDForAliasCallbacks;	// 288 = 0x120
    NSMutableArray *_getParticipantIDForAliasDelegateQueueCallbacks;	// 296 = 0x128
    NSSet *_requiredCapabilities;	// 304 = 0x130
    NSSet *_requiredLackOfCapabilities;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x0000000000055c10
@property(readonly) _Bool isLightweightParticipant; // @synthesize isLightweightParticipant=_isLightweightParticipant;
@property(readonly, nonatomic) NSSet *requiredLackOfCapabilities; // @synthesize requiredLackOfCapabilities=_requiredLackOfCapabilities;
@property(readonly, nonatomic) NSSet *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property(readonly, nonatomic) unsigned long long localParticipantID; // @synthesize localParticipantID=_localParticipantID;
@property(retain, nonatomic) id boostContext; // @synthesize boostContext=_boostContext;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (id)getDestinationsLightweightStatusDict;	// IMP=0x0000000000055ba9
- (id)getDestinations;	// IMP=0x0000000000055b9b
- (void)setKeyMaterialCache:(id)arg1;	// IMP=0x0000000000055b87
- (void)setUniqueID:(id)arg1;	// IMP=0x0000000000055b76
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;	// IMP=0x00000000000558e9
- (void)session:(id)arg1 didReceiveParticipantID:(unsigned long long)arg2 forParticipantIDAlias:(unsigned long long)arg3 salt:(id)arg4;	// IMP=0x00000000000553a8
- (void)session:(id)arg1 didCreateParticipantIDAlias:(unsigned long long)arg2 forParticipantID:(unsigned long long)arg3 salt:(id)arg4;	// IMP=0x0000000000055184
- (void)session:(id)arg1 hasOutdatedSKI:(id)arg2;	// IMP=0x0000000000055045
- (void)participantUpdatedForSession:(id)arg1;	// IMP=0x0000000000054de2
- (void)session:(id)arg1 shouldInvalidateKeyMaterialByKeyIndexes:(id)arg2;	// IMP=0x0000000000054b6d
- (void)session:(id)arg1 didReceiveKeyMaterial:(id)arg2;	// IMP=0x00000000000546cc
- (void)session:(id)arg1 didRemoveParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 isTruncated:(_Bool)arg4;	// IMP=0x00000000000543b8
- (void)session:(id)arg1 didReceiveQueryBlockedParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 isTruncated:(_Bool)arg4;	// IMP=0x00000000000540a4
- (void)session:(id)arg1 didReceiveBlockedParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 withType:(unsigned short)arg4 isTruncated:(_Bool)arg5;	// IMP=0x0000000000053d21
- (void)session:(id)arg1 didUnregisterPluginAllocationInfo:(id)arg2;	// IMP=0x0000000000053a43
- (void)session:(id)arg1 didRegisterPluginAllocationInfo:(id)arg2;	// IMP=0x0000000000053765
- (void)session:(id)arg1 didReceivePluginAllocationInfo:(id)arg2;	// IMP=0x0000000000053487
- (void)session:(id)arg1 didReceiveActiveLightweightParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x0000000000052ec9
- (void)session:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x000000000005290b
- (void)session:(id)arg1 participantDidLeaveGroupWithInfo:(id)arg2;	// IMP=0x000000000005262d
- (void)session:(id)arg1 participantDidJoinGroupWithInfo:(id)arg2;	// IMP=0x000000000005234f
- (void)sessionDidLeaveGroup:(id)arg1 error:(id)arg2;	// IMP=0x0000000000052031
- (void)sessionDidJoinGroup:(id)arg1 participantUpdateDictionary:(id)arg2 error:(id)arg3;	// IMP=0x0000000000051a42
- (void)sessionDidJoinGroup:(id)arg1 participantInfo:(id)arg2 error:(id)arg3;	// IMP=0x00000000000515b3
- (void)sessionDidJoinGroup:(id)arg1 participantsInfo:(id)arg2 error:(id)arg3;	// IMP=0x0000000000051111
- (void)groupSessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0000000000050de6
- (void)groupSessionDidTerminate:(id)arg1;	// IMP=0x0000000000050b83
- (void)session:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x000000000005078f
- (void)getParticipantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 delegateQueueCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050508
- (void)createAliasForLocalParticipantIDWithSalt:(id)arg1 delegateQueueCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000502fe
- (void)createAliasForParticipantID:(unsigned long long)arg1 salt:(id)arg2 delegateQueueCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000500fd
- (void)createSessionIDAliasWithSalt:(id)arg1 delegateQueueCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004fed2
- (void)getParticipantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004fda6
- (void)createAliasForParticipantID:(unsigned long long)arg1 salt:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004fc7a
- (id)sessionIDAliasWithSalt:(id)arg1;	// IMP=0x000000000004fc69
- (void)requestDataCryptorForTopic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004f9eb
- (void)_checkAndSendDataCryptor;	// IMP=0x000000000004f347
- (void)requestEncryptionKeyForParticipants:(id)arg1;	// IMP=0x000000000004f24e
- (void)unregisterPluginWithOptions:(id)arg1;	// IMP=0x000000000004f122
- (void)registerPluginWithOptions:(id)arg1;	// IMP=0x000000000004eff6
- (void)requestActiveParticipants;	// IMP=0x000000000004ef1d
@property(readonly, nonatomic) unsigned int sessionEndedReason;
- (void)setRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x000000000004ecd0
- (void)setPreferences:(id)arg1;	// IMP=0x000000000004ebac
- (void)reconnectUPlusOneSession;	// IMP=0x000000000004ead3
- (void)leaveGroupSession;	// IMP=0x000000000004e913
- (void)joinWithOptions:(id)arg1;	// IMP=0x000000000004df36
- (void)setParticipantInfo:(id)arg1;	// IMP=0x000000000004de7b
- (void)updateParticipantData:(id)arg1 withContext:(id)arg2;	// IMP=0x000000000004dd4b
- (void)removeParticipantIDs:(id)arg1;	// IMP=0x000000000004dc49
- (void)manageDesignatedMembers:(id)arg1 withType:(unsigned short)arg2;	// IMP=0x000000000004daa8
- (void)updateMembers:(id)arg1 withContext:(id)arg2 messagingCapabilities:(id)arg3 triggeredLocally:(_Bool)arg4;	// IMP=0x000000000004d862
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(_Bool)arg3;	// IMP=0x000000000004d622
- (void)_cleanupSocketPairConnections;	// IMP=0x000000000004d5f0
@property(readonly, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000004d3ae
- (void)_callDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004d231
- (void)_broadcastNewSessionToDaemon;	// IMP=0x000000000004cb7d
- (void)daemonDisconnected;	// IMP=0x000000000004c9de
- (void)dealloc;	// IMP=0x000000000004c7e1
- (void)invalidate;	// IMP=0x000000000004c654
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 delegateContext:(id)arg4;	// IMP=0x000000000004b414

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

