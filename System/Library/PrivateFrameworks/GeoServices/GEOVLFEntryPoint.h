//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOVLFEntryPoint : PBCodable <NSCopying>
{
    int _accessPoint;	// 8 = 0x8
    struct {
        unsigned int has_accessPoint:1;
    } _flags;	// 12 = 0xc
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014ddb3d
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014ddd3d
- (unsigned long long)hash;	// IMP=0x00000000014ddcf6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014ddc3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014ddbd9
- (void)copyTo:(id)arg1;	// IMP=0x00000000014ddb84
- (void)writeTo:(id)arg1;	// IMP=0x00000000014ddb59
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014ddb4a
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014ddadd
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014ddacb
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014dd903
- (id)jsonRepresentation;	// IMP=0x00000000014dd8f4
- (id)dictionaryRepresentation;	// IMP=0x00000000014dd7ba
- (id)description;	// IMP=0x00000000014dd70b
- (int)StringAsAccessPoint:(id)arg1;	// IMP=0x00000000014dd640
- (id)accessPointAsString:(int)arg1;	// IMP=0x00000000014dd5b5
@property(nonatomic) _Bool hasAccessPoint;
@property(nonatomic) int accessPoint;

@end
