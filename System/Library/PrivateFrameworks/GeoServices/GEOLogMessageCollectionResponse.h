//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMessageCollectionResponse : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000035010b
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000035035e
- (unsigned long long)hash;	// IMP=0x0000000000350344
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003502c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000350289
- (void)copyTo:(id)arg1;	// IMP=0x0000000000350275
- (void)writeTo:(id)arg1;	// IMP=0x000000000035026f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000350260
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000034ff6e
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000034ff61
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000034ff11
- (id)jsonRepresentation;	// IMP=0x000000000034ff07
- (id)dictionaryRepresentation;	// IMP=0x000000000034feb0
- (id)description;	// IMP=0x000000000034fe01

@end

