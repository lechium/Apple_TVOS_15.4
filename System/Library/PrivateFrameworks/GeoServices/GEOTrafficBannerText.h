//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTrafficBannerText : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_analyticsMessageValue;	// 24 = 0x18
    GEOFormattedString *_bannerDescription;	// 32 = 0x20
    NSString *_bannerId;	// 40 = 0x28
    GEOFormattedString *_bannerLargeText;	// 48 = 0x30
    GEOFormattedString *_bannerSmallText;	// 56 = 0x38
    NSMutableArray *_buttons;	// 64 = 0x40
    NSMutableArray *_localizedIncidentBanners;	// 72 = 0x48
    NSMutableArray *_localizedIncidentSpokenTexts;	// 80 = 0x50
    NSMutableArray *_localizedIncidentSubBanners;	// 88 = 0x58
    GEOFormattedString *_spokenPrompt;	// 96 = 0x60
    unsigned int _readerMarkPos;	// 104 = 0x68
    unsigned int _readerMarkLength;	// 108 = 0x6c
    struct os_unfair_lock_s _readerLock;	// 112 = 0x70
    unsigned int _alertDurationSeconds;	// 116 = 0x74
    int _bannerStyle;	// 120 = 0x78
    int _defaultButtonIndex;	// 124 = 0x7c
    unsigned int _hideAtDistance;	// 128 = 0x80
    unsigned int _incidentDistance;	// 132 = 0x84
    unsigned int _incidentIndex;	// 136 = 0x88
    int _previousBannerChange;	// 140 = 0x8c
    unsigned int _secondsSaved;	// 144 = 0x90
    unsigned int _showAtDistance;	// 148 = 0x94
    unsigned int _zilchPathIndex;	// 152 = 0x98
    _Bool _disableFasterRerouteByDefault;	// 156 = 0x9c
    _Bool _shouldShowTimer;	// 157 = 0x9d
    struct {
        unsigned int has_alertDurationSeconds:1;
        unsigned int has_bannerStyle:1;
        unsigned int has_defaultButtonIndex:1;
        unsigned int has_hideAtDistance:1;
        unsigned int has_incidentDistance:1;
        unsigned int has_incidentIndex:1;
        unsigned int has_previousBannerChange:1;
        unsigned int has_secondsSaved:1;
        unsigned int has_showAtDistance:1;
        unsigned int has_zilchPathIndex:1;
        unsigned int has_disableFasterRerouteByDefault:1;
        unsigned int has_shouldShowTimer:1;
        unsigned int read_unknownFields:1;
        unsigned int read_analyticsMessageValue:1;
        unsigned int read_bannerDescription:1;
        unsigned int read_bannerId:1;
        unsigned int read_bannerLargeText:1;
        unsigned int read_bannerSmallText:1;
        unsigned int read_buttons:1;
        unsigned int read_localizedIncidentBanners:1;
        unsigned int read_localizedIncidentSpokenTexts:1;
        unsigned int read_localizedIncidentSubBanners:1;
        unsigned int read_spokenPrompt:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 160 = 0xa0
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000943d52
+ (Class)buttonType;	// IMP=0x0000000000940f29
+ (Class)localizedIncidentSpokenTextType;	// IMP=0x0000000000940287
+ (Class)localizedIncidentSubBannerType;	// IMP=0x000000000094001d
+ (Class)localizedIncidentBannerType;	// IMP=0x000000000093fdb3
- (void).cxx_destruct;	// IMP=0x0000000000946edb
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000946d00
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009464e6
- (unsigned long long)hash;	// IMP=0x00000000009461eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000945d14
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009453ec
- (void)copyTo:(id)arg1;	// IMP=0x0000000000944eed
- (void)writeTo:(id)arg1;	// IMP=0x00000000009446b9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009446aa
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000009436c7
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000009436b5
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000942396
- (id)jsonRepresentation;	// IMP=0x0000000000942284
- (id)dictionaryRepresentation;	// IMP=0x000000000094156c
- (id)description;	// IMP=0x00000000009414bd
@property(retain, nonatomic) NSString *analyticsMessageValue;
@property(readonly, nonatomic) _Bool hasAnalyticsMessageValue;
@property(retain, nonatomic) NSString *bannerId;
@property(readonly, nonatomic) _Bool hasBannerId;
@property(retain, nonatomic) GEOFormattedString *bannerDescription;
@property(readonly, nonatomic) _Bool hasBannerDescription;
@property(nonatomic) _Bool hasZilchPathIndex;
@property(nonatomic) unsigned int zilchPathIndex;
@property(nonatomic) _Bool hasShouldShowTimer;
@property(nonatomic) _Bool shouldShowTimer;
@property(nonatomic) _Bool hasAlertDurationSeconds;
@property(nonatomic) unsigned int alertDurationSeconds;
@property(nonatomic) _Bool hasDefaultButtonIndex;
@property(nonatomic) int defaultButtonIndex;
- (id)buttonAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000940ef8
- (unsigned long long)buttonsCount;	// IMP=0x0000000000940ecc
- (void)addButton:(id)arg1;	// IMP=0x0000000000940e17
- (void)clearButtons;	// IMP=0x0000000000940dee
@property(retain, nonatomic) NSMutableArray *buttons;
@property(nonatomic) _Bool hasSecondsSaved;
@property(nonatomic) unsigned int secondsSaved;
- (int)StringAsBannerStyle:(id)arg1;	// IMP=0x0000000000940b34
- (id)bannerStyleAsString:(int)arg1;	// IMP=0x0000000000940a80
@property(nonatomic) _Bool hasBannerStyle;
@property(nonatomic) int bannerStyle;
@property(nonatomic) _Bool hasDisableFasterRerouteByDefault;
@property(nonatomic) _Bool disableFasterRerouteByDefault;
- (int)StringAsPreviousBannerChange:(id)arg1;	// IMP=0x00000000009408e4
- (id)previousBannerChangeAsString:(int)arg1;	// IMP=0x0000000000940867
@property(nonatomic) _Bool hasPreviousBannerChange;
@property(nonatomic) int previousBannerChange;
@property(nonatomic) _Bool hasIncidentIndex;
@property(nonatomic) unsigned int incidentIndex;
@property(nonatomic) _Bool hasIncidentDistance;
@property(nonatomic) unsigned int incidentDistance;
@property(nonatomic) _Bool hasHideAtDistance;
@property(nonatomic) unsigned int hideAtDistance;
@property(nonatomic) _Bool hasShowAtDistance;
@property(nonatomic) unsigned int showAtDistance;
@property(retain, nonatomic) GEOFormattedString *spokenPrompt;
@property(readonly, nonatomic) _Bool hasSpokenPrompt;
@property(retain, nonatomic) GEOFormattedString *bannerSmallText;
@property(readonly, nonatomic) _Bool hasBannerSmallText;
@property(retain, nonatomic) GEOFormattedString *bannerLargeText;
@property(readonly, nonatomic) _Bool hasBannerLargeText;
- (id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000940256
- (unsigned long long)localizedIncidentSpokenTextsCount;	// IMP=0x000000000094022a
- (void)addLocalizedIncidentSpokenText:(id)arg1;	// IMP=0x0000000000940175
- (void)clearLocalizedIncidentSpokenTexts;	// IMP=0x000000000094014c
@property(retain, nonatomic) NSMutableArray *localizedIncidentSpokenTexts;
- (id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000093ffec
- (unsigned long long)localizedIncidentSubBannersCount;	// IMP=0x000000000093ffc0
- (void)addLocalizedIncidentSubBanner:(id)arg1;	// IMP=0x000000000093ff0b
- (void)clearLocalizedIncidentSubBanners;	// IMP=0x000000000093fee2
@property(retain, nonatomic) NSMutableArray *localizedIncidentSubBanners;
- (id)localizedIncidentBannerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000093fd82
- (unsigned long long)localizedIncidentBannersCount;	// IMP=0x000000000093fd56
- (void)addLocalizedIncidentBanner:(id)arg1;	// IMP=0x000000000093fca1
- (void)clearLocalizedIncidentBanners;	// IMP=0x000000000093fc78
@property(retain, nonatomic) NSMutableArray *localizedIncidentBanners;
- (id)initWithData:(id)arg1;	// IMP=0x000000000093e258
- (id)init;	// IMP=0x000000000093e1fc

@end

