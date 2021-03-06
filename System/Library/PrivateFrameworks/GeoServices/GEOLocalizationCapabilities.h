//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOLocalizationCapabilities : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _supportedPhoneticTypes;	// 16 = 0x10
    _Bool _supportsLocalizedTrafficControlIcons;	// 40 = 0x28
    struct {
        unsigned int has_supportsLocalizedTrafficControlIcons:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001098adc
- (void).cxx_destruct;	// IMP=0x0000000001099283
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000109923d
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001099166
- (unsigned long long)hash;	// IMP=0x000000000109910a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000109901a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001098f87
- (void)copyTo:(id)arg1;	// IMP=0x0000000001098ea2
- (void)writeTo:(id)arg1;	// IMP=0x0000000001098e06
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001098df7
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001098669
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001098657
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010982c2
- (id)jsonRepresentation;	// IMP=0x00000000010981b0
- (id)dictionaryRepresentation;	// IMP=0x0000000001097ea6
- (id)description;	// IMP=0x0000000001097df7
@property(nonatomic) _Bool hasSupportsLocalizedTrafficControlIcons;
@property(nonatomic) _Bool supportsLocalizedTrafficControlIcons;
- (int)StringAsSupportedPhoneticTypes:(id)arg1;	// IMP=0x0000000001097d10
- (id)supportedPhoneticTypesAsString:(int)arg1;	// IMP=0x0000000001097caa
- (void)setSupportedPhoneticTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000001097c93
- (int)supportedPhoneticTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000001097bc6
- (void)addSupportedPhoneticType:(int)arg1;	// IMP=0x0000000001097bb3
- (void)clearSupportedPhoneticTypes;	// IMP=0x0000000001097ba2
@property(readonly, nonatomic) int *supportedPhoneticTypes;
@property(readonly, nonatomic) unsigned long long supportedPhoneticTypesCount;
- (void)dealloc;	// IMP=0x0000000001097b3f

@end

