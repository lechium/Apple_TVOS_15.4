//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSCategoryFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_categoryMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000063b25f
- (unsigned long long)hash;	// IMP=0x000000000063b242
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000063b1a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063b11d
- (void)writeTo:(id)arg1;	// IMP=0x000000000063b0c2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000063b0b3
- (id)jsonRepresentation;	// IMP=0x000000000063ad91
- (id)dictionaryRepresentation;	// IMP=0x000000000063ab9f
- (id)description;	// IMP=0x000000000063aaf0

@end

