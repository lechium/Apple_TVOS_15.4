//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemon/HMDNetworkRouterWANRule-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddress, HMDNetworkRouterProtocol, NSString;

@interface HMDNetworkRouterWANPortRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HAPTLVProtocol>
{
    HMDNetworkRouterProtocol *_protocol;	// 8 = 0x8
    NSString *_hostDNSName;	// 16 = 0x10
    HMDNetworkRouterIPAddress *_hostIPStart;	// 24 = 0x18
    HMDNetworkRouterIPAddress *_hostIPEnd;	// 32 = 0x20
    HAPTLVUnsignedNumberValue *_hostPortStart;	// 40 = 0x28
    HAPTLVUnsignedNumberValue *_hostPortEnd;	// 48 = 0x30
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004cb3e9
- (void).cxx_destruct;	// IMP=0x00000000004cb395
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *hostPortEnd; // @synthesize hostPortEnd=_hostPortEnd;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *hostPortStart; // @synthesize hostPortStart=_hostPortStart;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *hostIPEnd; // @synthesize hostIPEnd=_hostIPEnd;
@property(retain, nonatomic) HMDNetworkRouterIPAddress *hostIPStart; // @synthesize hostIPStart=_hostIPStart;
@property(retain, nonatomic) NSString *hostDNSName; // @synthesize hostDNSName=_hostDNSName;
@property(retain, nonatomic) HMDNetworkRouterProtocol *protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cabeb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004caab8
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004ca44c
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004c9d59
- (id)initWithProtocol:(id)arg1 hostDNSName:(id)arg2 hostIPStart:(id)arg3 hostIPEnd:(id)arg4 hostPortStart:(id)arg5 hostPortEnd:(id)arg6;	// IMP=0x00000000004c9c31
- (id)init;	// IMP=0x00000000004c9c02
- (void)addTo:(id)arg1;	// IMP=0x000000000044dcc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
