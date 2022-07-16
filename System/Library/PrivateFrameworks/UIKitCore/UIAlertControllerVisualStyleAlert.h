//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface UIAlertControllerVisualStyleAlert
{
}

- (_Bool)placementAvoidsKeyboard;	// IMP=0x000000000006f482
- (void)animateAlertControllerView:(id)arg1 ofAlertController:(id)arg2 forPresentation:(_Bool)arg3 inContainerView:(id)arg4 descendantOfContainerView:(id)arg5 duration:(double)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000000006f0b6
- (double)transitionDurationForPresentation:(_Bool)arg1 ofAlertController:(id)arg2;	// IMP=0x000000000006f0a8
- (long long)permittedActionLayoutDirection;	// IMP=0x000000000006f051
- (id)textFieldContainingViewWithTextField:(id)arg1 position:(long long)arg2;	// IMP=0x000000000006eab7
- (double)textFieldHorizontalMargin;	// IMP=0x000000000006eaa9
- (struct UIEdgeInsets)contentInsetsForContainerView:(id)arg1;	// IMP=0x000000000006ea6a
- (double)maximumWidth;	// IMP=0x000000000006e98c
- (double)_marginAroundActionGroup;	// IMP=0x000000000006e983
- (double)marginBelowLastLabelLastBaseline;	// IMP=0x000000000006e975
- (double)marginBelowMessageLabelLastBaseline;	// IMP=0x000000000006e967
- (double)marginAboveMessageLabelFirstBaseline;	// IMP=0x000000000006e8f3
- (id)messageLabelColor;	// IMP=0x000000000006e8e1
- (id)messageLabelFont;	// IMP=0x000000000006e810
- (double)marginBelowTitleLabelLastBaseline;	// IMP=0x000000000006e802
- (double)marginAboveTitleLabelFirstBaseline;	// IMP=0x000000000006e7f4
- (id)titleLabelColor;	// IMP=0x000000000006e7db
- (id)titleLabelFont;	// IMP=0x000000000006e768

@end

