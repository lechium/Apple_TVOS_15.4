//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBSiriUIEvent : PBCodable <NSCopying>
{
    double _absoluteTimestamp;	// 8 = 0x8
    NSString *_dismissalReason;	// 16 = 0x10
    NSString *_sessionID;	// 24 = 0x18
    NSString *_uuid;	// 32 = 0x20
    NSString *_viewMode;	// 40 = 0x28
    _Bool _starting;	// 48 = 0x30
    struct {
        unsigned int absoluteTimestamp:1;
        unsigned int starting:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000065c8f
@property(nonatomic) double absoluteTimestamp; // @synthesize absoluteTimestamp=_absoluteTimestamp;
@property(nonatomic) _Bool starting; // @synthesize starting=_starting;
@property(retain, nonatomic) NSString *dismissalReason; // @synthesize dismissalReason=_dismissalReason;
@property(retain, nonatomic) NSString *viewMode; // @synthesize viewMode=_viewMode;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000065af5
- (unsigned long long)hash;	// IMP=0x000000000006593c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000657a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000065679
- (void)copyTo:(id)arg1;	// IMP=0x0000000000065595
- (void)writeTo:(id)arg1;	// IMP=0x00000000000654ad
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000654a0
- (id)dictionaryRepresentation;	// IMP=0x0000000000065033
- (id)description;	// IMP=0x0000000000064f84
@property(nonatomic) _Bool hasAbsoluteTimestamp;
@property(nonatomic) _Bool hasStarting;
@property(readonly, nonatomic) _Bool hasDismissalReason;
@property(readonly, nonatomic) _Bool hasViewMode;
@property(readonly, nonatomic) _Bool hasUuid;
@property(readonly, nonatomic) _Bool hasSessionID;

@end

