//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCollectionIdsFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a84214
- (unsigned long long)hash;	// IMP=0x0000000000a8420c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a841c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a8416c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a8414f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a84140
- (id)jsonRepresentation;	// IMP=0x0000000000a83e82
- (id)dictionaryRepresentation;	// IMP=0x0000000000a83d17
- (id)description;	// IMP=0x0000000000a83c68

@end

