//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface MCDNSProxyPayload
{
    NSString *_appBundleIdentifier;	// 80 = 0x50
    NSString *_providerBundleIdentifier;	// 88 = 0x58
    NSDictionary *_providerConfiguration;	// 96 = 0x60
}

+ (id)localizedPluralForm;	// IMP=0x000000000006f5f5
+ (id)localizedSingularForm;	// IMP=0x000000000006f5e4
+ (id)typeStrings;	// IMP=0x000000000006f57d
- (void).cxx_destruct;	// IMP=0x00000000000700f2
@property(readonly, copy, nonatomic) NSDictionary *providerConfiguration; // @synthesize providerConfiguration=_providerConfiguration;
@property(readonly, copy, nonatomic) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
- (id)installationWarnings;	// IMP=0x000000000006ffaf
- (id)payloadDescriptionKeyValueSections;	// IMP=0x000000000006fda8
- (id)subtitle2Description;	// IMP=0x000000000006fd96
- (id)subtitle2Label;	// IMP=0x000000000006fd3b
- (id)subtitle1Description;	// IMP=0x000000000006fd29
- (id)subtitle1Label;	// IMP=0x000000000006fd16
- (id)verboseDescription;	// IMP=0x000000000006fba9
@property(readonly, copy, nonatomic) NSDictionary *configurationDictionary;
- (id)stubDictionary;	// IMP=0x000000000006f9b5
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000006f606

@end

