//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDepartureSequenceContainer : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _departureSequenceIndexs;	// 24 = 0x18
    NSString *_displayName;	// 48 = 0x30
    NSMutableArray *_labels;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    _Bool _isSignificant;	// 76 = 0x4c
    struct {
        unsigned int has_isSignificant:1;
        unsigned int read_unknownFields:1;
        unsigned int read_departureSequenceIndexs:1;
        unsigned int read_displayName:1;
        unsigned int read_labels:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000afeb9a
- (unsigned long long)hash;	// IMP=0x0000000000afeafc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000afe9c4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000afe686
- (void)writeTo:(id)arg1;	// IMP=0x0000000000afe34d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000afe33e
- (id)jsonRepresentation;	// IMP=0x0000000000afdba0
- (id)dictionaryRepresentation;	// IMP=0x0000000000afd6f0
- (id)description;	// IMP=0x0000000000afd641
- (void)dealloc;	// IMP=0x0000000000afc681
- (id)initWithData:(id)arg1;	// IMP=0x0000000000afc625
- (id)init;	// IMP=0x0000000000afc5c9

@end

