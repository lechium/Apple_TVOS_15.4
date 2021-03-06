//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NWAddressEndpoint;

@interface NEIKEv2TrafficSelector : NSObject <NSCopying>
{
    unsigned char _ipProtocol;	// 8 = 0x8
    unsigned short _startPort;	// 10 = 0xa
    unsigned short _endPort;	// 12 = 0xc
    NWAddressEndpoint *_startAddress;	// 16 = 0x10
    NWAddressEndpoint *_endAddress;	// 24 = 0x18
}

+ (id)copyAllIPv4;	// IMP=0x0000000000092b5b
+ (id)copyAllIPv6;	// IMP=0x0000000000092a6f
+ (id)copyConstrainedTrafficSelectorsForRequest:(id)arg1 reply:(id)arg2;	// IMP=0x000000000009286c
- (void).cxx_destruct;	// IMP=0x0000000000092cc8
@property unsigned char ipProtocol; // @synthesize ipProtocol=_ipProtocol;
@property unsigned short endPort; // @synthesize endPort=_endPort;
@property unsigned short startPort; // @synthesize startPort=_startPort;
@property(retain) NWAddressEndpoint *endAddress; // @synthesize endAddress=_endAddress;
@property(retain) NWAddressEndpoint *startAddress; // @synthesize startAddress=_startAddress;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009292a
@property(readonly) unsigned long long type;
- (id)description;	// IMP=0x00000000000925c7
- (id)init;	// IMP=0x000000000009253f

@end

