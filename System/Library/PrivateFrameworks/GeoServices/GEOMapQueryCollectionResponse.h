//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOMapQueryCollectionResponse : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c5cda6
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c5d115
- (unsigned long long)hash;	// IMP=0x0000000000c5d0fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c5d079
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c5d040
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c5d02c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c5d026
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c5cee3
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c5cda0
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c5cd93
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c5cd43
- (id)jsonRepresentation;	// IMP=0x0000000000c5cd39
- (id)dictionaryRepresentation;	// IMP=0x0000000000c5cce2
- (id)description;	// IMP=0x0000000000c5cc33

@end

