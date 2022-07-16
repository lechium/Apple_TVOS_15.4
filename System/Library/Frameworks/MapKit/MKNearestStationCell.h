//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MKTransitInfoLabelView, NSLayoutConstraint, UIImageView, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKNearestStationCell : UITableViewCell
{
    _MKUILabel *_stationTitleLabel;	// 8 = 0x8
    MKTransitInfoLabelView *_stationInfoLabel;	// 16 = 0x10
    UIImageView *_stationImageView;	// 24 = 0x18
    NSLayoutConstraint *_stationLabelToImageViewConstraint;	// 32 = 0x20
    NSLayoutConstraint *_stationLabelToLeadingEdgeConstraint;	// 40 = 0x28
    NSLayoutConstraint *_stationLabelToTopConstraint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000019fbd5
- (void)configureWithNearestStation:(id)arg1;	// IMP=0x000000000019db44
- (void)_updateConstraintValues;	// IMP=0x000000000019dacb
- (void)_contentSizeCategoryDidChange;	// IMP=0x000000000019da37
- (void)didMoveToWindow;	// IMP=0x000000000019d9f6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000019ce7e

@end
