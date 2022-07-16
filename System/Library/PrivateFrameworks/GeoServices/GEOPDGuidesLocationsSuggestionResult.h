//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDGuidesLocationEntry, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesLocationsSuggestionResult : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_entrys;	// 24 = 0x18
    GEOPDGuidesLocationEntry *_exploreGuidesEntry;	// 32 = 0x20
    NSString *_exploreImageUrlTemplate;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_entrys:1;
        unsigned int read_exploreGuidesEntry:1;
        unsigned int read_exploreImageUrlTemplate:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000521289
- (unsigned long long)hash;	// IMP=0x0000000000521212
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005210fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000520dda
- (void)writeTo:(id)arg1;	// IMP=0x000000000052099d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000052098e
- (id)jsonRepresentation;	// IMP=0x000000000052060d
- (id)dictionaryRepresentation;	// IMP=0x00000000005200e8
- (id)description;	// IMP=0x0000000000520039
- (id)initWithData:(id)arg1;	// IMP=0x000000000051f484
- (id)init;	// IMP=0x000000000051f428

@end

