//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMCoarseElevation : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
    int _source;	// 12 = 0xc
    struct {
        unsigned int source:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000035204f
- (unsigned long long)hash;	// IMP=0x0010000000352013
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000351fa5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000351f36
- (void)copyTo:(id)arg1;	// IMP=0x0010000000351f05
- (void)writeTo:(id)arg1;	// IMP=0x0010000000351eb4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000351ea7
- (id)dictionaryRepresentation;	// IMP=0x0010000000351b5f
- (id)description;	// IMP=0x0010000000351ae8
- (int)StringAsSource:(id)arg1;	// IMP=0x0010000000351aa1
- (id)sourceAsString:(int)arg1;	// IMP=0x0010000000351a62
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end
