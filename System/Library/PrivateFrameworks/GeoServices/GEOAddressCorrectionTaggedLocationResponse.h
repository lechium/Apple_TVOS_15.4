//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOAddressCorrectionTaggedLocationResponse : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000076da45
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000076dc98
- (unsigned long long)hash;	// IMP=0x000000000076dc7e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000076dbfc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000076dbc3
- (void)copyTo:(id)arg1;	// IMP=0x000000000076dbaf
- (void)writeTo:(id)arg1;	// IMP=0x000000000076dba9
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000076db9a
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000076d8a8
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000076d89b
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000076d84b
- (id)jsonRepresentation;	// IMP=0x000000000076d841
- (id)dictionaryRepresentation;	// IMP=0x000000000076d7ea
- (id)description;	// IMP=0x000000000076d73b

@end

