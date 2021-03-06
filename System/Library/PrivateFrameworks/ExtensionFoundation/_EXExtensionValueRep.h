//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSURL, NSUUID;

__attribute__((visibility("hidden")))
@interface _EXExtensionValueRep
{
    unsigned int _platform;	// 8 = 0x8
    NSString *_extensionPointIdentifier;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSUUID *_UUID;	// 32 = 0x20
    NSString *_localizedName;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
    NSURL *_containingURL;	// 56 = 0x38
    NSDictionary *_sdkDictionary;	// 64 = 0x40
    NSDictionary *_extensionDictionary;	// 72 = 0x48
    NSDictionary *_attributes;	// 80 = 0x50
    NSDictionary *_entitlements;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022767
- (void).cxx_destruct;	// IMP=0x0000000000022c4c
- (id)entitlements;	// IMP=0x0000000000022c36
- (id)attributes;	// IMP=0x0000000000022c20
- (id)extensionDictionary;	// IMP=0x0000000000022c0a
- (id)sdkDictionary;	// IMP=0x0000000000022bf4
- (id)containingURL;	// IMP=0x0000000000022bde
- (id)url;	// IMP=0x0000000000022bc8
- (id)localizedName;	// IMP=0x0000000000022bb2
- (id)UUID;	// IMP=0x0000000000022b9c
- (unsigned int)platform;	// IMP=0x0000000000022b8c
- (id)bundleIdentifier;	// IMP=0x0000000000022b76
- (id)extensionPointIdentifier;	// IMP=0x0000000000022b60
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002276f
- (id)entitlementNamed:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00000000000226de

@end

