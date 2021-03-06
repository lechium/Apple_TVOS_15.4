//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSDeveloperServiceProtocol-Protocol.h>
#import <VideoSubscriberAccount/VSRemoteNotifierDelegate-Protocol.h>

@class NSString, VSPersistentContainer, VSRemoteNotifier;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VSDeveloperModeStore : NSObject <VSRemoteNotifierDelegate, VSDeveloperServiceProtocol>
{
    VSPersistentContainer *_persistentContainer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_settingsQueue;	// 16 = 0x10
    VSRemoteNotifier *_serviceChangeRemoteNotifier;	// 24 = 0x18
    VSRemoteNotifier *_settingsChangeRemoteNotifier;	// 32 = 0x20
    VSRemoteNotifier *_providersChangeRemoteNotifier;	// 40 = 0x28
    VSRemoteNotifier *_accountStoreChangeRemoteNotifier;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004213d
@property(retain, nonatomic) VSRemoteNotifier *accountStoreChangeRemoteNotifier; // @synthesize accountStoreChangeRemoteNotifier=_accountStoreChangeRemoteNotifier;
@property(retain, nonatomic) VSRemoteNotifier *providersChangeRemoteNotifier; // @synthesize providersChangeRemoteNotifier=_providersChangeRemoteNotifier;
@property(retain, nonatomic) VSRemoteNotifier *settingsChangeRemoteNotifier; // @synthesize settingsChangeRemoteNotifier=_settingsChangeRemoteNotifier;
@property(retain, nonatomic) VSRemoteNotifier *serviceChangeRemoteNotifier; // @synthesize serviceChangeRemoteNotifier=_serviceChangeRemoteNotifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue; // @synthesize settingsQueue=_settingsQueue;
@property(retain, nonatomic) VSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (void)updateDeveloperSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041685
- (void)fetchDeveloperSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040f56
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040650
- (void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040544
- (void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040085
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f218
- (id)_nullableObjectOrNSNull:(id)arg1;	// IMP=0x000000000003f1c1
- (void)_noteProvidersDidChange;	// IMP=0x000000000003f184
- (void)_noteSettingsDidChange;	// IMP=0x000000000003f147
- (void)_noteServiceDidChange;	// IMP=0x000000000003f10a
- (void)_performIdentityProviderBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f098
- (id)_developerIdentityProviderInContext:(id)arg1;	// IMP=0x000000000003f015
- (id)_identityProviderFetchRequest;	// IMP=0x000000000003efc5
- (void)migrateSettingsPropertyFileIfNecessary;	// IMP=0x000000000003ec63
- (id)legacySettingsPropertiesPath;	// IMP=0x000000000003ea84
- (id)settingsPropertiesURL;	// IMP=0x000000000003e7c8
- (id)init;	// IMP=0x000000000003e682

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

