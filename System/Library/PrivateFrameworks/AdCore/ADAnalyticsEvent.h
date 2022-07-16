//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@interface ADAnalyticsEvent : PBCodable <NSCopying>
{
    double _timestamp;	// 8 = 0x8
    int _event;	// 16 = 0x10
}

+ (id)options;	// IMP=0x0000000000013f2c
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int event; // @synthesize event=_event;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000014887
- (unsigned long long)hash;	// IMP=0x000000000001476c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000146da
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014678
- (void)copyTo:(id)arg1;	// IMP=0x0000000000014654
- (void)writeTo:(id)arg1;	// IMP=0x00000000000145f3
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000145e6
- (id)dictionaryRepresentation;	// IMP=0x000000000001423e
- (id)description;	// IMP=0x000000000001418f
- (int)StringAsEvent:(id)arg1;	// IMP=0x000000000001403c
- (id)eventAsString:(int)arg1;	// IMP=0x0000000000013f7c

@end
