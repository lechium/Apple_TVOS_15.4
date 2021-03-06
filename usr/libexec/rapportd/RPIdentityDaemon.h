//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUCoalescer, CUSystemMonitor, MISSING_TYPE, NSArray, NSMutableArray, NSString, RPIdentity;
@protocol OS_dispatch_queue;

@interface RPIdentityDaemon : NSObject
{
    int _homeViewChangeToken;	// 8 = 0x8
    int _homeViewReadyToken;	// 12 = 0xc
    CUCoalescer *_identitiesChangedCoalescer;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    unsigned long long _keychainRefetchTicks;	// 32 = 0x20
    NSArray *_pairedDeviceIdentities;	// 40 = 0x28
    int _pairedDevicesNotifier;	// 48 = 0x30
    _Bool _prefFamilyResolve;	// 52 = 0x34
    _Bool _prefFriendResolve;	// 53 = 0x35
    _Bool _prefOwnerResolve;	// 54 = 0x36
    MISSING_TYPE *_prefPairedResolve;	// 55 = 0x37
    _Bool _prefSharedHomeResolve;	// 56 = 0x38
    NSArray *_sameAccountDeviceIdentities;	// 64 = 0x40
    RPIdentity *_selfIdentityCache;	// 72 = 0x48
    NSMutableArray *_sharedHomeDeviceIdentities;	// 80 = 0x50
    NSMutableArray *_sharedHomeExtraDeviceIdentities;	// 88 = 0x58
    CUSystemMonitor *_systemMonitor;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 104 = 0x68
    RPIdentity *_homeKitIdentity;	// 112 = 0x70
}

+ (id)sharedIdentityDaemon;	// IMP=0x0020000000044eec
- (void).cxx_destruct;	// IMP=0x002000000004e479
@property(retain, nonatomic) RPIdentity *homeKitIdentity; // @synthesize homeKitIdentity=_homeKitIdentity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (unsigned int)_updateSelfIdentityPublic:(id)arg1 privateIdentity:(id)arg2;	// IMP=0x001000000004dd5d
- (unsigned int)_updateSelfIdentityPrivate:(id)arg1 create:(_Bool)arg2;	// IMP=0x001000000004d92a
- (void)_removeSelfIdentityPublicWithPrivateIdentity:(id)arg1;	// IMP=0x001000000004d6ce
- (void)_saveSelfIdentityPublicWithPrivateIdentity:(id)arg1 force:(_Bool)arg2;	// IMP=0x001000000004d019
- (void)_saveSelfIdentityPrivate:(id)arg1;	// IMP=0x001000000004cd9f
- (void)_loadSelfIdentity:(_Bool)arg1;	// IMP=0x001000000004c908
- (void)_updateSameAccountIdentities;	// IMP=0x001000000004c002
- (void)_updatePairedDeviceIdentities;	// IMP=0x001000000004b8d3
- (void)_triggerKeychainRefetch;	// IMP=0x001000000004b6c9
- (void)_postIdentitiesChangedNotification;	// IMP=0x001000000004b5cd
- (void)_ensureStopped;	// IMP=0x001000000004b476
- (void)_ensureStarted;	// IMP=0x001000000004b043
- (_Bool)saveIdentityWithIDSDeviceID:(id)arg1 message:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004acd0
- (_Bool)saveIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004a994
- (_Bool)removeIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004a660
- (void)addSharedHomeIdentityWithRPMessage:(id)arg1;	// IMP=0x001000000004a070
- (void)addSelfIdentityInfoToMessage:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x0010000000049d69
- (void)getPairedIdentityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000049a2f
- (id)identityOfSelfAndReturnError:(id *)arg1;	// IMP=0x00100000000498f0
- (id)_identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000048dc4
- (id)identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x0010000000048d35
- (unsigned int)resolveIdentityTypesForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3;	// IMP=0x0010000000048898
- (id)resolveIdentityForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x00100000000480de
- (id)resolveIdentityForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x0010000000047462
- (id)resolveIdentitiesForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x00100000000473a3
- (void)resolvableAccessoriesUpdated:(id)arg1;	// IMP=0x0010000000046a3c
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x0010000000046a03
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000469fb
- (void)_update;	// IMP=0x00100000000469e9
- (void)regenerateSelfIdentity:(id)arg1;	// IMP=0x001000000004695d
- (void)prefsChanged;	// IMP=0x001000000004664d
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x0010000000046332
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x00100000000461c3
- (void)_invalidated;	// IMP=0x001000000004614e
- (void)_invalidate;	// IMP=0x00100000000460a6
- (void)invalidate;	// IMP=0x0010000000046045
- (void)_activate;	// IMP=0x0010000000045ef4
- (void)activate;	// IMP=0x0010000000045e91
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000044fc0
- (id)init;	// IMP=0x0010000000044f41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

