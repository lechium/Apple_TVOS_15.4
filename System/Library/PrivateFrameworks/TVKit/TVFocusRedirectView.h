//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIFocusContainerGuide;

@interface TVFocusRedirectView : UIView
{
    _Bool _containsInertia;	// 8 = 0x8
    UIFocusContainerGuide *_containerGuide;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000016a19
@property(readonly, nonatomic) UIFocusContainerGuide *containerGuide; // @synthesize containerGuide=_containerGuide;
@property(nonatomic) _Bool containsInertia; // @synthesize containsInertia=_containsInertia;
- (_Bool)_containsInertiaSelectionChanges;	// IMP=0x00000000000169d8
- (void)layoutSubviews;	// IMP=0x000000000001695c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000016891

@end
