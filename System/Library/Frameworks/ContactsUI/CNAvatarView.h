//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <ContactsUI/CNAvatarCardControllerDelegate-Protocol.h>
#import <ContactsUI/CNCardTransitioning-Protocol.h>
#import <ContactsUI/CNContactChangesObserver-Protocol.h>

@class CNAvatarCardController, CNContact, CNContactStore, NSArray, NSLayoutConstraint, NSString, PRLikeness, PRPersonaStore, UIButton, UIColor, UIImage, UINavigationController, UIView;
@protocol CNAvatarViewDelegate, CNCancelable;

@interface CNAvatarView : UIControl <CNAvatarCardControllerDelegate, CNContactChangesObserver, CNCardTransitioning>
{
    _Bool _showsActionsOnTap;	// 8 = 0x8
    _Bool _showsActionsOnForcePress;	// 9 = 0x9
    _Bool _threeDTouchEnabled;	// 10 = 0xa
    _Bool _showsContactOnTap;	// 11 = 0xb
    _Bool _registeredInNotifier;	// 12 = 0xc
    _Bool _registeredContactAction;	// 13 = 0xd
    _Bool _disableCornerRadiusForAvatar;	// 14 = 0xe
    _Bool _useHalfSizeMongramsAndImages;	// 15 = 0xf
    _Bool _autoUpdateContact;	// 16 = 0x10
    _Bool _asynchronousRendering;	// 17 = 0x11
    _Bool _allowsAnimation;	// 18 = 0x12
    CNContactStore *_contactStore;	// 24 = 0x18
    PRPersonaStore *_personaStore;	// 32 = 0x20
    NSArray *_contacts;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_message;	// 56 = 0x38
    id <CNAvatarViewDelegate> _delegate;	// 64 = 0x40
    UIView *_forcePressView;	// 72 = 0x48
    CNAvatarCardController *_cardController;	// 80 = 0x50
    UIButton *_imageButton;	// 88 = 0x58
    NSArray *_likenessProviders;	// 96 = 0x60
    id <CNCancelable> _resolverToken;	// 104 = 0x68
    NSArray *_likenessViews;	// 112 = 0x70
    UIView *_subviewsContainer;	// 120 = 0x78
    NSArray *_subviewsConstraints;	// 128 = 0x80
    NSLayoutConstraint *_likenessViewSizeConstraint;	// 136 = 0x88
    UINavigationController *_contactViewNavigationController;	// 144 = 0x90
    UIImage *_overrideImage;	// 152 = 0x98
    PRLikeness *_overridePRLikeness;	// 160 = 0xa0
    long long _monogrammerStyle;	// 168 = 0xa8
}

