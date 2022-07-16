//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDGuidesHomeResultFilter, GEOPDGuidesLocationEntry, GEOPDResultRefinementGuidesHome, GEOPDViewportInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesHomeParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _supportedFixedSectionTypes;	// 24 = 0x18
    CDStruct_95bda58d _supportedRepeatableSectionTypes;	// 48 = 0x30
    GEOPDGuidesLocationEntry *_guidesLocationEntry;	// 72 = 0x48
    GEOPDResultRefinementGuidesHome *_refinementGuidesHome;	// 80 = 0x50
    GEOPDGuidesHomeResultFilter *_resultFilter;	// 88 = 0x58
    GEOPDViewportInfo *_viewportInfo;	// 96 = 0x60
    unsigned int _readerMarkPos;	// 104 = 0x68
    unsigned int _readerMarkLength;	// 108 = 0x6c
    struct os_unfair_lock_s _readerLock;	// 112 = 0x70
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_supportedFixedSectionTypes:1;
        unsigned int read_supportedRepeatableSectionTypes:1;
        unsigned int read_guidesLocationEntry:1;
        unsigned int read_refinementGuidesHome:1;
        unsigned int read_resultFilter:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 116 = 0x74
}

- (void).cxx_destruct;	// IMP=0x000000000051712b
- (unsigned long long)hash;	// IMP=0x000000000051706c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000516eed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000516cb1
- (void)writeTo:(id)arg1;	// IMP=0x00000000005169d4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005169c5
- (id)jsonRepresentation;	// IMP=0x0000000000516644
- (id)dictionaryRepresentation;	// IMP=0x0000000000515f7f
- (id)description;	// IMP=0x0000000000515ed0
- (void)dealloc;	// IMP=0x0000000000514c2e
- (id)initWithData:(id)arg1;	// IMP=0x0000000000514bd2
- (id)init;	// IMP=0x0000000000514b76

@end

