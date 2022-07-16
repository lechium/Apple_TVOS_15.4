//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVContentPartnerKitUI/__TVShelfViewControllerDelegate-Protocol.h>

@class IKViewElement, NSString, TVImageProxy, UIView, _TVShelfViewController;
@protocol TVCKBackgroundShelfViewControllerDelegate;

@interface TVCKBackgroundShelfViewController : UIViewController <__TVShelfViewControllerDelegate>
{
    IKViewElement *_shelfViewElement;	// 8 = 0x8
    _TVShelfViewController *_shelfViewController;	// 16 = 0x10
    IKViewElement *_relatedContentElement;	// 24 = 0x18
    TVImageProxy *_backgroundImageProxy;	// 32 = 0x20
    UIView *_relatedView;	// 40 = 0x28
    UIView *_fallbackView;	// 48 = 0x30
    UIView *_fallbackTextView;	// 56 = 0x38
    UIView *_fallbackGradientImageView;	// 64 = 0x40
    _Bool _didFirstPreview;	// 72 = 0x48
    IKViewElement *_backgroundShelfElement;	// 80 = 0x50
    _Bool _fallbackAccessoryMaterial;	// 88 = 0x58
    _Bool _relatedContentOnly;	// 89 = 0x59
    _Bool _emptyShelf;	// 90 = 0x5a
    id <TVCKBackgroundShelfViewControllerDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000013d4b
@property(nonatomic) _Bool emptyShelf; // @synthesize emptyShelf=_emptyShelf;
@property(nonatomic) _Bool relatedContentOnly; // @synthesize relatedContentOnly=_relatedContentOnly;
@property(nonatomic) __weak id <TVCKBackgroundShelfViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2;	// IMP=0x0000000000013c86
- (id)_wrappingView;	// IMP=0x0000000000013c3b
- (void)_configureWithRelatedElement:(id)arg1 relatedView:(id)arg2;	// IMP=0x000000000001393d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001385d
- (void)_setupAccessoryMaterialFallbackView;	// IMP=0x00000000000136af
- (void)_configureWithBackgroundElement:(id)arg1;	// IMP=0x0000000000012d06
- (void)_configureWithShelfElement:(id)arg1;	// IMP=0x0000000000012bf3
- (void)updateWithViewElement:(id)arg1;	// IMP=0x0000000000012858
- (void)_configureShelf;	// IMP=0x00000000000124c8
- (void)loadView;	// IMP=0x0000000000012344

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
