//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSectionGuide : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_guideIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d0cef2
- (unsigned long long)hash;	// IMP=0x0000000000d0ced5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d0ce3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d0cc7b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d0cb1c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d0cb0d
- (id)jsonRepresentation;	// IMP=0x0000000000d0c9fb
- (id)dictionaryRepresentation;	// IMP=0x0000000000d0c658
- (id)description;	// IMP=0x0000000000d0c5a9

@end

