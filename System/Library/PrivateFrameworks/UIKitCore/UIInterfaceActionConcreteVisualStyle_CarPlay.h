//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIInterfaceActionConcreteVisualStyleImpl-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_CarPlay <UIInterfaceActionConcreteVisualStyleImpl>
{
}

- (id)_normalActionTitleLabelColorForViewState:(id)arg1;	// IMP=0x000000000001cb80
- (id)_highlightedActionTitleLabelColorForViewState:(id)arg1;	// IMP=0x000000000001cb67
- (id)_preferredActionFont;	// IMP=0x000000000001cb46
- (id)_regularActionFont;	// IMP=0x000000000001cb25
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x000000000001cb14
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x000000000001cb03
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x000000000001ca61
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x000000000001c9ec
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x000000000001c99d
- (_Bool)selectByPressGestureRequired;	// IMP=0x000000000001c995
- (struct CGSize)minimumActionContentSize;	// IMP=0x000000000001c984
- (double)verticalImageContentSpacing;	// IMP=0x000000000001c976
- (double)horizontalImageContentSpacing;	// IMP=0x000000000001c968
- (struct UIEdgeInsets)contentMargin;	// IMP=0x000000000001c951
- (double)contentCornerRadius;	// IMP=0x000000000001c943
- (id)defaultScreen;	// IMP=0x000000000001c92a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

