//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/UIInterfaceActionConcreteVisualStyleImpl-Protocol.h>
#import <UIKitCore/UIInterfaceActionConcreteVisualStyleImplInternal-Protocol.h>

@class NSString, UIInterfaceActionConcreteVisualStyle, UIInterfaceActionGroupViewState, UIInterfaceActionOverrideVisualStyle;
@protocol UIInterfaceActionConcreteVisualStyleImpl;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, UIInterfaceActionConcreteVisualStyleImpl, NSCopying>
{
    UIInterfaceActionGroupViewState *_groupViewState;	// 8 = 0x8
    UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *_concreteVisualStyle;	// 16 = 0x10
    CDUnknownBlockType _fontForViewStateBlock;	// 24 = 0x18
    UIInterfaceActionOverrideVisualStyle *_visualStyleOverride;	// 32 = 0x20
}

+ (id)idiomSpecificStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;	// IMP=0x00000000000201bc
- (void).cxx_destruct;	// IMP=0x0000000000021af9
@property(retain, nonatomic) UIInterfaceActionOverrideVisualStyle *visualStyleOverride; // @synthesize visualStyleOverride=_visualStyleOverride;
@property(copy, nonatomic) CDUnknownBlockType fontForViewStateBlock; // @synthesize fontForViewStateBlock=_fontForViewStateBlock;
@property(retain, nonatomic) UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *concreteVisualStyle; // @synthesize concreteVisualStyle=_concreteVisualStyle;
@property(readonly, nonatomic) UIInterfaceActionGroupViewState *groupViewState; // @synthesize groupViewState=_groupViewState;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x0000000000021a3c
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x00000000000219c9
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x000000000002191a
- (id)actionPropertiesAffectingImageViewStyling;	// IMP=0x0000000000021850
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000217a1
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x00000000000216d7
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x0000000000021651
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;	// IMP=0x00000000000215de
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x0000000000021558
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000000214d2
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x000000000002143b
- (id)actionClassificationLabelColorForViewState:(id)arg1;	// IMP=0x00000000000213b8
- (id)actionClassificationLabelFontForViewState:(id)arg1;	// IMP=0x00000000000212e8
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x0000000000021265
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x0000000000021195
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x000000000002111e
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x0000000000021040
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x0000000000020fc9
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x0000000000020f52
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x0000000000020ecf
- (double)actionTitleLabelMinimumScaleFactor;	// IMP=0x0000000000020e7f
- (_Bool)selectByPressGestureRequired;	// IMP=0x0000000000020e3b
- (struct UIEdgeInsets)contentMargin;	// IMP=0x0000000000020ddd
- (double)contentCornerRadius;	// IMP=0x0000000000020d8d
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x0000000000020d2f
- (double)actionSectionSpacing;	// IMP=0x0000000000020cdf
- (double)verticalImageContentSpacing;	// IMP=0x0000000000020c8f
- (double)horizontalImageContentSpacing;	// IMP=0x0000000000020c3f
- (struct CGSize)minimumActionContentSize;	// IMP=0x0000000000020be5
- (struct CGSize)maximumActionGroupContentSize;	// IMP=0x0000000000020b8b
- (id)defaultScreen;	// IMP=0x0000000000020b3b
- (id)_styleForVisualProperties;	// IMP=0x0000000000020b21
- (void)_base_configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x0000000000020875
- (id)_base_actionPropertiesAffectingImageViewStyling;	// IMP=0x000000000002080e
- (void)_base_configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000204d7
- (id)_base_actionPropertiesAffectingLabelStyling;	// IMP=0x0000000000020444
- (id)copyWithGroupViewState:(id)arg1;	// IMP=0x0000000000020031
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ffaa
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001fe73
@property(readonly, copy) NSString *description;
- (id)initWithConcreteVisualStyle:(id)arg1;	// IMP=0x000000000001fd00
- (id)init;	// IMP=0x000000000001fcc0
- (id)defaultConcreteActionTitleLabelPreferredFont;	// IMP=0x0000000000021b9e
- (id)defaultConcreteActionTitleLabelRegularFont;	// IMP=0x0000000000021b37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

