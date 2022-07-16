//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface ACDKeychainMigrator : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000042484
- (void).cxx_destruct;	// IMP=0x0000000000043c86
- (id)_keychainItemFromAttributesArray:(id)arg1;	// IMP=0x0000000000043a96
- (id)_keychainItemFromAttributes:(id)arg1;	// IMP=0x0000000000043a12
- (id)_keychainItemsForAccount:(id)arg1 accountTypeIdentifiers:(id)arg2;	// IMP=0x00000000000435e7
- (id)keychainItemsForAccounts:(id)arg1;	// IMP=0x0000000000043001
- (id)allKeychainItems;	// IMP=0x0000000000042f9e
- (void)_migrateUUIDKeychainItems:(id)arg1;	// IMP=0x0000000000042cf9
- (void)_validateKeychainItemClass:(id)arg1;	// IMP=0x000000000004288e
- (_Bool)migrateKeychainItem:(id)arg1 toKeybag:(_Bool)arg2;	// IMP=0x00000000000426a5
- (void)migrateAllKeychainItems;	// IMP=0x000000000004256b
- (id)init;	// IMP=0x0000000000042515

@end

