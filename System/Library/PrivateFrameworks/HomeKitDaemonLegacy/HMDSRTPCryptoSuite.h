//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@interface HMDSRTPCryptoSuite : HAPNumberParser <NSSecureCoding>
{
    unsigned long long _srtpCryptoSuite;	// 8 = 0x8
}

+ (id)arrayWithSuites:(id)arg1;	// IMP=0x000000000006e79f
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006e797
@property(readonly, nonatomic) unsigned long long srtpCryptoSuite; // @synthesize srtpCryptoSuite=_srtpCryptoSuite;
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006e72f
- (id)initWithCryptoSuite:(unsigned long long)arg1;	// IMP=0x000000000006e6eb
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006e630
- (id)description;	// IMP=0x000000000006e5bc
- (unsigned long long)hash;	// IMP=0x000000000006e5aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006e527
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006e490
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006e3d3

@end

