//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLineString : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_points;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b35d81
- (unsigned long long)hash;	// IMP=0x0000000000b35d64
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b35cca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b35b0a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b359ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b3599c
- (id)jsonRepresentation;	// IMP=0x0000000000b3588a
- (id)dictionaryRepresentation;	// IMP=0x0000000000b354f9
- (id)description;	// IMP=0x0000000000b3544a

@end
