//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchCategoryLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_categoryLookupParameters;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004e26cd
- (unsigned long long)hash;	// IMP=0x00000000004e26b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004e2616
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004e2456
- (void)writeTo:(id)arg1;	// IMP=0x00000000004e22f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004e22e8
- (id)jsonRepresentation;	// IMP=0x00000000004e1f79
- (id)dictionaryRepresentation;	// IMP=0x00000000004e1bd6
- (id)description;	// IMP=0x00000000004e1b27

@end

