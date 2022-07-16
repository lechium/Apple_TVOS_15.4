//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDNetworkRouterLANRule-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddress, HMDNetworkRouterLANIdentifierList, HMDNetworkRouterProtocol, HMDNetworkRouterRuleDirection, NSString;

@interface HMDNetworkRouterStaticPortRule : NSObject <HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterRuleDirection *_direction;	// 8 = 0x8
    HMDNetworkRouterLANIdentifierList *_lanIdentifierList;	// 16 = 0x10
    HMDNetworkRouterProtocol *_protocol;	// 24 = 0x18
    HMDNetworkRouterIPAddress *_destinationIPAddress;	// 32 = 0x20
    HAPTLVUnsignedNumberValue *_destinationPortStart;	// 40 = 0x28
    HAPTLVUnsignedNumberValue *_destinationPortEnd;	// 48 = 0x30
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000476d3d
+ (id)ruleFromFirewallRuleLAN:(id)arg1;	// IMP=0x000000000040855b
- (void).cxx_destruct;	// IMP=0x0000000000476ce9
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *destinationPortEnd; // @synthesize destinationPortEnd=_destinationPortEnd;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *destinationPortStart; // @synthesize destinationPortStart=_destinationPortStart;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress; // @synthesize destinationIPAddress=_destinationIPAddress;
@property(retain, nonatomic) HMDNetworkRouterProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList; // @synthesize lanIdentifierList=_lanIdentifierList;
@property(retain, nonatomic) HMDNetworkRouterRuleDirection *direction; // @synthesize direction=_direction;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047653f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047640c
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000475da0
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004756ae
- (id)initWithDirection:(id)arg1 lanIdentifierList:(id)arg2 protocol:(id)arg3 destinationIPAddress:(id)arg4 destinationPortStart:(id)arg5 destinationPortEnd:(id)arg6;	// IMP=0x0000000000475586
- (id)init;	// IMP=0x0000000000475557
- (void)addTo:(id)arg1;	// IMP=0x0000000000406f9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
