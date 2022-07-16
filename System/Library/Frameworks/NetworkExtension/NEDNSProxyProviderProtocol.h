//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface NEDNSProxyProviderProtocol
{
    NSDictionary *_providerConfiguration;	// 8 = 0x8
    NSString *_providerBundleIdentifier;	// 16 = 0x10
    NSString *_pluginType;	// 24 = 0x18
    NSString *_designatedRequirement;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000413e1
- (void).cxx_destruct;	// IMP=0x0000000000041bb4
@property(copy) NSString *designatedRequirement; // @synthesize designatedRequirement=_designatedRequirement;
@property(copy) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property(copy) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property(copy) NSDictionary *providerConfiguration; // @synthesize providerConfiguration=_providerConfiguration;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000041952
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x00000000000418df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000417d2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004168c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004148a
- (id)initWithPluginType:(id)arg1;	// IMP=0x000000000004141d
- (id)init;	// IMP=0x00000000000413e9

@end

