//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAssociatedApp : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_alternateAppAdamIds;	// 24 = 0x18
    NSString *_preferredAppAdamId;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_alternateAppAdamIds:1;
        unsigned int read_preferredAppAdamId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)associatedAppForPlaceData:(id)arg1;	// IMP=0x00000000009d05d9
- (void).cxx_destruct;	// IMP=0x0000000000a522ec
- (unsigned long long)hash;	// IMP=0x0000000000a52295
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a521b3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a51ecd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a51c1d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a51c0e
- (id)jsonRepresentation;	// IMP=0x0000000000a5188d
- (id)dictionaryRepresentation;	// IMP=0x0000000000a5167d
- (id)description;	// IMP=0x0000000000a515ce
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a50da0
- (id)init;	// IMP=0x0000000000a50d44

@end

