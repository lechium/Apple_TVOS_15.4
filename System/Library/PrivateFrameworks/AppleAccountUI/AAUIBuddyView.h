//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILayoutGuide;

@interface AAUIBuddyView : UIView
{
    UILayoutGuide *_contentLayoutGuide;	// 8 = 0x8
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x000000000002db5d
- (void).cxx_destruct;	// IMP=0x000000000002e051
@property(readonly, nonatomic) UILayoutGuide *contentLayoutGuide; // @synthesize contentLayoutGuide=_contentLayoutGuide;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002dffc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002db65

@end
