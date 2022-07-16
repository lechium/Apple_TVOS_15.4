//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEONavVoiceGuidanceSettings : PBCodable <NSCopying>
{
    int _navVoiceGuidanceLevel;	// 8 = 0x8
    int _transportMode;	// 12 = 0xc
    struct {
        unsigned int has_navVoiceGuidanceLevel:1;
        unsigned int has_transportMode:1;
    } _flags;	// 16 = 0x10
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014ba68b
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014ba952
- (unsigned long long)hash;	// IMP=0x00000000014ba8f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014ba807
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014ba78a
- (void)copyTo:(id)arg1;	// IMP=0x00000000014ba718
- (void)writeTo:(id)arg1;	// IMP=0x00000000014ba6a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014ba698
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014ba3aa
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014ba398
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014ba067
- (id)jsonRepresentation;	// IMP=0x00000000014ba058
- (id)dictionaryRepresentation;	// IMP=0x00000000014b9e56
- (id)description;	// IMP=0x00000000014b9da7
- (int)StringAsTransportMode:(id)arg1;	// IMP=0x00000000014b9cb8
- (id)transportModeAsString:(int)arg1;	// IMP=0x00000000014b9c1f
@property(nonatomic) _Bool hasTransportMode;
@property(nonatomic) int transportMode;
- (int)StringAsNavVoiceGuidanceLevel:(id)arg1;	// IMP=0x00000000014b9b08
- (id)navVoiceGuidanceLevelAsString:(int)arg1;	// IMP=0x00000000014b9a89
@property(nonatomic) _Bool hasNavVoiceGuidanceLevel;
@property(nonatomic) int navVoiceGuidanceLevel;

@end

