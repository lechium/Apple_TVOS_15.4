//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PrototypeTools/PTDomainClient-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection, PTDomainInfo, PTSettings, PTTestRecipe;

@interface PTDomain : NSObject <PTDomainClient>
{
    NSXPCConnection *_serverConnection;	// 8 = 0x8
    PTDomainInfo *_domainInfo;	// 16 = 0x10
    NSString *_domainID;	// 24 = 0x18
    PTSettings *_rootSettings;	// 32 = 0x20
    NSMutableDictionary *_testRecipesByIdentifier;	// 40 = 0x28
    PTTestRecipe *_activeTestRecipe;	// 48 = 0x30
    _Bool _registrationRequested;	// 56 = 0x38
    _Bool _registrationCompleted;	// 57 = 0x39
    _Bool _haveSentProxyDefinition;	// 58 = 0x3a
    double _delayBeforeRegisteringAfterInterruption;	// 64 = 0x40
    _Bool _archiveIsApplied;	// 72 = 0x48
}

+ (Class)rootSettingsClass;	// IMP=0x000000000001b782
+ (id)domainName;	// IMP=0x000000000001b75b
+ (id)domainGroupName;	// IMP=0x000000000001b734
+ (id)_sharedInstance;	// IMP=0x0000000000007be6
+ (void)registerTestRecipe:(id)arg1;	// IMP=0x0000000000007b79
+ (id)rootSettings;	// IMP=0x0000000000007b29
- (void).cxx_destruct;	// IMP=0x000000000000a29b
- (void)_noteRegistrationCompleted;	// IMP=0x000000000000a289
- (void)_registerWithServerIfNecessary;	// IMP=0x0000000000009fc6
- (void)_handleConnectionInvalidated;	// IMP=0x0000000000009f9e
- (void)_handleConnectionInterrupted;	// IMP=0x0000000000009ddc
- (void)_tearDownConnection;	// IMP=0x0000000000009ceb
- (void)_createConnection;	// IMP=0x0000000000009906
- (void)_sendProxyDefinitionIfNecessary;	// IMP=0x00000000000096fe
- (void)_updateServerConnectionStatusIfNecessary;	// IMP=0x000000000000965b
- (void)_disableObservationIfNecessary;	// IMP=0x00000000000095df
- (void)_restoreDefaultSettings;	// IMP=0x00000000000094e2
- (void)_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000000930f
- (void)_applyArchive:(id)arg1;	// IMP=0x0000000000009200
- (void)_updateActiveTestRecipe;	// IMP=0x0000000000009120
- (void)_registerTestRecipe:(id)arg1;	// IMP=0x0000000000008d77
- (id)_rootSettings;	// IMP=0x0000000000008d69
- (id)_domainID;	// IMP=0x0000000000008cf4
- (id)_domainInfo;	// IMP=0x0000000000008ca6
- (void)sendActiveTestRecipeEvent:(long long)arg1;	// IMP=0x0000000000008972
- (void)invokeOutletAtKeyPath:(id)arg1;	// IMP=0x00000000000086b7
- (void)setArchiveValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000008578
- (void)restoreDefaultSettings;	// IMP=0x00000000000084e6
- (void)updateSettingsFromArchive:(id)arg1;	// IMP=0x0000000000008412
- (void)dealloc;	// IMP=0x00000000000083c5
- (id)_init;	// IMP=0x0000000000008288

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

