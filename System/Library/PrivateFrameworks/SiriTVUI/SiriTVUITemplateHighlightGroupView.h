//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SiriTVUI/SiriTVUIGroupView-Protocol.h>
#import <SiriTVUI/SiriTVUITemplateItemView-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface SiriTVUITemplateHighlightGroupView : UIView <SiriTVUIGroupView, SiriTVUITemplateItemView>
{
    NSMutableArray *_highlightableViews;	// 8 = 0x8
    _Bool hasPriorityLayout;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000023c6a
@property(readonly, nonatomic) NSArray *groupedSubviews; // @synthesize groupedSubviews=_highlightableViews;
@property(nonatomic) _Bool hasPriorityLayout; // @synthesize hasPriorityLayout;
- (_Bool)shouldFitWithinContentMargins;	// IMP=0x0000000000023c31
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000023c2b
- (void)layoutSubviews;	// IMP=0x0000000000023b2f
- (void)removeGroupedSubview:(id)arg1;	// IMP=0x0000000000023ad5
- (void)addGroupedSubview:(id)arg1;	// IMP=0x0000000000023a6c
- (id)preferredFocusEnvironments;	// IMP=0x00000000000239c9
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000023992
- (_Bool)canBecomeFocused;	// IMP=0x000000000002398a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000238dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

