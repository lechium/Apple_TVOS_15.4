//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@interface BMPBDoNotDisturbWhileDrivingEvent : PBCodable <NSCopying>
{
    int _reason;	// 8 = 0x8
    _Bool _isStart;	// 12 = 0xc
    CDStruct_a5d77586 _has;	// 16 = 0x10
}

@property(nonatomic) _Bool isStart; // @synthesize isStart=_isStart;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000034315
- (unsigned long long)hash;	// IMP=0x00000000000342cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000034211
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034194
- (void)copyTo:(id)arg1;	// IMP=0x000000000003413a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000340c8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000340bb
- (id)dictionaryRepresentation;	// IMP=0x0000000000033cbe
- (id)description;	// IMP=0x0000000000033c0f
- (int)StringAsReason:(id)arg1;	// IMP=0x0000000000033af8
- (id)reasonAsString:(int)arg1;	// IMP=0x0000000000033a51
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(nonatomic) _Bool hasIsStart;

@end
