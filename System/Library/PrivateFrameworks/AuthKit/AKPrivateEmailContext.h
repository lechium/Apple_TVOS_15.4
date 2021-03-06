//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface AKPrivateEmailContext : NSObject <NSSecureCoding>
{
    NSString *_key;	// 8 = 0x8
    NSString *_altDSID;	// 16 = 0x10
    NSString *_proxiedAppID;	// 24 = 0x18
    NSString *_proxiedBundleIdentifier;	// 32 = 0x20
    NSString *_proxiedAppName;	// 40 = 0x28
    NSString *_upgradeBundleIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003a5c0
- (void).cxx_destruct;	// IMP=0x000000000003a883
@property(readonly, copy, nonatomic) NSString *upgradeBundleIdentifier; // @synthesize upgradeBundleIdentifier=_upgradeBundleIdentifier;
@property(copy, nonatomic) NSString *proxiedAppName; // @synthesize proxiedAppName=_proxiedAppName;
@property(copy, nonatomic) NSString *proxiedBundleIdentifier; // @synthesize proxiedBundleIdentifier=_proxiedBundleIdentifier;
@property(copy, nonatomic) NSString *proxiedAppID; // @synthesize proxiedAppID=_proxiedAppID;
@property(readonly, copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a685
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003a5c8
- (id)description;	// IMP=0x000000000003a593
- (id)initWithContext:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000003a44f
- (id)initWithContext:(id)arg1 client:(id)arg2;	// IMP=0x000000000003a392
- (id)initWithKey:(id)arg1 altDSID:(id)arg2;	// IMP=0x000000000003a2f9
- (id)initWithKey:(id)arg1;	// IMP=0x000000000003a28a

@end

