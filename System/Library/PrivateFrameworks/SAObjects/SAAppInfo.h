//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSString, SAGlance, SASiriSupport, SAStarkSupport, SASyncAppIdentifyingInfo;

@interface SAAppInfo
{
}

+ (id)appInfoWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002ff83
+ (id)appInfo;	// IMP=0x000000000002ff71
@property(nonatomic) _Bool supportsUniversalSearchSubscription;
@property(copy, nonatomic) NSArray *supportedSchemes;
@property(copy, nonatomic) NSArray *supportedCommands;
@property(retain, nonatomic) SAStarkSupport *starkSupport;
@property(copy, nonatomic) NSDictionary *spotlightNameMap;
@property(copy, nonatomic) NSString *spotlightName;
@property(copy, nonatomic) NSDictionary *spokenNameMap;
@property(copy, nonatomic) NSString *spokenName;
@property(retain, nonatomic) SASiriSupport *siriSupport;
@property(copy, nonatomic) NSString *providerName;
@property(copy, nonatomic) NSNumber *nowPlayingAppWithBrowsableContent;
@property(nonatomic) _Bool isNanoApp;
@property(nonatomic) _Bool isMacApp;
@property(nonatomic) _Bool hidden;
@property(nonatomic) _Bool hasSiriIntegration;
@property(retain, nonatomic) SAGlance *glance;
@property(copy, nonatomic) NSDictionary *displayAppNameMap;
@property(copy, nonatomic) NSString *displayAppName;
@property(copy, nonatomic) NSString *containerName;
@property(copy, nonatomic) NSDictionary *carPlayAlternativeDisplayNameMap;
@property(copy, nonatomic) NSString *carPlayAlternativeDisplayName;
@property(nonatomic) _Bool betaApp;
@property(copy, nonatomic) NSString *appVersion;
@property(copy, nonatomic) NSDictionary *appNameSynonymsMap;
@property(copy, nonatomic) NSArray *appNameSynonyms;
@property(copy, nonatomic) NSDictionary *appNameMap;
@property(copy, nonatomic) NSString *appName;
@property(retain, nonatomic) SASyncAppIdentifyingInfo *appIdentifyingInfo;
@property(copy, nonatomic) NSString *appId;
@property(copy, nonatomic) NSString *adamId;
- (id)encodedClassName;	// IMP=0x000000000002ff64
- (id)groupIdentifier;	// IMP=0x000000000002ff50

@end

