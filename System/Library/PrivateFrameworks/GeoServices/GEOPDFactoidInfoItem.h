//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFactoidInfoItem : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_factoidReferences;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b23610
- (unsigned long long)hash;	// IMP=0x0000000000b235f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b23559
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b23399
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b2323a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b2322b
- (id)jsonRepresentation;	// IMP=0x0000000000b22b91
- (id)dictionaryRepresentation;	// IMP=0x0000000000b227ee
- (id)description;	// IMP=0x0000000000b2273f

@end

