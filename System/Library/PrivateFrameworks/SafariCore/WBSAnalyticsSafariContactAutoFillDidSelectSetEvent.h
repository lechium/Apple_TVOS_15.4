//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariContactAutoFillDidSelectSetEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _selectedSet;	// 16 = 0x10
    _Bool _hadPreviouslyCustomizedSet;	// 20 = 0x14
    struct {
        unsigned int timestamp:1;
        unsigned int selectedSet:1;
        unsigned int hadPreviouslyCustomizedSet:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) _Bool hadPreviouslyCustomizedSet; // @synthesize hadPreviouslyCustomizedSet=_hadPreviouslyCustomizedSet;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000028d56
- (unsigned long long)hash;	// IMP=0x0000000000028cf3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028c10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028b78
- (void)copyTo:(id)arg1;	// IMP=0x0000000000028b03
- (void)writeTo:(id)arg1;	// IMP=0x0000000000028a71
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000028a64
- (id)dictionaryRepresentation;	// IMP=0x0000000000028581
- (id)description;	// IMP=0x00000000000284d2
@property(nonatomic) _Bool hasHadPreviouslyCustomizedSet;
- (int)StringAsSelectedSet:(id)arg1;	// IMP=0x0000000000028398
- (id)selectedSetAsString:(int)arg1;	// IMP=0x00000000000282fe
@property(nonatomic) _Bool hasSelectedSet;
@property(nonatomic) int selectedSet; // @synthesize selectedSet=_selectedSet;
@property(nonatomic) _Bool hasTimestamp;

@end

