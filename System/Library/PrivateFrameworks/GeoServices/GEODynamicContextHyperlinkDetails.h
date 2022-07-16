//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEODynamicContextHyperlinkDetails : PBCodable <NSCopying>
{
    NSString *_displayedString;	// 8 = 0x8
    int _layoutType;	// 16 = 0x10
    struct {
        unsigned int has_layoutType:1;
    } _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000012ff2a9
- (void).cxx_destruct;	// IMP=0x00000000012ff7f7
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000012ff782
- (unsigned long long)hash;	// IMP=0x00000000012ff71f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012ff624
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012ff594
- (void)copyTo:(id)arg1;	// IMP=0x00000000012ff51f
- (void)writeTo:(id)arg1;	// IMP=0x00000000012ff4bb
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012ff4ac
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000012fefbb
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000012fefa9
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000012fea83
- (id)jsonRepresentation;	// IMP=0x00000000012fea74
- (id)dictionaryRepresentation;	// IMP=0x00000000012fe7bd
- (id)description;	// IMP=0x00000000012fe70e
@property(retain, nonatomic) NSString *displayedString;
@property(readonly, nonatomic) _Bool hasDisplayedString;
- (int)StringAsLayoutType:(id)arg1;	// IMP=0x00000000012fe388
- (id)layoutTypeAsString:(int)arg1;	// IMP=0x00000000012fe1d9
@property(nonatomic) _Bool hasLayoutType;
@property(nonatomic) int layoutType;

@end

