//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDNetworkRouterLANRule-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterAdvertisementProtocol, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterRuleDirection, HMDNetworkRouterServiceType, NSString;

@interface HMDNetworkRouterDynamicPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterRuleDirection *_direction;	// 8 = 0x8
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;	// 16 = 0x10
    HMDNetworkRouterProtocol *_protocol;	// 24 = 0x18
    HMDNetworkRouterAdvertisementProtocol *_advertisementProtocol;	// 32 = 0x20
    HAPTLVUnsignedNumberValue *_flags;	// 40 = 0x28
    HMDNetworkRouterServiceType *_serviceType;	// 48 = 0x30
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004754ac
+ (id)ruleFromFirewallRuleLAN:(id)arg1;	// IMP=0x00000000004099aa
+ (id)ruleForHAP;	// IMP=0x00000000004097f9
- (void).cxx_destruct;	// IMP=0x0000000000474c09
@property(retain, nonatomic) HMDNetworkRouterServiceType *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) HMDNetworkRouterAdvertisementProtocol *advertisementProtocol; // @synthesize advertisementProtocol=_advertisementProtocol;
@property(retain, nonatomic) HMDNetworkRouterProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047445f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047432c
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000473cc0
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004735cd
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 advertisementProtocol:(id)arg4 flags:(id)arg5 serviceType:(id)arg6;	// IMP=0x00000000004734a5
- (id)init;	// IMP=0x0000000000473476
- (void)addTo:(id)arg1;	// IMP=0x000000000040743f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

