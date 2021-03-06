//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTipFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 16 = 0x10
    unsigned long long _photoSizeFiltersCount;	// 24 = 0x18
    unsigned long long _photoSizeFiltersSpace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000bce5d1
- (unsigned long long)hash;	// IMP=0x0000000000bce5a6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bce50d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bce46d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bce3b5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bce3a6
- (id)jsonRepresentation;	// IMP=0x0000000000bce294
- (id)dictionaryRepresentation;	// IMP=0x0000000000bce040
- (id)description;	// IMP=0x0000000000bcdf91
- (void)dealloc;	// IMP=0x0000000000bcddb6

@end

