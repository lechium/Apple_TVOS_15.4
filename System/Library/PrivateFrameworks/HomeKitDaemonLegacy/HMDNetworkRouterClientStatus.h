//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HAPTLVSignedNumberValue, HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddressList, NSData, NSString;

@interface HMDNetworkRouterClientStatus : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;	// 8 = 0x8
    NSData *_macAddress;	// 16 = 0x10
    HMDNetworkRouterIPAddressList *_ipAddressList;	// 24 = 0x18
    HAPTLVUnsignedNumberValue *_lanIdentifier;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    HAPTLVSignedNumberValue *_rssi;	// 48 = 0x30
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000482005
- (void).cxx_destruct;	// IMP=0x00000000004815c9
@property(retain, nonatomic) HAPTLVSignedNumberValue *rssi; // @synthesize rssi=_rssi;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *lanIdentifier; // @synthesize lanIdentifier=_lanIdentifier;
@property(retain, nonatomic) HMDNetworkRouterIPAddressList *ipAddressList; // @synthesize ipAddressList=_ipAddressList;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000480e1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000480cec
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000480680
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000047ff66
- (id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddressList:(id)arg3 lanIdentifier:(id)arg4 name:(id)arg5 rssi:(id)arg6;	// IMP=0x000000000047fe3e
- (id)init;	// IMP=0x000000000047fe0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

