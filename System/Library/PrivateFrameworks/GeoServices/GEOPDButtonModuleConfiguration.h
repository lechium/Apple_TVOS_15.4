//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDButtonModuleConfiguration : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_buttonItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a6ad95
- (unsigned long long)hash;	// IMP=0x0000000000a6ad78
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a6acde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a6ab1e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a6a9bf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a6a9b0
- (id)jsonRepresentation;	// IMP=0x0000000000a6a641
- (id)dictionaryRepresentation;	// IMP=0x0000000000a6a29e
- (id)description;	// IMP=0x0000000000a6a1ef

@end

