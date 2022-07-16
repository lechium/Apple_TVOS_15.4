//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _concatenatingFormatStringsSupported;	// 16 = 0x10
    _Bool _styleSupported;	// 17 = 0x11
    _Bool _timestampFormatPatternSupported;	// 18 = 0x12
    struct {
        unsigned int has_concatenatingFormatStringsSupported:1;
        unsigned int has_styleSupported:1;
        unsigned int has_timestampFormatPatternSupported:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e7f0c8
- (void).cxx_destruct;	// IMP=0x0000000000e7f572
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000e7f52c
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e7f48a
- (unsigned long long)hash;	// IMP=0x0000000000e7f40b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e7f2d7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e7f21f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e7f192
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e7f0e4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e7f0d5
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e7f068
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e7f056
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e7ee96
- (id)jsonRepresentation;	// IMP=0x0000000000e7ed84
- (id)dictionaryRepresentation;	// IMP=0x0000000000e7eb04
- (id)description;	// IMP=0x0000000000e7ea55
@property(nonatomic) _Bool hasStyleSupported;
@property(nonatomic) _Bool styleSupported;
@property(nonatomic) _Bool hasTimestampFormatPatternSupported;
@property(nonatomic) _Bool timestampFormatPatternSupported;
@property(nonatomic) _Bool hasConcatenatingFormatStringsSupported;
@property(nonatomic) _Bool concatenatingFormatStringsSupported;

@end

