//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsIdentifierPlaceLookupResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000052f29a
- (unsigned long long)hash;	// IMP=0x000000000052f292
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052f24d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052f1f2
- (void)writeTo:(id)arg1;	// IMP=0x000000000052f1d5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000052f1c6
- (id)jsonRepresentation;	// IMP=0x000000000052ef08
- (id)dictionaryRepresentation;	// IMP=0x000000000052ed9d
- (id)description;	// IMP=0x000000000052ecee

@end

