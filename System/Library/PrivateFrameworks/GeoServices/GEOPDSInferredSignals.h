//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDSInferredInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSInferredSignals : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDSInferredInfo *_inferredInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000064196e
- (unsigned long long)hash;	// IMP=0x00000000006418ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000641814
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000641789
- (void)writeTo:(id)arg1;	// IMP=0x000000000064172e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000064171f
- (id)jsonRepresentation;	// IMP=0x00000000006410af
- (id)dictionaryRepresentation;	// IMP=0x0000000000640eaf
- (id)description;	// IMP=0x0000000000640e00

@end

