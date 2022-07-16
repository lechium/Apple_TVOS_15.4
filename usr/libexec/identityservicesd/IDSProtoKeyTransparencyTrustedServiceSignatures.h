//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface IDSProtoKeyTransparencyTrustedServiceSignatures : PBCodable
{
    NSMutableArray *_serviceSignatures;	// 8 = 0x8
}

+ (Class)serviceSignaturesType;	// IMP=0x00200000003f8640
- (void).cxx_destruct;	// IMP=0x00200000003f99c0
@property(retain, nonatomic) NSMutableArray *serviceSignatures; // @synthesize serviceSignatures=_serviceSignatures;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000003f9730
- (unsigned long long)hash;	// IMP=0x00100000003f96f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003f95d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000003f9320
- (void)copyTo:(id)arg1;	// IMP=0x00100000003f9210
- (void)writeTo:(id)arg1;	// IMP=0x00100000003f8fe0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000003f8f80
- (id)dictionaryRepresentation;	// IMP=0x00100000003f8740
- (id)description;	// IMP=0x00100000003f8670
- (id)serviceSignaturesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000003f8600
- (unsigned long long)serviceSignaturesCount;	// IMP=0x00100000003f85c0
- (void)addServiceSignatures:(id)arg1;	// IMP=0x00100000003f8520
- (void)clearServiceSignatures;	// IMP=0x00100000003f84e0

@end
