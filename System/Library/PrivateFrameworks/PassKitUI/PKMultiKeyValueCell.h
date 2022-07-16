//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSArray;

@interface PKMultiKeyValueCell : UICollectionViewListCell
{
    NSArray *_titleLabels;	// 8 = 0x8
    NSArray *_subtitleLabels;	// 16 = 0x10
    NSArray *_sources;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001734d6
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (void)prepareForReuse;	// IMP=0x000000000017345e
- (_Bool)_shouldStackLabelsWithBounds:(struct CGRect)arg1;	// IMP=0x000000000017330a
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x0000000000172c6d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000172c24
- (void)layoutSubviews;	// IMP=0x0000000000172b83

@end

