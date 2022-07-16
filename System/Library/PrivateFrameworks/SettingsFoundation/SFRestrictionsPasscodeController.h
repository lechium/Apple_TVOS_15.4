//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SFRestrictionsPasscodeController : NSObject
{
}

+ (void)removePasswordForHashAndSaltLegacyRestrictions;	// IMP=0x000000000000bb36
+ (id)hashForHashAndSaltLegacyRestrictions;	// IMP=0x000000000000bad1
+ (id)saltForHashAndSaltLegacyRestrictions;	// IMP=0x000000000000ba6c
+ (id)newHashDataForPassword:(id)arg1 andSalt:(id)arg2;	// IMP=0x000000000000b9d1
+ (id)_generateSalt;	// IMP=0x000000000000b990
+ (_Bool)legacyRestrictionsInEffect;	// IMP=0x000000000000b924
+ (id)pinFromHashAndSaltLegacyPassword;	// IMP=0x000000000000b7e6
+ (_Bool)hasHashAndSaltLegacyPassword;	// IMP=0x000000000000b7ac
+ (void)_setKeychainPasswordForRestrictions:(id)arg1;	// IMP=0x000000000000b5c4
+ (id)_keychainPasswordForRestrictions;	// IMP=0x000000000000b4c9
+ (void)_removeKeychainPasswordForRestrictions;	// IMP=0x000000000000b3fe
+ (_Bool)validatePIN:(id)arg1;	// IMP=0x000000000000b372
+ (_Bool)settingEnabled;	// IMP=0x000000000000b309
+ (void)setPIN:(id)arg1;	// IMP=0x000000000000b201
+ (void)migrateRestrictionsPasscode;	// IMP=0x000000000000b03b
+ (void)_migrateRestrictionsPasscodeIfNeeded;	// IMP=0x000000000000affe

@end

