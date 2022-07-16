//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNTCCSimulation-Protocol.h>

@class CNAuditToken, CNUnfairLock, NSNumber;
@protocol CNTCC><CNTCCSimulation, OS_tcc_identity;

@interface CNAuthorizationContext : NSObject <CNTCCSimulation>
{
    CNAuditToken *_cnAuditToken;	// 8 = 0x8
    NSObject<OS_tcc_identity> *_assumedIdentity;	// 16 = 0x10
    id <CNTCC><CNTCCSimulation> _tccServices;	// 24 = 0x18
    NSNumber *_authorizationStatusCachedValue;	// 32 = 0x20
    NSNumber *_shouldAlwaysQueryAuthorizationStatusCachedValue;	// 40 = 0x28
    NSNumber *_isNotesAccessGrantedCachedValue;	// 48 = 0x30
    NSNumber *_isFirstPartyNotesEntitledCachedValue;	// 56 = 0x38
    NSNumber *_isThirdPartyNotesEntitledCachedValue;	// 64 = 0x40
    NSNumber *_isClientTCCWhitelistedCachedValue;	// 72 = 0x48
    NSNumber *_isClientFirstOrSecondPartyCachedValue;	// 80 = 0x50
    CNUnfairLock *_authorizationStatusLock;	// 88 = 0x58
    CNUnfairLock *_notesAccessStatusLock;	// 96 = 0x60
}

+ (_Bool)shouldIgnoreAssumedIdentityForBundleIdentifier:(id)arg1;	// IMP=0x0000000000027135
+ (id)bundleIdentifierForAssumedIdentity:(id)arg1;	// IMP=0x00000000000270ce
+ (_Bool)shouldIgnoreAssumedIdentity:(id)arg1;	// IMP=0x0000000000027026
+ (id)sharedInstance;	// IMP=0x00000000000266fa
+ (id)os_log;	// IMP=0x000000000002669e
- (void).cxx_destruct;	// IMP=0x0000000000028a80
@property(retain, nonatomic) CNUnfairLock *notesAccessStatusLock; // @synthesize notesAccessStatusLock=_notesAccessStatusLock;
@property(retain, nonatomic) CNUnfairLock *authorizationStatusLock; // @synthesize authorizationStatusLock=_authorizationStatusLock;
@property(retain, nonatomic) NSNumber *isClientFirstOrSecondPartyCachedValue; // @synthesize isClientFirstOrSecondPartyCachedValue=_isClientFirstOrSecondPartyCachedValue;
@property(retain, nonatomic) NSNumber *isClientTCCWhitelistedCachedValue; // @synthesize isClientTCCWhitelistedCachedValue=_isClientTCCWhitelistedCachedValue;
@property(retain, nonatomic) NSNumber *isThirdPartyNotesEntitledCachedValue; // @synthesize isThirdPartyNotesEntitledCachedValue=_isThirdPartyNotesEntitledCachedValue;
@property(retain, nonatomic) NSNumber *isFirstPartyNotesEntitledCachedValue; // @synthesize isFirstPartyNotesEntitledCachedValue=_isFirstPartyNotesEntitledCachedValue;
@property(retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue; // @synthesize isNotesAccessGrantedCachedValue=_isNotesAccessGrantedCachedValue;
@property(retain, nonatomic) NSNumber *shouldAlwaysQueryAuthorizationStatusCachedValue; // @synthesize shouldAlwaysQueryAuthorizationStatusCachedValue=_shouldAlwaysQueryAuthorizationStatusCachedValue;
@property(retain, nonatomic) NSNumber *authorizationStatusCachedValue; // @synthesize authorizationStatusCachedValue=_authorizationStatusCachedValue;
@property(retain, nonatomic) id <CNTCC><CNTCCSimulation> tccServices; // @synthesize tccServices=_tccServices;
@property(retain, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity; // @synthesize assumedIdentity=_assumedIdentity;
@property(retain, nonatomic) CNAuditToken *cnAuditToken; // @synthesize cnAuditToken=_cnAuditToken;
- (long long)resolveRequestAuthorizationFuture:(id)arg1;	// IMP=0x0000000000028866
- (id)requestAuthorizationFuture:(long long)arg1;	// IMP=0x0000000000028646
- (_Bool)isAccessGrantedRequestingAccessIfNeeded;	// IMP=0x00000000000285c4
- (_Bool)isClientFirstOrSecondPartyImpl;	// IMP=0x00000000000283f7
- (_Bool)checkTCCEntitlementNamesAllowContacts:(id)arg1;	// IMP=0x0000000000028143
- (_Bool)isClientTCCWhitelistedImpl;	// IMP=0x000000000002809f
- (_Bool)isThirdPartyNotesEntitledImpl;	// IMP=0x0000000000027e1c
- (_Bool)isThirdPartyNotesEntitled;	// IMP=0x0000000000027d37
- (_Bool)isFirstPartyNotesEntitledImpl;	// IMP=0x0000000000027c93
- (_Bool)isFirstPartyNotesEntitled;	// IMP=0x0000000000027bae
- (_Bool)isNotesAccessGrantedImpl;	// IMP=0x0000000000027b49
- (void)updateCachedNotesAccessGrantedIfNeeded;	// IMP=0x0000000000027a8c
- (_Bool)isClientTCCKilledOnAuthorizationChange;	// IMP=0x0000000000027809
- (_Bool)doesClientHaveEntitlement:(id)arg1;	// IMP=0x00000000000274c4
- (_Bool)isClientTCCCoupledProcess;	// IMP=0x00000000000274a8
- (_Bool)isClientTCCUncoupledProcess;	// IMP=0x0000000000027453
- (_Bool)isGreenTeaDevice;	// IMP=0x000000000002744b
- (_Bool)shouldAlwaysQueryAuthorizationStatusImpl;	// IMP=0x00000000000273d4
- (_Bool)shouldAlwaysQueryAuthorizationStatus;	// IMP=0x00000000000272ef
- (void)updateCachedAuthorizationStatusIfNeeded;	// IMP=0x0000000000027192
- (_Bool)isUnitTesting;	// IMP=0x0000000000026fe2
- (void)stopSimulation;	// IMP=0x0000000000026fa5
- (void)simulateStatus:(long long)arg1;	// IMP=0x0000000000026f59
- (id)errorForStatus:(long long)arg1;	// IMP=0x0000000000026f11
- (void)requestAuthorization:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026d36
- (_Bool)requestAccessWithError:(id *)arg1;	// IMP=0x0000000000026cbf
@property(readonly, nonatomic) _Bool isClientFirstOrSecondParty;
@property(readonly, nonatomic) _Bool isClientTCCWhitelisted;
@property(readonly, nonatomic) _Bool isAccessRestricted;
@property(readonly, nonatomic) _Bool isNotesAccessGranted;
@property(readonly, nonatomic) _Bool isAccess2Granted;
@property(readonly, nonatomic) _Bool isAccess1Granted;
@property(readonly, nonatomic) _Bool isAccessGranted;
@property(readonly, nonatomic) long long authorizationStatus;
- (id)initWithAuditToken:(id)arg1 assumedIdentity:(id)arg2 tccServices:(id)arg3;	// IMP=0x0000000000026855
- (id)initWithAuditToken:(id)arg1 assumedIdentity:(id)arg2;	// IMP=0x000000000002677c
- (id)init;	// IMP=0x0000000000026766

@end

