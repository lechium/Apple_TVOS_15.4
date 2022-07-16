//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface WFManagedConfigurationProfile : NSObject
{
    NSSet *_managedAppBundleIDs;	// 8 = 0x8
    ACAccount *_primaryAppleAccount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_operatingQueue;	// 24 = 0x18
    ACAccountStore *_accountStore;	// 32 = 0x20
    NSMutableDictionary *_accounts;	// 40 = 0x28
    NSMutableDictionary *_accountIdentifiersByDataClass;	// 48 = 0x30
}

+ (id)defaultProfile;	// IMP=0x00000000000b3882
- (void).cxx_destruct;	// IMP=0x00000000000b3435
@property(readonly, nonatomic) NSMutableDictionary *accountIdentifiersByDataClass; // @synthesize accountIdentifiersByDataClass=_accountIdentifiersByDataClass;
@property(readonly, nonatomic) NSMutableDictionary *accounts; // @synthesize accounts=_accounts;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *operatingQueue; // @synthesize operatingQueue=_operatingQueue;
- (void)handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x00000000000b330a
- (void)removeCachedChildrenAccountForAccount:(id)arg1;	// IMP=0x00000000000b31af
@property(readonly, copy, nonatomic) NSSet *managedAppBundleIDs; // @synthesize managedAppBundleIDs=_managedAppBundleIDs;
@property(readonly, nonatomic) ACAccount *primaryAppleAccount; // @synthesize primaryAppleAccount=_primaryAppleAccount;
- (id)initWithAccountStore:(id)arg1;	// IMP=0x00000000000b2e78
- (id)init;	// IMP=0x00000000000b2e36
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(_Bool)arg3;	// IMP=0x00000000000b3b44
- (unsigned long long)managedLevelForContentOfURLs:(id)arg1;	// IMP=0x00000000000b399e
- (unsigned long long)managedLevelForContentOfURL:(id)arg1;	// IMP=0x00000000000b3996
- (_Bool)isAccountBasedSourceApp:(id)arg1;	// IMP=0x00000000000b398e
- (_Bool)isAccountManaged:(id)arg1;	// IMP=0x00000000000b3986
- (_Bool)isAppManaged:(id)arg1;	// IMP=0x00000000000b390f
@property(readonly) _Bool mayOpenFromManagedToUnmanaged;
@property(readonly) _Bool mayOpenFromUnmanagedToManaged;
@property(readonly) _Bool isOpenInRestrictionInEffect;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;	// IMP=0x00000000000b3c9c
- (id)accountWithIdentifier:(id)arg1;	// IMP=0x00000000000b3b5a
@property(readonly) _Bool isWallpaperModificationAllowed;
@property(readonly) _Bool isScreenShotAllowed;
@property(readonly) _Bool isBluetoothModificationAllowed;
@property(readonly) _Bool isWiFiPowerModificationAllowed;

@end
