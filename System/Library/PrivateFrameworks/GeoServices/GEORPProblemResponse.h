//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEORPProblemResponse : PBCodable <NSCopying>
{
    NSString *_problemId;	// 8 = 0x8
    int _statusCode;	// 16 = 0x10
    _Bool _isNotificationSupported;	// 20 = 0x14
    struct {
        unsigned int has_statusCode:1;
        unsigned int has_isNotificationSupported:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000e39bc6
- (void).cxx_destruct;	// IMP=0x0000000000e3a261
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e3a1c8
- (unsigned long long)hash;	// IMP=0x0000000000e3a13f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e3a007
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e39f53
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e39eba
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e39e2d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e39e1e
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e3981c
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e3980a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e3948f
- (id)jsonRepresentation;	// IMP=0x0000000000e39480
- (id)dictionaryRepresentation;	// IMP=0x0000000000e3922f
- (id)description;	// IMP=0x0000000000e39180
@property(nonatomic) _Bool hasIsNotificationSupported;
@property(nonatomic) _Bool isNotificationSupported;
@property(retain, nonatomic) NSString *problemId;
@property(readonly, nonatomic) _Bool hasProblemId;
- (int)StringAsStatusCode:(id)arg1;	// IMP=0x0000000000e38f90
- (id)statusCodeAsString:(int)arg1;	// IMP=0x0000000000e38eb5
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode;

@end

