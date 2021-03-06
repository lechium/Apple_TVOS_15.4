//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOProactiveWidgetItem : PBCodable <NSCopying>
{
    int _timeSinceStart;	// 8 = 0x8
    struct {
        unsigned int has_timeSinceStart:1;
    } _flags;	// 12 = 0xc
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000037ed21
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000037ef21
- (unsigned long long)hash;	// IMP=0x000000000037eeda
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000037ee1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000037edbd
- (void)copyTo:(id)arg1;	// IMP=0x000000000037ed68
- (void)writeTo:(id)arg1;	// IMP=0x000000000037ed3d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000037ed2e
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000037ecc1
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000037ecaf
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000037ebd2
- (id)jsonRepresentation;	// IMP=0x000000000037ebc3
- (id)dictionaryRepresentation;	// IMP=0x000000000037eaf5
- (id)description;	// IMP=0x000000000037ea46
@property(nonatomic) _Bool hasTimeSinceStart;
@property(nonatomic) int timeSinceStart;

@end

