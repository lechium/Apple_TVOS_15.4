//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, GEOPBTransitArtwork, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOAdvisoryNotice : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _incidentIndexs;	// 24 = 0x18
    NSMutableArray *_advisoryCards;	// 48 = 0x30
    NSMutableArray *_advisoryItems;	// 56 = 0x38
    NSMutableArray *_analyticsMessageValues;	// 64 = 0x40
    GEOFormattedString *_detailCardTitle;	// 72 = 0x48
    GEOPBTransitArtwork *_noticeArtwork;	// 80 = 0x50
    GEOFormattedString *_noticeText;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    _Bool _shouldAlwaysShowAdvisoryCard;	// 108 = 0x6c
    struct {
        unsigned int has_shouldAlwaysShowAdvisoryCard:1;
        unsigned int read_unknownFields:1;
        unsigned int read_incidentIndexs:1;
        unsigned int read_advisoryCards:1;
        unsigned int read_advisoryItems:1;
        unsigned int read_analyticsMessageValues:1;
        unsigned int read_detailCardTitle:1;
        unsigned int read_noticeArtwork:1;
        unsigned int read_noticeText:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000832e57
+ (Class)analyticsMessageValueType;	// IMP=0x00000000008318de
+ (Class)advisoryItemType;	// IMP=0x0000000000831391
+ (Class)advisoryCardType;	// IMP=0x0000000000831126
- (void).cxx_destruct;	// IMP=0x0000000000834813
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000083457e
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000834011
- (unsigned long long)hash;	// IMP=0x0000000000833efd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000833cde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008336c1
- (void)copyTo:(id)arg1;	// IMP=0x0000000000833362
- (void)writeTo:(id)arg1;	// IMP=0x0000000000832e73
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000832e64
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000832d4b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000832d39
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000832308
- (id)jsonRepresentation;	// IMP=0x00000000008321f6
- (id)dictionaryRepresentation;	// IMP=0x000000000083199e
- (id)description;	// IMP=0x00000000008318ef
- (id)analyticsMessageValueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008318ad
- (unsigned long long)analyticsMessageValuesCount;	// IMP=0x0000000000831881
- (void)addAnalyticsMessageValue:(id)arg1;	// IMP=0x00000000008317cb
- (void)clearAnalyticsMessageValues;	// IMP=0x00000000008317a1
@property(retain, nonatomic) NSMutableArray *analyticsMessageValues;
@property(retain, nonatomic) GEOPBTransitArtwork *noticeArtwork;
@property(readonly, nonatomic) _Bool hasNoticeArtwork;
@property(retain, nonatomic) GEOFormattedString *detailCardTitle;
@property(readonly, nonatomic) _Bool hasDetailCardTitle;
@property(nonatomic) _Bool hasShouldAlwaysShowAdvisoryCard;
@property(nonatomic) _Bool shouldAlwaysShowAdvisoryCard;
- (id)advisoryItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000831360
- (unsigned long long)advisoryItemsCount;	// IMP=0x0000000000831334
- (void)addAdvisoryItem:(id)arg1;	// IMP=0x000000000083127e
- (void)clearAdvisoryItems;	// IMP=0x0000000000831254
@property(retain, nonatomic) NSMutableArray *advisoryItems;
- (id)advisoryCardAtIndex:(unsigned long long)arg1;	// IMP=0x00000000008310f5
- (unsigned long long)advisoryCardsCount;	// IMP=0x00000000008310c9
- (void)addAdvisoryCard:(id)arg1;	// IMP=0x0000000000831013
- (void)clearAdvisoryCards;	// IMP=0x0000000000830fe9
@property(retain, nonatomic) NSMutableArray *advisoryCards;
- (void)setIncidentIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000830ea8
- (unsigned int)incidentIndexAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000830dd2
- (void)addIncidentIndex:(unsigned int)arg1;	// IMP=0x0000000000830d97
- (void)clearIncidentIndexs;	// IMP=0x0000000000830d79
@property(readonly, nonatomic) unsigned int *incidentIndexs;
@property(readonly, nonatomic) unsigned long long incidentIndexsCount;
@property(retain, nonatomic) GEOFormattedString *noticeText;
@property(readonly, nonatomic) _Bool hasNoticeText;
- (void)dealloc;	// IMP=0x000000000082fbbb
- (id)initWithData:(id)arg1;	// IMP=0x000000000082fb5f
- (id)init;	// IMP=0x000000000082fb03

@end

