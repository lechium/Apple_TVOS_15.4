//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface HBUITopShelfInsetTextOverlayView : UIView
{
    UILabel *_headingLabel;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_subheadingLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000b240
@property(readonly, nonatomic) UILabel *subheadingLabel; // @synthesize subheadingLabel=_subheadingLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *headingLabel; // @synthesize headingLabel=_headingLabel;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000abba

@end

