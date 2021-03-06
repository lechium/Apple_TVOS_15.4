//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOFormattedStringMetaData : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _realtimeStatus;	// 16 = 0x10
    int _spokenPrivacyFilterType;	// 20 = 0x14
    struct {
        unsigned int has_realtimeStatus:1;
        unsigned int has_spokenPrivacyFilterType:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000885c27
- (void).cxx_destruct;	// IMP=0x0000000000885ff6
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000885fb0
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000885f29
- (unsigned long long)hash;	// IMP=0x0000000000885ec7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000885dde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000885d41
- (void)copyTo:(id)arg1;	// IMP=0x0000000000885ccf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000885c43
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000885c34
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000885bc7
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000885bb5
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000088586e
- (id)jsonRepresentation;	// IMP=0x000000000088575c
- (id)dictionaryRepresentation;	// IMP=0x0000000000885442
- (id)description;	// IMP=0x0000000000885393
- (int)StringAsSpokenPrivacyFilterType:(id)arg1;	// IMP=0x00000000008852e4
- (id)spokenPrivacyFilterTypeAsString:(int)arg1;	// IMP=0x0000000000885267
@property(nonatomic) _Bool hasSpokenPrivacyFilterType;
@property(nonatomic) int spokenPrivacyFilterType;
- (int)StringAsRealtimeStatus:(id)arg1;	// IMP=0x00000000008850e8
- (id)realtimeStatusAsString:(int)arg1;	// IMP=0x0000000000885044
@property(nonatomic) _Bool hasRealtimeStatus;
@property(nonatomic) int realtimeStatus;

@end

