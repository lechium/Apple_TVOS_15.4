//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIActionSheetCompactPresentationControllerDelegate-Protocol.h>

@class NSString, _UIActionSheetCompactPresentationController;
@protocol UIActionSheetPresentationControllerDelegate;

@interface _UIActionSheetPresentationController <_UIActionSheetCompactPresentationControllerDelegate>
{
    _Bool _dismissActionUsesShorterHeightWhenCompactVertically;	// 8 = 0x8
    _Bool __shouldUseCompactPresentationControllerWhenPresentedInSheet;	// 9 = 0x9
    _Bool _avoidsKeyboardDisabled;	// 10 = 0xa
    NSString *_dismissActionTitle;	// 16 = 0x10
    id <UIActionSheetPresentationControllerDelegate> _actionSheetDelegate;	// 24 = 0x18
    _UIActionSheetCompactPresentationController *_compactPresentationController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000037a8a3
@property(nonatomic) _Bool avoidsKeyboardDisabled; // @synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled;
@property(retain, nonatomic) _UIActionSheetCompactPresentationController *compactPresentationController; // @synthesize compactPresentationController=_compactPresentationController;
@property(nonatomic) __weak id <UIActionSheetPresentationControllerDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property(nonatomic, setter=_setShouldUseCompactPresentationControllerWhenPresentedInSheet:) _Bool _shouldUseCompactPresentationControllerWhenPresentedInSheet; // @synthesize _shouldUseCompactPresentationControllerWhenPresentedInSheet=__shouldUseCompactPresentationControllerWhenPresentedInSheet;
@property(nonatomic) _Bool dismissActionUsesShorterHeightWhenCompactVertically; // @synthesize dismissActionUsesShorterHeightWhenCompactVertically=_dismissActionUsesShorterHeightWhenCompactVertically;
@property(copy, nonatomic) NSString *dismissActionTitle; // @synthesize dismissActionTitle=_dismissActionTitle;
- (_Bool)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)arg1;	// IMP=0x000000000037a7a6
- (void)actionSheetCompactPresentationControllerDidDismiss:(id)arg1;	// IMP=0x000000000037a709
- (void)endPseudoAlertPresentationMode;	// IMP=0x000000000037a675
- (void)beginPseudoAlertPresentationMode;	// IMP=0x000000000037a638
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;	// IMP=0x000000000037a48d
- (_Bool)dimmingViewWasTapped:(id)arg1 withDismissCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000037a3db
- (_Bool)_shouldPresentedViewControllerControlStatusBarAppearance;	// IMP=0x000000000037a3d3
- (void)dealloc;	// IMP=0x000000000037a366
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x000000000037a29b
- (long long)_presentationContextForViewController:(id)arg1;	// IMP=0x000000000037a1ff
- (id)_compactPresentationController;	// IMP=0x000000000037a067
- (id)_visualStyleForTraitCollection:(id)arg1;	// IMP=0x000000000037a04e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
