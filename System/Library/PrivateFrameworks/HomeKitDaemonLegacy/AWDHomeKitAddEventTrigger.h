//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>

@class AWDHomeKitEventTrigger;

@interface AWDHomeKitAddEventTrigger : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    AWDHomeKitEventTrigger *_eventTrigger;	// 16 = 0x10
    int _requestOrigin;	// 24 = 0x18
    unsigned int _resultErrorCode;	// 28 = 0x1c
    struct {
        unsigned int timestamp:1;
        unsigned int requestOrigin:1;
        unsigned int resultErrorCode:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000547927
@property(retain, nonatomic) AWDHomeKitEventTrigger *eventTrigger; // @synthesize eventTrigger=_eventTrigger;
@property(nonatomic) unsigned int resultErrorCode; // @synthesize resultErrorCode=_resultErrorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000547826
- (unsigned long long)hash;	// IMP=0x0000000000547788
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000547672
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005475a1
- (void)copyTo:(id)arg1;	// IMP=0x00000000005474fd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000547450
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000547443
- (id)dictionaryRepresentation;	// IMP=0x0000000000547277
- (id)description;	// IMP=0x00000000005471c8
- (int)StringAsRequestOrigin:(id)arg1;	// IMP=0x000000000054712b
- (id)requestOriginAsString:(int)arg1;	// IMP=0x00000000005470c4
@property(nonatomic) _Bool hasRequestOrigin;
@property(nonatomic) int requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property(readonly, nonatomic) _Bool hasEventTrigger;
@property(nonatomic) _Bool hasResultErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end

