//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface CertUIItemDetailsSummaryCell : UITableViewCell
{
    NSArray *_detailViews;	// 8 = 0x8
    double _detailLabelOriginX;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000d96f
@property(nonatomic) double detailLabelOriginX; // @synthesize detailLabelOriginX=_detailLabelOriginX;
@property(retain, nonatomic) NSArray *detailViews; // @synthesize detailViews=_detailViews;
- (void)createViewWithItemDetailArray:(id)arg1;	// IMP=0x000000000000d581
- (void)createViewWithDescriptors:(id)arg1;	// IMP=0x000000000000d21a
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000d06c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000000ce06
- (void)layoutSubviews;	// IMP=0x000000000000caf6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000000ca93

@end

