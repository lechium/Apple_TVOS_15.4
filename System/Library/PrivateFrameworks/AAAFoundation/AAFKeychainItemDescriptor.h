//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AAFKeychainItemDescriptor : NSObject
{
    unsigned long long _itemClass;	// 8 = 0x8
    unsigned long long _itemAccessible;	// 16 = 0x10
    NSString *_account;	// 24 = 0x18
    NSString *_service;	// 32 = 0x20
    NSString *_server;	// 40 = 0x28
    NSString *_securityDomain;	// 48 = 0x30
    NSString *_label;	// 56 = 0x38
    NSString *_accessGroup;	// 64 = 0x40
    unsigned long long _invisible;	// 72 = 0x48
    unsigned long long _synchronizable;	// 80 = 0x50
    unsigned long long _useDataProtection;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000003325
@property(nonatomic) unsigned long long useDataProtection; // @synthesize useDataProtection=_useDataProtection;
@property(nonatomic) unsigned long long synchronizable; // @synthesize synchronizable=_synchronizable;
@property(nonatomic) unsigned long long invisible; // @synthesize invisible=_invisible;
@property(copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *securityDomain; // @synthesize securityDomain=_securityDomain;
@property(copy, nonatomic) NSString *server; // @synthesize server=_server;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(nonatomic) unsigned long long itemAccessible; // @synthesize itemAccessible=_itemAccessible;
@property(nonatomic) unsigned long long itemClass; // @synthesize itemClass=_itemClass;
- (id)_objectForOptionalBool:(unsigned long long)arg1;	// IMP=0x0000000000003205
- (unsigned long long)_optionalValueFromObject:(id)arg1;	// IMP=0x00000000000031e1
- (unsigned long long)_accessibleWithKeychainAccessible:(id)arg1;	// IMP=0x0000000000003114
- (id)_keychainAccessibleWithAccessible:(unsigned long long)arg1;	// IMP=0x000000000000309e
- (unsigned long long)_classWithKeychainClass:(id)arg1;	// IMP=0x0000000000002ff0
- (id)_keychainClassWithClass:(unsigned long long)arg1;	// IMP=0x0000000000002f8a
- (id)attributes;	// IMP=0x0000000000002d75
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002c88
- (id)initWithAttributes:(id)arg1;	// IMP=0x00000000000029ec

@end

