//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSArray, PKApplyActionContentActionItem, UIImageView;

@interface PKApplyActionContentActionItemCell : UICollectionViewListCell
{
    NSArray *_titleLabels;	// 8 = 0x8
    NSArray *_subtitleLabels;	// 16 = 0x10
    UIImageView *_disclosureView;	// 24 = 0x18
    PKApplyActionContentActionItem *_actionItem;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000354309
@property(retain, nonatomic) PKApplyActionContentActionItem *actionItem; // @synthesize actionItem=_actionItem;
- (void)prepareForReuse;	// IMP=0x00000000003542b7
- (void)_resetState;	// IMP=0x0000000000354039
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x0000000000353a34
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000003539eb
- (void)layoutSubviews;	// IMP=0x000000000035394a

@end

