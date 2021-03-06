//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItem, MPMediaItemCollection, MPMediaQuery;

@interface MPMusicPlayerMediaItemQueueDescriptor
{
    MPMediaQuery *_query;	// 80 = 0x50
    MPMediaItemCollection *_itemCollection;	// 88 = 0x58
    MPMediaItem *_startItem;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001123ca
- (void).cxx_destruct;	// IMP=0x00000000001120d8
@property(retain, nonatomic) MPMediaItem *startItem; // @synthesize startItem=_startItem;
- (_Bool)isEmpty;	// IMP=0x0000000000112034
@property(readonly, nonatomic) MPMediaItemCollection *itemCollection;
@property(readonly, copy, nonatomic) MPMediaQuery *query;
- (void)setEndTime:(double)arg1 forItem:(id)arg2;	// IMP=0x0000000000111dbd
- (void)setStartTime:(double)arg1 forItem:(id)arg2;	// IMP=0x0000000000111cb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000111c40
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000111b86
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000111a5e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000111970
- (id)initWithItemCollection:(id)arg1;	// IMP=0x0000000000111902
- (id)initWithQuery:(id)arg1;	// IMP=0x000000000011185d

@end

