//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLJacksonData : PBCodable
{
    unsigned int _fPal;	// 8 = 0x8
    float _lsest;	// 12 = 0xc
    unsigned int _nPairs;	// 16 = 0x10
    float _sumest;	// 20 = 0x14
    struct {
        unsigned int fPal:1;
        unsigned int lsest:1;
        unsigned int sumest:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) unsigned int fPal; // @synthesize fPal=_fPal;
@property(nonatomic) float sumest; // @synthesize sumest=_sumest;
@property(nonatomic) float lsest; // @synthesize lsest=_lsest;
@property(nonatomic) unsigned int nPairs; // @synthesize nPairs=_nPairs;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001294cb
- (unsigned long long)hash;	// IMP=0x001000000012928d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001291cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000129122
- (void)copyTo:(id)arg1;	// IMP=0x00100000001290b5
- (void)writeTo:(id)arg1;	// IMP=0x0010000000129011
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000129004
- (id)dictionaryRepresentation;	// IMP=0x0010000000128b9c
- (id)description;	// IMP=0x0010000000128b25
@property(nonatomic) _Bool hasFPal;
@property(nonatomic) _Bool hasSumest;
@property(nonatomic) _Bool hasLsest;

@end

