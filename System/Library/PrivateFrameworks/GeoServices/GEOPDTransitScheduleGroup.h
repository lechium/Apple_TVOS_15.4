//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitScheduleGroup : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _departureSequenceContainerIndexs;	// 24 = 0x18
    CDStruct_9f2792e4 _departureSequenceIndexs;	// 48 = 0x30
    CDStruct_62a50c50 _incidentIds;	// 72 = 0x48
    NSString *_displayName;	// 96 = 0x60
    NSString *_pinnedDisplayName;	// 104 = 0x68
    unsigned int _readerMarkPos;	// 112 = 0x70
    unsigned int _readerMarkLength;	// 116 = 0x74
    struct os_unfair_lock_s _readerLock;	// 120 = 0x78
    int _groupType;	// 124 = 0x7c
    unsigned int _maxWalkingDistance;	// 128 = 0x80
    unsigned int _maxWalkingTime;	// 132 = 0x84
    unsigned int _minWalkingDistance;	// 136 = 0x88
    unsigned int _minWalkingTime;	// 140 = 0x8c
    struct {
        unsigned int has_groupType:1;
        unsigned int has_maxWalkingDistance:1;
        unsigned int has_maxWalkingTime:1;
        unsigned int has_minWalkingDistance:1;
        unsigned int has_minWalkingTime:1;
        unsigned int read_unknownFields:1;
        unsigned int read_departureSequenceContainerIndexs:1;
        unsigned int read_departureSequenceIndexs:1;
        unsigned int read_incidentIds:1;
        unsigned int read_displayName:1;
        unsigned int read_pinnedDisplayName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000be7af2
- (unsigned long long)hash;	// IMP=0x0000000000be799b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000be777c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000be74da
- (void)writeTo:(id)arg1;	// IMP=0x0000000000be71e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000be71d2
- (id)jsonRepresentation;	// IMP=0x0000000000be70c0
- (id)dictionaryRepresentation;	// IMP=0x0000000000be6b39
- (id)description;	// IMP=0x0000000000be6a8a
- (void)dealloc;	// IMP=0x0000000000be53ef
- (id)initWithData:(id)arg1;	// IMP=0x0000000000be5393
- (id)init;	// IMP=0x0000000000be5337

@end

