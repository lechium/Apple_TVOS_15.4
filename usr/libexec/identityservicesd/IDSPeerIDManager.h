//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeyTransparencyVerifier, IDSPersistentMap, NSMutableDictionary, NSString;
@protocol IDSPeerIDPushHandler, IDSPeerIDQueryHandler, IMUserDefaults;

@interface IDSPeerIDManager : NSObject
{
    NSMutableDictionary *_endpointQueryListeners;	// 8 = 0x8
    NSMutableDictionary *_clientDataUpdateBlocks;	// 16 = 0x10
    NSMutableDictionary *_purgeClientDataBlocks;	// 24 = 0x18
    NSMutableDictionary *_disasterModeTokens;	// 32 = 0x20
    id <IDSPeerIDQueryHandler> _queryHandler;	// 40 = 0x28
    IDSPersistentMap *_peerMap;	// 48 = 0x30
    id <IMUserDefaults> _userDefaults;	// 56 = 0x38
    id <IDSPeerIDPushHandler> _pushHandler;	// 64 = 0x40
    IDSKeyTransparencyVerifier *_keyTransparencyVerifier;	// 72 = 0x48
}

+ (_Bool)_datePassed:(id)arg1;	// IMP=0x002000000055e580
+ (_Bool)shouldUseSelfTokens;	// IMP=0x0010000000552190
+ (id)sharedInstance;	// IMP=0x00100000005520d0
- (void).cxx_destruct;	// IMP=0x0020000000567710
@property(retain, nonatomic) IDSKeyTransparencyVerifier *keyTransparencyVerifier; // @synthesize keyTransparencyVerifier=_keyTransparencyVerifier;
@property(retain, nonatomic) id <IDSPeerIDPushHandler> pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) id <IMUserDefaults> userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) IDSPersistentMap *peerMap; // @synthesize peerMap=_peerMap;
@property(retain, nonatomic) id <IDSPeerIDQueryHandler> queryHandler; // @synthesize queryHandler=_queryHandler;
@property(retain, nonatomic) NSMutableDictionary *disasterModeTokens; // @synthesize disasterModeTokens=_disasterModeTokens;
@property(retain, nonatomic) NSMutableDictionary *purgeClientDataBlocks; // @synthesize purgeClientDataBlocks=_purgeClientDataBlocks;
@property(retain, nonatomic) NSMutableDictionary *clientDataUpdateBlocks; // @synthesize clientDataUpdateBlocks=_clientDataUpdateBlocks;
@property(retain, nonatomic) NSMutableDictionary *endpointQueryListeners; // @synthesize endpointQueryListeners=_endpointQueryListeners;
- (void)didFirstLoadPersistentMap:(id)arg1;	// IMP=0x00100000005673f0
- (void)cleanupExpiredEntriesIfNeeded;	// IMP=0x0010000000566e20
- (void)_asyncCleanupExpiredEntriesIfNeeded;	// IMP=0x0010000000566cb0
- (void)endpointsForURIs:(id)arg1 serviceIdentifier:(id)arg2 localURI:(id)arg3 completion:(CDUnknownBlockType)arg4 queue:(id)arg5;	// IMP=0x0010000000566160
- (void)removeEndpointQueryCompletionBlockForToken:(id)arg1;	// IMP=0x0010000000565df0
- (void)addEndpointQueryCompletionBlock:(CDUnknownBlockType)arg1 forToken:(id)arg2 queue:(id)arg3;	// IMP=0x00100000005658e0
- (void)removePurgeClientDataBlockForToken:(id)arg1;	// IMP=0x00100000005656d0
- (void)addPurgeClientDataBlock:(CDUnknownBlockType)arg1 forToken:(id)arg2;	// IMP=0x0010000000565200
- (void)removeClientDataUpdateBlockForToken:(id)arg1;	// IMP=0x0010000000564ff0
- (void)addClientDataUpdateBlock:(CDUnknownBlockType)arg1 forToken:(id)arg2;	// IMP=0x0010000000564b20
- (void)removeCompletionBlockForToken:(id)arg1;	// IMP=0x0010000000564aa0
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 forToken:(id)arg2;	// IMP=0x0010000000564410
- (id)activeURIsFromURI:(id)arg1 service:(id)arg2;	// IMP=0x0010000000563890
- (_Bool)hasPeerTokensForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3;	// IMP=0x0010000000563580
- (_Bool)hasPeerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3;	// IMP=0x0010000000562fb0
- (void)forgetPeerTokensForService:(id)arg1;	// IMP=0x0010000000562400
- (void)forgetPeerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3;	// IMP=0x0010000000561a00
- (void)forgetSessionTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3;	// IMP=0x0010000000561410
- (id)copyCacheDictionaryRepresentation;	// IMP=0x00100000005613e0
- (void)clearCacheAndPersistImmediately:(_Bool)arg1;	// IMP=0x0010000000561170
- (void)notePeerToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 service:(id)arg4;	// IMP=0x0010000000560270
- (_Bool)startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 context:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x001000000055f2a0
- (_Bool)startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 forSending:(_Bool)arg5 forRefresh:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x001000000055f110
- (id)_peerIDKeysForService:(id)arg1 andFromURI:(id)arg2;	// IMP=0x001000000055eda0
- (id)_endpointsForService:(id)arg1 fromURI:(id)arg2 toURI:(id)arg3 ignoreExpiration:(_Bool)arg4;	// IMP=0x001000000055e5f0
- (id)endpointsForURIs:(id)arg1 service:(id)arg2 fromURI:(id)arg3 ignoringTTL:(_Bool)arg4;	// IMP=0x001000000055e1d0
- (id)endpointForPushToken:(id)arg1 URI:(id)arg2 service:(id)arg3 fromURI:(id)arg4;	// IMP=0x001000000055ded0
- (id)endpointsForURIs:(id)arg1 service:(id)arg2 fromURI:(id)arg3;	// IMP=0x001000000055ddf0
- (_Bool)shouldShowPeerErrorsFor:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4;	// IMP=0x001000000055dd00
- (_Bool)hasProperty:(id)arg1 forURI:(id)arg2 pushToken:(id)arg3 fromURI:(id)arg4 service:(id)arg5;	// IMP=0x001000000055dbe0
- (long long)_valueOfProperty:(id)arg1 forURI:(id)arg2 pushToken:(id)arg3 fromURI:(id)arg4 service:(id)arg5;	// IMP=0x001000000055d390
- (double)timeToCacheURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 forStatus:(unsigned int)arg4;	// IMP=0x001000000055cef0
- (id)sessionTokenForURI:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4 expirationDate:(id *)arg5 refreshDate:(id *)arg6 fromIdentity:(id)arg7 includeSelfDevice:(_Bool)arg8;	// IMP=0x001000000055ca40
- (id)senderCorrelationIdentifierForURI:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4;	// IMP=0x001000000055c770
- (id)senderCorrelationIdentifierForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3;	// IMP=0x001000000055c630
- (id)publicKeyForURI:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4;	// IMP=0x001000000055c360
- (_Bool)hasPublicKeyForURI:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4;	// IMP=0x001000000055c260
- (id)endpointsForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3 fromIdentity:(id)arg4 filterBehavior:(unsigned long long)arg5 allowRefresh:(_Bool)arg6;	// IMP=0x001000000055b690
- (id)sessionTokensForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3 fromIdentity:(id)arg4 includeSelfDevice:(_Bool)arg5 fullyRemoveSelfDevice:(_Bool)arg6 allowRefresh:(_Bool)arg7;	// IMP=0x001000000055a4a0
- (id)sessionTokensForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3 fromIdentity:(id)arg4 includeSelfDevice:(_Bool)arg5 fullyRemoveSelfDevice:(_Bool)arg6;	// IMP=0x001000000055a350
- (id)finishedQueryWithInfo:(id)arg1 forURIs:(id)arg2 fromURI:(id)arg3 service:(id)arg4;	// IMP=0x0010000000555110
- (void)_setDisasterModeToken:(id)arg1 forURI:(id)arg2;	// IMP=0x0010000000554d80
- (id)_disasterModeTokenForURI:(id)arg1;	// IMP=0x0010000000554ae0
- (void)dealloc;	// IMP=0x0010000000554a60
- (id)initWithPushHandler:(id)arg1 queryHandler:(id)arg2 persistentMap:(id)arg3 keyTransparencyVerifier:(id)arg4 userDefaults:(id)arg5;	// IMP=0x00100000005530e0
- (id)init;	// IMP=0x0010000000552260

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
