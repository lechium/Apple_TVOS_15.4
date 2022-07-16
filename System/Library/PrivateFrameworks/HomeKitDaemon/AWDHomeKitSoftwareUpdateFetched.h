//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitSoftwareUpdateFetched : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    unsigned int _duration;	// 16 = 0x10
    unsigned int _resultErrorCode;	// 20 = 0x14
    int _source;	// 24 = 0x18
    _Bool _wasNewUpdateFetched;	// 28 = 0x1c
    struct {
        unsigned int timestamp:1;
        unsigned int duration:1;
        unsigned int resultErrorCode:1;
        unsigned int source:1;
        unsigned int wasNewUpdateFetched:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) _Bool wasNewUpdateFetched; // @synthesize wasNewUpdateFetched=_wasNewUpdateFetched;
@property(nonatomic) unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005142a
- (unsigned long long)hash;	// IMP=0x0000000000051391
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000051263
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000051199
- (void)copyTo:(id)arg1;	// IMP=0x00000000000510f2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000051022
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000051015
- (id)dictionaryRepresentation;	// IMP=0x0000000000050df5
- (id)description;	// IMP=0x0000000000050d46
@property(nonatomic) _Bool hasWasNewUpdateFetched;
- (int)StringAsSource:(id)arg1;	// IMP=0x0000000000050c94
- (id)sourceAsString:(int)arg1;	// IMP=0x0000000000050c3e
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) _Bool hasResultErrorCode;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end