+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1;	// IMP=0x000000000000a203
+ (_Bool)defaultThreeDTouchSupport;	// IMP=0x000000000000a1fb
+ (id)descriptorForRequiredKeys;	// IMP=0x000000000000d405
- (void).cxx_destruct;	// IMP=0x000000000000d114
@property(nonatomic) _Bool allowsAnimation; // @synthesize allowsAnimation=_allowsAnimation;
@property(nonatomic) _Bool asynchronousRendering; // @synthesize asynchronousRendering=_asynchronousRendering;
@property(nonatomic) _Bool autoUpdateContact; // @synthesize autoUpdateContact=_autoUpdateContact;
@property(nonatomic) long long monogrammerStyle; // @synthesize monogrammerStyle=_monogrammerStyle;
@property(nonatomic) _Bool useHalfSizeMongramsAndImages; // @synthesize useHalfSizeMongramsAndImages=_useHalfSizeMongramsAndImages;
@property(nonatomic) _Bool disableCornerRadiusForAvatar; // @synthesize disableCornerRadiusForAvatar=_disableCornerRadiusForAvatar;
@property(retain, nonatomic) PRLikeness *overridePRLikeness; // @synthesize overridePRLikeness=_overridePRLikeness;
@property(retain, nonatomic) UIImage *overrideImage; // @synthesize overrideImage=_overrideImage;
@property _Bool registeredContactAction; // @synthesize registeredContactAction=_registeredContactAction;
@property _Bool registeredInNotifier; // @synthesize registeredInNotifier=_registeredInNotifier;
@property(retain, nonatomic) UINavigationController *contactViewNavigationController; // @synthesize contactViewNavigationController=_contactViewNavigationController;
@property(retain, nonatomic) NSLayoutConstraint *likenessViewSizeConstraint; // @synthesize likenessViewSizeConstraint=_likenessViewSizeConstraint;
@property(copy, nonatomic) NSArray *subviewsConstraints; // @synthesize subviewsConstraints=_subviewsConstraints;
@property(retain, nonatomic) UIView *subviewsContainer; // @synthesize subviewsContainer=_subviewsContainer;
@property(copy, nonatomic) NSArray *likenessViews; // @synthesize likenessViews=_likenessViews;
@property(retain, nonatomic) id <CNCancelable> resolverToken; // @synthesize resolverToken=_resolverToken;
@property(retain, nonatomic) NSArray *likenessProviders; // @synthesize likenessProviders=_likenessProviders;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) CNAvatarCardController *cardController; // @synthesize cardController=_cardController;
@property(nonatomic) __weak UIView *forcePressView; // @synthesize forcePressView=_forcePressView;
@property(nonatomic) _Bool showsContactOnTap; // @synthesize showsContactOnTap=_showsContactOnTap;
@property(nonatomic) __weak id <CNAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;
@property(readonly, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property _Bool transitioningImageVisible;
@property(readonly, nonatomic) struct CGRect transitioningImageFrame;
@property(readonly, nonatomic) UIImage *transitioningImage;
@property(readonly, nonatomic) struct CGRect transitioningContentFrame;
@property(readonly, nonatomic) struct CGRect transitioningFrame;
@property(readonly, nonatomic) UIView *transitioningView;
- (void)contactDidChange:(id)arg1;	// IMP=0x000000000000ca2f
- (_Bool)isHighlighted;	// IMP=0x000000000000c9eb
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000000c99f
- (void)didMoveToWindow;	// IMP=0x000000000000c949
- (void)_updateCardActions;	// IMP=0x000000000000c754
- (void)avatarCardControllerDidDismiss:(id)arg1;	// IMP=0x000000000000c6b7
- (void)avatarCardControllerWillDismiss:(id)arg1;	// IMP=0x000000000000c61a
- (_Bool)avatarCardController:(id)arg1 shouldShowContact:(id)arg2;	// IMP=0x000000000000c56b
- (void)avatarCardController:(id)arg1 willShowActions:(id)arg2;	// IMP=0x000000000000c4c1
- (id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;	// IMP=0x000000000000c3e5
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint)arg2;	// IMP=0x000000000000c1f8
- (id)presentingViewControllerForAvatarCardController:(id)arg1;	// IMP=0x000000000000c143
@property(nonatomic) _Bool bypassActionValidation;
@property(copy, nonatomic) NSArray *actionCategories;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000000bf55
- (void)_updateEnabled;	// IMP=0x000000000000beec
- (_Bool)shouldTrack;	// IMP=0x000000000000be9b
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x000000000000be62
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x000000000000be1a
- (id)imageForTransitioningToFullScreen;	// IMP=0x000000000000be12
@property(readonly, nonatomic) UIColor *accentColor;
- (void)setOverridePRLikeness:(id)arg1 reload:(_Bool)arg2;	// IMP=0x000000000000bda7
- (void)contactDidChange;	// IMP=0x000000000000bd7b
- (void)dismissContactViewController:(id)arg1;	// IMP=0x000000000000bce0
- (void)showContact:(id)arg1;	// IMP=0x000000000000bb47
- (void)_updateContactAction;	// IMP=0x000000000000ba3e
- (void)_updateRegistration;	// IMP=0x000000000000b677
- (double)_diameter;	// IMP=0x000000000000b5ef
@property(readonly, nonatomic) struct CGRect contentImageFrame;
@property(readonly, nonatomic) UIImage *contentImage;
- (void)setupAvatarCardControllerIfNeeded;	// IMP=0x000000000000b164
@property(nonatomic) _Bool prohibitsPersonaFetch;
- (void)_resolveContactLikenesses;	// IMP=0x000000000000b0a6
- (void)updateLikenessViewsWithCurrentSize;	// IMP=0x000000000000acf2
- (void)layoutSubviews;	// IMP=0x000000000000acb1
- (void)setupSubviews;	// IMP=0x000000000000acab
- (void)dealloc;	// IMP=0x000000000000ac34
- (void)_commonInit;	// IMP=0x000000000000a475
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a463
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000a417
- (id)init;	// IMP=0x000000000000a359
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(_Bool)arg3;	// IMP=0x000000000000a250
- (id)descriptorForRequiredKeys;	// IMP=0x000000000000a20b
@property(nonatomic) _Bool showsActionsOnForcePress;
@property(nonatomic) _Bool showsActionsOnTap;
@property(retain, nonatomic) CNContact *contact;
- (id)initWithContact:(id)arg1;	// IMP=0x000000000000d251

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIView *transitioningContentView;

@end
