//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TASKEdgeDnsInput;

@interface TASKInput : PBCodable
{
    TASKEdgeDnsInput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003edd8
@property(retain, nonatomic) TASKEdgeDnsInput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003ed59
- (unsigned long long)hash;	// IMP=0x001000000003ed3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003eca2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003ec2a
- (void)copyTo:(id)arg1;	// IMP=0x001000000003ec00
- (void)writeTo:(id)arg1;	// IMP=0x001000000003ebdc
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003ebcf
- (id)dictionaryRepresentation;	// IMP=0x001000000003e98b
- (id)description;	// IMP=0x001000000003e8dc
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end

