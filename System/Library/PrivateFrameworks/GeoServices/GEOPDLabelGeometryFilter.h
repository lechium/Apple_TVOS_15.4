//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLabelGeometryFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b3539b
- (unsigned long long)hash;	// IMP=0x0000000000b35393
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b3534e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b352f3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b352d6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b352c7
- (id)jsonRepresentation;	// IMP=0x0000000000b351b5
- (id)dictionaryRepresentation;	// IMP=0x0000000000b3504a
- (id)description;	// IMP=0x0000000000b34f9b

@end

