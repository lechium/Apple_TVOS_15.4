//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPCorrectedFlag : PBCodable <NSCopying>
{
    int _flag;	// 8 = 0x8
    _Bool _correctedValue;	// 12 = 0xc
    _Bool _originalValue;	// 13 = 0xd
    struct {
        unsigned int has_flag:1;
        unsigned int has_correctedValue:1;
        unsigned int has_originalValue:1;
    } _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000de0d72
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000de135a
- (unsigned long long)hash;	// IMP=0x0000000000de12db
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000de11b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000de111c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000de108f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000de0ffd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000de0fee
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000de0955
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000de0943
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000de06f4
- (id)jsonRepresentation;	// IMP=0x0000000000de06e5
- (id)dictionaryRepresentation;	// IMP=0x0000000000de052b
- (id)description;	// IMP=0x0000000000de047c
@property(nonatomic) _Bool hasCorrectedValue;
@property(nonatomic) _Bool correctedValue;
@property(nonatomic) _Bool hasOriginalValue;
@property(nonatomic) _Bool originalValue;
- (int)StringAsFlag:(id)arg1;	// IMP=0x0000000000de0366
- (id)flagAsString:(int)arg1;	// IMP=0x0000000000de0311
@property(nonatomic) _Bool hasFlag;
@property(nonatomic) int flag;

@end

