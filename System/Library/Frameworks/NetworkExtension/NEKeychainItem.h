//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding>
{
    NSString *_password;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSData *_persistentReference;	// 24 = 0x18
    _Bool _legacy;	// 32 = 0x20
    long long _domain;	// 40 = 0x28
    NSString *_accessGroup;	// 48 = 0x30
    NEKeychainItem *_oldItem;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001373a8
- (void).cxx_destruct;	// IMP=0x0000000000139a17
@property(readonly) _Bool legacy; // @synthesize legacy=_legacy;
@property(copy) NEKeychainItem *oldItem; // @synthesize oldItem=_oldItem;
@property(copy) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property long long domain; // @synthesize domain=_domain;
- (void)migrateFromPreferences:(struct __SCPreferences *)arg1;	// IMP=0x0000000000139876
- (void)syncUsingConfiguration:(id)arg1 accountName:(id)arg2 passwordType:(long long)arg3 identifierSuffix:(id)arg4;	// IMP=0x0000000000139407
- (void)remove;	// IMP=0x0000000000139293
- (_Bool)addOrUpdateWithConfiguration:(id)arg1 passwordType:(long long)arg2 accountName:(id)arg3 identifierSuffix:(id)arg4;	// IMP=0x000000000013887f
- (id)copyKindForPasswordType:(long long)arg1;	// IMP=0x0000000000138854
- (id)copyPassword;	// IMP=0x000000000013881c
- (_Bool)copyDataFromKeychainItem:(void *)arg1 outPassword:(id *)arg2 outIdentifier:(id *)arg3 outPersistentReference:(id *)arg4;	// IMP=0x0000000000138279
- (id)copyQueryWithReturnTypes:(id)arg1;	// IMP=0x0000000000138012
@property(copy) NSString *password;
@property(copy) NSData *persistentReference;
- (void)setIdentifierInternal:(id)arg1;	// IMP=0x0000000000137da0
@property(copy) NSString *identifier;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000137a54
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013793d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001377eb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013765d
- (id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;	// IMP=0x0000000000137641
- (id)initWithPersistentReference:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;	// IMP=0x0000000000137582
- (id)initWithIdentifier:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;	// IMP=0x00000000001374c3
- (id)initWithPassword:(id)arg1 domain:(long long)arg2 accessGroup:(id)arg3;	// IMP=0x0000000000137404
- (id)initWithLegacyIdentifier:(id)arg1 domain:(long long)arg2;	// IMP=0x00000000001373ef
- (id)initWithPersistentReference:(id)arg1 domain:(long long)arg2;	// IMP=0x00000000001373da
- (id)initWithIdentifier:(id)arg1 domain:(long long)arg2;	// IMP=0x00000000001373c5
- (id)initWithPassword:(id)arg1 domain:(long long)arg2;	// IMP=0x00000000001373b0

@end

