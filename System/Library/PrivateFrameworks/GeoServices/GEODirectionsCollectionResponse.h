//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEODirectionsCollectionResponse : PBCodable <NSCopying>
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000c5765d
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000c579cc
- (unsigned long long)hash;	// IMP=0x0000000000c579b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c57930
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c578f7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000c578e3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c578dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c5779a
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000c57657
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000c5764a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000c575fa
- (id)jsonRepresentation;	// IMP=0x0000000000c575f0
- (id)dictionaryRepresentation;	// IMP=0x0000000000c57599
- (id)description;	// IMP=0x0000000000c574ea

@end

