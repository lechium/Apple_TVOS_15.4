//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOACResult : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003484f2
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000348745
- (unsigned long long)hash;	// IMP=0x000000000034872b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003486a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000348670
- (void)copyTo:(id)arg1;	// IMP=0x000000000034865c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000348656
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000348647
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000348355
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000348348
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003482f8
- (id)jsonRepresentation;	// IMP=0x00000000003482ee
- (id)dictionaryRepresentation;	// IMP=0x0000000000348297
- (id)description;	// IMP=0x00000000003481e8

@end

