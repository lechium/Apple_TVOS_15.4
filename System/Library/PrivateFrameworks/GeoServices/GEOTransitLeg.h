//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOTransitLeg : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _restrictedToSectionIndexs;	// 16 = 0x10
    int _sectionOptionIndex;	// 40 = 0x28
    struct {
        unsigned int has_sectionOptionIndex:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000003ad9a4
- (void).cxx_destruct;	// IMP=0x00000000003ae13e
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x00000000003ae0f8
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003ae01c
- (unsigned long long)hash;	// IMP=0x00000000003adfc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003adee2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ade4f
- (void)copyTo:(id)arg1;	// IMP=0x00000000003add6c
- (void)writeTo:(id)arg1;	// IMP=0x00000000003adcd1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003adcc2
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000003ad4ef
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000003ad4dd
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003ad20c
- (id)jsonRepresentation;	// IMP=0x00000000003ad0fa
- (id)dictionaryRepresentation;	// IMP=0x00000000003aced3
- (id)description;	// IMP=0x00000000003ace24
- (void)setRestrictedToSectionIndexs:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000003ace0d
- (int)restrictedToSectionIndexAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003acd40
- (void)addRestrictedToSectionIndex:(int)arg1;	// IMP=0x00000000003acd2d
- (void)clearRestrictedToSectionIndexs;	// IMP=0x00000000003acd1c
@property(readonly, nonatomic) int *restrictedToSectionIndexs;
@property(readonly, nonatomic) unsigned long long restrictedToSectionIndexsCount;
@property(nonatomic) _Bool hasSectionOptionIndex;
@property(nonatomic) int sectionOptionIndex;
- (void)dealloc;	// IMP=0x00000000003acc64

@end
