//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HMDNetworkRouterWANFirewall, HMDNetworkRouterWANFirewallRuleList, NSString;

@interface HMDNetworkRouterWANFirewallConfiguration : NSObject <NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterWANFirewall *_type;	// 8 = 0x8
    HMDNetworkRouterWANFirewallRuleList *_ruleList;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000047c537
+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;	// IMP=0x00000000004077b3
+ (id)configurationWithFullAccess;	// IMP=0x0000000000407722
- (void).cxx_destruct;	// IMP=0x0000000000478c37
@property(retain, nonatomic) HMDNetworkRouterWANFirewallRuleList *ruleList; // @synthesize ruleList=_ruleList;
@property(retain, nonatomic) HMDNetworkRouterWANFirewall *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000478949
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004788bb
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004785eb
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004781ec
- (id)initWithType:(id)arg1 ruleList:(id)arg2;	// IMP=0x0000000000478153
- (id)init;	// IMP=0x0000000000478124

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

