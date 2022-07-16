//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationIsInstalledQuery
{
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000195f2
+ (id)queryWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000190d8
- (void).cxx_destruct;	// IMP=0x0000000000019758
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001967d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000195fa
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x00000000000195ea
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019173

@end

