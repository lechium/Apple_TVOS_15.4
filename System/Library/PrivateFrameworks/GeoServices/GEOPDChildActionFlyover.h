//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionFlyover : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a7e5fd
- (unsigned long long)hash;	// IMP=0x0000000000a7e5f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a7e5b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a7e555
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a7e538
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a7e529
- (id)jsonRepresentation;	// IMP=0x0000000000a7e417
- (id)dictionaryRepresentation;	// IMP=0x0000000000a7e2ac
- (id)description;	// IMP=0x0000000000a7e1fd

@end

