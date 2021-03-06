//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class CTIPFilterEndpoint, NSNumber;

@interface CTQoSFilter : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _filterId;	// 8 = 0x8
    unsigned long long _precedence;	// 16 = 0x10
    CTIPFilterEndpoint *_src;	// 24 = 0x18
    CTIPFilterEndpoint *_dst;	// 32 = 0x20
    NSNumber *_tos;	// 40 = 0x28
    NSNumber *_tosMask;	// 48 = 0x30
    NSNumber *_flowLabel;	// 56 = 0x38
    unsigned long long _ipProtocol;	// 64 = 0x40
    unsigned long long _ipFamilyProtocol;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003a209
- (void).cxx_destruct;	// IMP=0x000000000003a40a
@property(nonatomic) unsigned long long ipFamilyProtocol; // @synthesize ipFamilyProtocol=_ipFamilyProtocol;
@property(nonatomic) unsigned long long ipProtocol; // @synthesize ipProtocol=_ipProtocol;
@property(retain, nonatomic) NSNumber *flowLabel; // @synthesize flowLabel=_flowLabel;
@property(retain, nonatomic) NSNumber *tosMask; // @synthesize tosMask=_tosMask;
@property(retain, nonatomic) NSNumber *tos; // @synthesize tos=_tos;
@property(retain, nonatomic) CTIPFilterEndpoint *dst; // @synthesize dst=_dst;
@property(retain, nonatomic) CTIPFilterEndpoint *src; // @synthesize src=_src;
@property(nonatomic) unsigned long long precedence; // @synthesize precedence=_precedence;
@property(nonatomic) unsigned long long filterId; // @synthesize filterId=_filterId;
@property(readonly, nonatomic) _Bool isAnyIpFamilyProtocol;
@property(readonly, nonatomic) _Bool isIpv6;
@property(readonly, nonatomic) _Bool isIpv4;
@property(readonly, nonatomic) _Bool isAnyIpProtocol;
@property(readonly, nonatomic) _Bool isUdp;
@property(readonly, nonatomic) _Bool isTcp;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a036
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039e67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039c2c
- (id)description;	// IMP=0x000000000003993e

@end

