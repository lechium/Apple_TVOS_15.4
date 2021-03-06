//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDNetworkRouterWANFirewall, HMDNetworkRouterWANFirewallRuleList, NSString;

@interface HMDNetworkRouterWANFirewallConfiguration : NSObject <NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterWANFirewall *_type;	// 8 = 0x8
    HMDNetworkRouterWANFirewallRuleList *_ruleList;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004cb53f
+ (id)configurationFromFirewallRuleConfiguration:(id)arg1;	// IMP=0x000000000044e620
+ (id)configurationWithFullAccess;	// IMP=0x000000000044e58f
- (void).cxx_destruct;	// IMP=0x00000000004c7c3f
@property(retain, nonatomic) HMDNetworkRouterWANFirewallRuleList *ruleList; // @synthesize ruleList=_ruleList;
@property(retain, nonatomic) HMDNetworkRouterWANFirewall *type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c7951
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c78c3
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004c75f3
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c71f4
- (id)initWithType:(id)arg1 ruleList:(id)arg2;	// IMP=0x00000000004c715b
- (id)init;	// IMP=0x00000000004c712c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

