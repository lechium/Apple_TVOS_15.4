//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBusinessHoursFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a67eb8
- (unsigned long long)hash;	// IMP=0x0000000000a67eb0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a67e6b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a67e10
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a67df3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a67de4
- (id)jsonRepresentation;	// IMP=0x0000000000a67b26
- (id)dictionaryRepresentation;	// IMP=0x0000000000a679bb
- (id)description;	// IMP=0x0000000000a6790c

@end

