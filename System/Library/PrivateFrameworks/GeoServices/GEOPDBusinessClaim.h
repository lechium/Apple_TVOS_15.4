//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPDBusinessClaim : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_buttonLabel;	// 24 = 0x18
    NSString *_descriptionText;	// 32 = 0x20
    NSString *_titleText;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    _Bool _buttonEnabled;	// 60 = 0x3c
    struct {
        unsigned int has_buttonEnabled:1;
        unsigned int read_unknownFields:1;
        unsigned int read_buttonLabel:1;
        unsigned int read_descriptionText:1;
        unsigned int read_titleText:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000a61ea6
+ (id)businessClaimForPlaceData:(id)arg1;	// IMP=0x00000000009cedca
- (void).cxx_destruct;	// IMP=0x0000000000a62a42
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000a629f1
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000a62846
- (unsigned long long)hash;	// IMP=0x0000000000a627a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a62646
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a62411
- (void)copyTo:(id)arg1;	// IMP=0x0000000000a62301
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a620e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a620d4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000a61bf3
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000a61be1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000a61959
- (id)jsonRepresentation;	// IMP=0x0000000000a61847
- (id)dictionaryRepresentation;	// IMP=0x0000000000a61580
- (id)description;	// IMP=0x0000000000a614d1
@property(retain, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) _Bool hasDescriptionText;
@property(retain, nonatomic) NSString *titleText;
@property(readonly, nonatomic) _Bool hasTitleText;
@property(nonatomic) _Bool hasButtonEnabled;
@property(nonatomic) _Bool buttonEnabled;
@property(retain, nonatomic) NSString *buttonLabel;
@property(readonly, nonatomic) _Bool hasButtonLabel;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a60961
- (id)init;	// IMP=0x0000000000a60905

@end

