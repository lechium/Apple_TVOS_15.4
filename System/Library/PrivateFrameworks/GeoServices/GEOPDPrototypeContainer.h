//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPrototypeContainer : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_prototypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b8f17c
- (unsigned long long)hash;	// IMP=0x0000000000b8f15f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8f0c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b8ef05
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8eda6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8ed97
- (id)jsonRepresentation;	// IMP=0x0000000000b8ec85
- (id)dictionaryRepresentation;	// IMP=0x0000000000b8e8f4
- (id)description;	// IMP=0x0000000000b8e845

@end

