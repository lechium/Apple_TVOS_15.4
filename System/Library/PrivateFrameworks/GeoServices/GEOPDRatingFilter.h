//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRatingFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b9c784
- (unsigned long long)hash;	// IMP=0x0000000000b9c77c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b9c737
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b9c6dc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b9c6bf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b9c6b0
- (id)jsonRepresentation;	// IMP=0x0000000000b9c59e
- (id)dictionaryRepresentation;	// IMP=0x0000000000b9c433
- (id)description;	// IMP=0x0000000000b9c384

@end
