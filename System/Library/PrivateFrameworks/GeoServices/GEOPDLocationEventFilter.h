//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationEventFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b3e9c1
- (unsigned long long)hash;	// IMP=0x0000000000b3e9b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b3e974
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b3e919
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b3e8fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b3e8ed
- (id)jsonRepresentation;	// IMP=0x0000000000b3e7db
- (id)dictionaryRepresentation;	// IMP=0x0000000000b3e670
- (id)description;	// IMP=0x0000000000b3e5c1

@end

