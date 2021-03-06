//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVKit/TVTableViewCell.h>

#import <ATVLegacyContentKit/TVLMenuItemCell-Protocol.h>

@class NSString, TVLComboMenuItemView;

@interface TVLComboMenuItemListCell : TVTableViewCell <TVLMenuItemCell>
{
    TVLComboMenuItemView *_menuItemView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000863c
@property(readonly, nonatomic) TVLComboMenuItemView *menuItemView; // @synthesize menuItemView=_menuItemView;
- (id)labelForMarquee;	// IMP=0x000000000000860e
- (void)configureWithMenuItemElement:(id)arg1;	// IMP=0x00000000000085f1
- (void)layoutSubviews;	// IMP=0x000000000000854a
- (void)prepareForReuse;	// IMP=0x00000000000084c3
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000083e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

