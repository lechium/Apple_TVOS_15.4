//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariActivatedHomeScreenQuickActionEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _quickAction;	// 16 = 0x10
    struct {
        unsigned int timestamp:1;
        unsigned int quickAction:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004616f
- (unsigned long long)hash;	// IMP=0x0000000000046129
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046076
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000045ff7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000045f9b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000045f29
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000045f1c
- (id)dictionaryRepresentation;	// IMP=0x0000000000045b4e
- (id)description;	// IMP=0x0000000000045a9f
- (int)StringAsQuickAction:(id)arg1;	// IMP=0x00000000000459f0
- (id)quickActionAsString:(int)arg1;	// IMP=0x0000000000045972
@property(nonatomic) _Bool hasQuickAction;
@property(nonatomic) int quickAction; // @synthesize quickAction=_quickAction;
@property(nonatomic) _Bool hasTimestamp;

@end

