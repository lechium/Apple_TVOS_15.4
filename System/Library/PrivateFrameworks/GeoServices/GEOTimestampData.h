//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerFormatTokenTimeStampValue-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSString, NSTimeZone, PBDataReader, PBUnknownFields;

@interface GEOTimestampData : PBCodable <GEOServerFormatTokenTimeStampValue, NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_formatPattern;	// 24 = 0x18
    NSString *_timezone;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _timestampVal;	// 52 = 0x34
    _Bool _displayTimezone;	// 56 = 0x38
    struct {
        unsigned int has_timestampVal:1;
        unsigned int has_displayTimezone:1;
        unsigned int read_unknownFields:1;
        unsigned int read_formatPattern:1;
        unsigned int read_timezone:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000093d874
- (void).cxx_destruct;	// IMP=0x000000000093e1a9
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000093e158
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000093dfa9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000093dd94
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000093db88
- (void)copyTo:(id)arg1;	// IMP=0x000000000093da81
- (void)writeTo:(id)arg1;	// IMP=0x000000000093d890
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000093d881
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000093d768
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000093d756
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000093d4eb
- (id)jsonRepresentation;	// IMP=0x000000000093d3d9
- (id)dictionaryRepresentation;	// IMP=0x000000000093d10b
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *formatPattern;
@property(readonly, nonatomic) _Bool hasFormatPattern;
@property(nonatomic) _Bool hasDisplayTimezone;
@property(nonatomic) _Bool displayTimezone;
@property(retain, nonatomic) NSString *timezone;
@property(readonly, nonatomic) _Bool hasTimezone;
@property(nonatomic) _Bool hasTimestampVal;
@property(nonatomic) unsigned int timestampVal;
- (id)initWithData:(id)arg1;	// IMP=0x000000000093c5c9
- (id)init;	// IMP=0x000000000093c56d
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) double timeStamp;
- (_Bool)displayTimeZone;	// IMP=0x0000000000fea0fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
