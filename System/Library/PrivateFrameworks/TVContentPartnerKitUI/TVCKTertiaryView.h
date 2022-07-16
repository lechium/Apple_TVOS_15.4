//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface TVCKTertiaryView : UIView
{
    NSArray *_tertiaryViews;	// 8 = 0x8
    double _viewSpacing;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007ba11
@property(nonatomic) double viewSpacing; // @synthesize viewSpacing=_viewSpacing;
@property(retain, nonatomic) NSArray *tertiaryViews; // @synthesize tertiaryViews=_tertiaryViews;
@property(readonly, nonatomic) double labelHeight;
@property(readonly, nonatomic) double maximumLabelBasedY;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000007b480
- (void)layoutSubviews;	// IMP=0x000000000007b100
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000007b089

@end

