//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideGroupFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b26d8c
- (unsigned long long)hash;	// IMP=0x0000000000b26d84
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b26d3f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b26ce4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b26cc7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b26cb8
- (id)jsonRepresentation;	// IMP=0x0000000000b26ba6
- (id)dictionaryRepresentation;	// IMP=0x0000000000b26a3b
- (id)description;	// IMP=0x0000000000b2698c

@end

