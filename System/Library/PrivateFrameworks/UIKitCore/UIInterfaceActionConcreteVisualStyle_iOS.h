//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIInterfaceActionConcreteVisualStyleImpl-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_iOS <UIInterfaceActionConcreteVisualStyleImpl>
{
}

- (id)_preferredActionFont;	// IMP=0x000000000001cf3a
- (id)_regularActionFont;	// IMP=0x000000000001cf17
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x000000000001cf06
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x000000000001cef5
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x000000000001ced2
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x000000000001ce92
- (id)_highlightedView;	// IMP=0x000000000001ce67
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x000000000001cdc1
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x000000000001cd72
- (_Bool)selectionFeedbackEnabled;	// IMP=0x000000000001cd6a
- (double)verticalImageContentSpacing;	// IMP=0x000000000001cd5c
- (double)horizontalImageContentSpacing;	// IMP=0x000000000001cd4e
- (struct UIEdgeInsets)contentMargin;	// IMP=0x000000000001cc77
- (double)contentCornerRadius;	// IMP=0x000000000001cc69
- (id)defaultScreen;	// IMP=0x000000000001cc50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
