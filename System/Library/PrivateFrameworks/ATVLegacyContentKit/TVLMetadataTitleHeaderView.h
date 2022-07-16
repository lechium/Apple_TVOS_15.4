//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ATVLegacyContentKit/ATVUpdatable-Protocol.h>

@class TVLItemTitleView, TVLMetadataTitleHeaderElement;

@interface TVLMetadataTitleHeaderView : UIView <ATVUpdatable>
{
    TVLMetadataTitleHeaderElement *_element;	// 8 = 0x8
    TVLItemTitleView *_titleView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c155d
- (void)layoutSubviews;	// IMP=0x00000000000c1461
- (void)updateWithFeedElement:(id)arg1;	// IMP=0x00000000000c10f7
- (id)currentFeedElement;	// IMP=0x00000000000c10e2
- (id)initWithMetadataTitleHeaderElement:(id)arg1;	// IMP=0x00000000000c0e92

@end
