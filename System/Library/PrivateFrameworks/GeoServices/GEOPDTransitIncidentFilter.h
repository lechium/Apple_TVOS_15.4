//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitIncidentFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000bd3213
- (unsigned long long)hash;	// IMP=0x0000000000bd320b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bd31c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bd316b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bd314e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bd313f
- (id)jsonRepresentation;	// IMP=0x0000000000bd302d
- (id)dictionaryRepresentation;	// IMP=0x0000000000bd2ec2
- (id)description;	// IMP=0x0000000000bd2e13

@end
