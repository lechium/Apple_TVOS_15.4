//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBoundsFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a608f2
- (unsigned long long)hash;	// IMP=0x0000000000a608ea
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a608a5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a6084a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a6082d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a6081e
- (id)jsonRepresentation;	// IMP=0x0000000000a60560
- (id)dictionaryRepresentation;	// IMP=0x0000000000a603f5
- (id)description;	// IMP=0x0000000000a60346

@end

