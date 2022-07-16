//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDate, NSDictionary, NSString;

@interface HMDNetworkRouterFirewallRuleConfiguration : HMFObject <HMFLogging>
{
    _Bool _fullAccessLAN;	// 8 = 0x8
    _Bool _fullAccessWAN;	// 9 = 0x9
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_accessoryIdentifier;	// 16 = 0x10
    NSDate *_lastModifiedTime;	// 24 = 0x18
    NSArray *_lanRules;	// 32 = 0x20
    NSArray *_wanRules;	// 40 = 0x28
}

+ (id)__decodeRulesFromNetworkDeclarations:(id)arg1 key:(id)arg2 class:(Class)arg3 required:(_Bool)arg4;	// IMP=0x0000000000ad7401
+ (_Bool)__decodeFullAccessFromNetworkDeclarations:(id)arg1 key:(id)arg2 fullAccess:(_Bool *)arg3;	// IMP=0x0000000000ad726d
+ (_Bool)__decodeNetworkDeclarationsFromJSONDictionary:(id)arg1 networkDeclarations:(id *)arg2;	// IMP=0x0000000000ad7073
+ (id)logCategory;	// IMP=0x0000000000ad7043
- (void).cxx_destruct;	// IMP=0x0000000000ad6fc6
@property(readonly, nonatomic, getter=hasFullAccessToWAN) _Bool fullAccessWAN; // @synthesize fullAccessWAN=_fullAccessWAN;
@property(readonly, nonatomic) NSArray *wanRules; // @synthesize wanRules=_wanRules;
@property(readonly, nonatomic, getter=hasFullAccessToLAN) _Bool fullAccessLAN; // @synthesize fullAccessLAN=_fullAccessLAN;
@property(readonly, nonatomic) NSArray *lanRules; // @synthesize lanRules=_lanRules;
@property(readonly, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly, nonatomic) _Bool hasAirplayRules;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;	// IMP=0x0000000000ad668d
- (id)initWithAccessoryIdentifier:(id)arg1 jsonDictionary:(id)arg2;	// IMP=0x0000000000ad630f
- (id)initWithAccessoryIdentifier:(id)arg1 lastModifiedTime:(id)arg2 fullAccessLAN:(_Bool)arg3 lanRules:(id)arg4 fullAccessWAN:(_Bool)arg5 wanRules:(id)arg6;	// IMP=0x0000000000ad61f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

