//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceDataCacheLogMessage : PBCodable <NSCopying>
{
}

- (unsigned long long)hash;	// IMP=0x0000000000350e6f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000350e2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000350df1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000350deb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000350ca8
- (id)jsonRepresentation;	// IMP=0x0000000000350c9e
- (id)dictionaryRepresentation;	// IMP=0x0000000000350c5f
- (id)description;	// IMP=0x0000000000350bb0

@end
