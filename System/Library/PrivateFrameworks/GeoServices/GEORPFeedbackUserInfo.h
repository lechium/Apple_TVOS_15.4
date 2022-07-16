//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPAppAttestInfo, GEORPUserCredentials, NSData, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackUserInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEORPAppAttestInfo *_anonUserInfo;	// 24 = 0x18
    NSData *_devicePushToken;	// 32 = 0x20
    NSString *_preferredEmail;	// 40 = 0x28
    GEORPAppAttestInfo *_rolloverInfo;	// 48 = 0x30
    NSString *_ugcUserId;	// 56 = 0x38
    GEORPUserCredentials *_userCredentials;	// 64 = 0x40
    NSString *_userEmail;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_anonUserInfo:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_preferredEmail:1;
        unsigned int read_rolloverInfo:1;
        unsigned int read_ugcUserId:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000461bd6
- (void).cxx_destruct;	// IMP=0x0000000000462814
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000462779
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000462529
- (unsigned long long)hash;	// IMP=0x0000000000462438
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000462247
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000461fa1
- (void)copyTo:(id)arg1;	// IMP=0x0000000000461e33
- (void)writeTo:(id)arg1;	// IMP=0x0000000000461bf2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000461be3
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000461aca
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000461ab8
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000461617
- (id)jsonRepresentation;	// IMP=0x0000000000461505
- (id)dictionaryRepresentation;	// IMP=0x000000000046105e
- (id)description;	// IMP=0x0000000000460faf
@property(retain, nonatomic) GEORPAppAttestInfo *rolloverInfo;
@property(readonly, nonatomic) _Bool hasRolloverInfo;
@property(retain, nonatomic) GEORPAppAttestInfo *anonUserInfo;
@property(readonly, nonatomic) _Bool hasAnonUserInfo;
@property(retain, nonatomic) NSString *ugcUserId;
@property(readonly, nonatomic) _Bool hasUgcUserId;
@property(retain, nonatomic) NSString *preferredEmail;
@property(readonly, nonatomic) _Bool hasPreferredEmail;
@property(retain, nonatomic) NSString *userEmail;
@property(readonly, nonatomic) _Bool hasUserEmail;
@property(retain, nonatomic) NSData *devicePushToken;
@property(readonly, nonatomic) _Bool hasDevicePushToken;
@property(retain, nonatomic) GEORPUserCredentials *userCredentials;
@property(readonly, nonatomic) _Bool hasUserCredentials;
- (id)initWithData:(id)arg1;	// IMP=0x000000000045fb8f
- (id)init;	// IMP=0x000000000045fb33

@end

