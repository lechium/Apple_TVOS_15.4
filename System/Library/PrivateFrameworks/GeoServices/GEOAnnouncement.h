//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegion, GEOPDFlyover, NSString, PBDataReader;

@interface GEOAnnouncement : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_buttonOneAppURI;	// 16 = 0x10
    NSString *_buttonOneMessage;	// 24 = 0x18
    NSString *_buttonTwoAppURI;	// 32 = 0x20
    NSString *_buttonTwoMessage;	// 40 = 0x28
    GEOPDFlyover *_flyoverInfo;	// 48 = 0x30
    GEOMapRegion *_mapRegion;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSString *_userMessage;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    unsigned int _announcementID;	// 92 = 0x5c
    int _announcementType;	// 96 = 0x60
    unsigned int _displayDestinations;	// 100 = 0x64
    int _releasePhase;	// 104 = 0x68
    struct {
        unsigned int has_announcementID:1;
        unsigned int has_announcementType:1;
        unsigned int has_displayDestinations:1;
        unsigned int has_releasePhase:1;
        unsigned int read_buttonOneAppURI:1;
        unsigned int read_buttonOneMessage:1;
        unsigned int read_buttonTwoAppURI:1;
        unsigned int read_buttonTwoMessage:1;
        unsigned int read_flyoverInfo:1;
        unsigned int read_mapRegion:1;
        unsigned int read_title:1;
        unsigned int read_userMessage:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000007d0555
- (void).cxx_destruct;	// IMP=0x00000000007d18a8
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000007d16c9
- (unsigned long long)hash;	// IMP=0x00000000007d1522
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007d122f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007d0ed6
- (void)copyTo:(id)arg1;	// IMP=0x00000000007d0cd1
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000007d0ca0
- (void)writeTo:(id)arg1;	// IMP=0x00000000007d0983
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000007d0974
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000007d02a2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000007d0290
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000007cfa7b
- (id)jsonRepresentation;	// IMP=0x00000000007cfa6c
- (id)dictionaryRepresentation;	// IMP=0x00000000007cf54f
- (id)description;	// IMP=0x00000000007cf4a0
- (int)StringAsAnnouncementType:(id)arg1;	// IMP=0x00000000007cf368
- (id)announcementTypeAsString:(int)arg1;	// IMP=0x00000000007cf2b6
@property(nonatomic) _Bool hasAnnouncementType;
@property(nonatomic) int announcementType;
@property(retain, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool hasTitle;
@property(retain, nonatomic) GEOPDFlyover *flyoverInfo;
@property(readonly, nonatomic) _Bool hasFlyoverInfo;
- (int)StringAsReleasePhase:(id)arg1;	// IMP=0x00000000007cef23
- (id)releasePhaseAsString:(int)arg1;	// IMP=0x00000000007ceebc
@property(nonatomic) _Bool hasReleasePhase;
@property(nonatomic) int releasePhase;
@property(nonatomic) _Bool hasDisplayDestinations;
@property(nonatomic) unsigned int displayDestinations;
@property(retain, nonatomic) NSString *buttonTwoAppURI;
@property(readonly, nonatomic) _Bool hasButtonTwoAppURI;
@property(retain, nonatomic) NSString *buttonTwoMessage;
@property(readonly, nonatomic) _Bool hasButtonTwoMessage;
@property(retain, nonatomic) NSString *buttonOneAppURI;
@property(readonly, nonatomic) _Bool hasButtonOneAppURI;
@property(retain, nonatomic) NSString *buttonOneMessage;
@property(readonly, nonatomic) _Bool hasButtonOneMessage;
@property(retain, nonatomic) NSString *userMessage;
@property(readonly, nonatomic) _Bool hasUserMessage;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(nonatomic) _Bool hasAnnouncementID;
@property(nonatomic) unsigned int announcementID;
- (id)initWithData:(id)arg1;	// IMP=0x00000000007cd9fc
- (id)init;	// IMP=0x00000000007cd9a0

@end

