//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDPacketizationMode : HAPNumberParser <NSSecureCoding>
{
    unsigned long long _packetizationMode;	// 8 = 0x8
}

+ (id)arrayWithModes:(id)arg1;	// IMP=0x0000000000066e8b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000066e83
@property(readonly, nonatomic) unsigned long long packetizationMode; // @synthesize packetizationMode=_packetizationMode;
- (id)initWithPacketizationMode:(unsigned long long)arg1;	// IMP=0x0000000000066e2e
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000066dd7
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000066d1c
- (id)description;	// IMP=0x0000000000066ca8
- (unsigned long long)hash;	// IMP=0x0000000000066c96
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000066c13
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000066b7c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000066abf

@end

