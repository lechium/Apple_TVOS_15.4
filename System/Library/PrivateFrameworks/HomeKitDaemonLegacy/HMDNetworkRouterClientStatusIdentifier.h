//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HAPTLVProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, HMDNetworkRouterIPAddress, NSData, NSString;

@interface HMDNetworkRouterClientStatusIdentifier : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;	// 8 = 0x8
    NSData *_macAddress;	// 16 = 0x10
    HMDNetworkRouterIPAddress *_ipAddress;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000484358
- (void).cxx_destruct;	// IMP=0x0000000000484325
@property(retain, nonatomic) HMDNetworkRouterIPAddress *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(retain, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000483f29
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000483e71
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000483ab1
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000048360e
- (id)initWithClientIdentifier:(id)arg1 macAddress:(id)arg2 ipAddress:(id)arg3;	// IMP=0x0000000000483557
- (id)init;	// IMP=0x0000000000483528

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

