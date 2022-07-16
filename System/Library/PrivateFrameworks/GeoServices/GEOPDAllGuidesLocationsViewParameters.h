//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDViewportInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAllGuidesLocationsViewParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDViewportInfo *_viewportInfo;	// 16 = 0x10
    unsigned int _numClientizedResults;	// 24 = 0x18
    struct {
        unsigned int has_numClientizedResults:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000004acef7
- (unsigned long long)hash;	// IMP=0x00000000004acea5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004acde4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004acd36
- (void)writeTo:(id)arg1;	// IMP=0x00000000004accb7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004acca8
- (id)jsonRepresentation;	// IMP=0x00000000004ac870
- (id)dictionaryRepresentation;	// IMP=0x00000000004ac60a
- (id)description;	// IMP=0x00000000004ac55b

@end

