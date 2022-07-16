//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLogMsgEventDailyUseSummary : PBCodable <NSCopying>
{
    double _firstEventDate;	// 8 = 0x8
    unsigned long long _firstEventTimeRoundedToHour;	// 16 = 0x10
    NSMutableArray *_useEvents;	// 24 = 0x18
    struct {
        unsigned int has_firstEventDate:1;
        unsigned int has_firstEventTimeRoundedToHour:1;
    } _flags;	// 32 = 0x20
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000132da63
+ (Class)useEventsType;	// IMP=0x000000000132d15a
- (void).cxx_destruct;	// IMP=0x000000000132e383
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000132e1d7
- (unsigned long long)hash;	// IMP=0x000000000132e05c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000132df37
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000132dd1d
- (void)copyTo:(id)arg1;	// IMP=0x000000000132dc0b
- (void)writeTo:(id)arg1;	// IMP=0x000000000132da7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000132da70
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000132da03
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000132d9f1
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000132d65f
- (id)jsonRepresentation;	// IMP=0x000000000132d650
- (id)dictionaryRepresentation;	// IMP=0x000000000132d2ce
- (id)description;	// IMP=0x000000000132d21f
@property(nonatomic) _Bool hasFirstEventTimeRoundedToHour;
@property(nonatomic) unsigned long long firstEventTimeRoundedToHour;
@property(nonatomic) _Bool hasFirstEventDate;
@property(nonatomic) double firstEventDate;
- (id)useEventsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000132d13d
- (unsigned long long)useEventsCount;	// IMP=0x000000000132d120
- (void)addUseEvents:(id)arg1;	// IMP=0x000000000132d0b6
- (void)clearUseEvents;	// IMP=0x000000000132d099
@property(retain, nonatomic) NSMutableArray *useEvents;

@end

