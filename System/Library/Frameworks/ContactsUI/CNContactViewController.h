//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactViewHostProtocol-Protocol.h>

@class CNContact, CNContactContentViewController, CNContactFormatter, CNContactStore, CNContainer, CNGroup, CNPolicy, NSArray, NSString, UIView, _UIAccessDeniedView;
@protocol CNContactContentViewController, CNContactViewControllerDelegate, CNContactViewControllerPrivateDelegate;

@interface CNContactViewController : UIViewController <CNContactViewHostProtocol>
{
    void *_addressBook;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
    _Bool _ignoreViewWillBePresented;	// 24 = 0x18
    _Bool _allowsEditing;	// 25 = 0x19
    _Bool _shouldShowLinkedContacts;	// 26 = 0x1a
    _Bool _highlightedPropertyImportant;	// 27 = 0x1b
    _Bool _requiresSetup;	// 28 = 0x1c
    _Bool _showingMeContact;	// 29 = 0x1d
    CNContact *_contact;	// 32 = 0x20
    NSArray *_displayedPropertyKeys;	// 40 = 0x28
    id <CNContactViewControllerDelegate> _delegate;	// 48 = 0x30
    CNContactStore *_contactStore;	// 56 = 0x38
    CNGroup *_parentGroup;	// 64 = 0x40
    CNContainer *_parentContainer;	// 72 = 0x48
    NSString *_alternateName;	// 80 = 0x50
    NSString *_message;	// 88 = 0x58
    CNContact *_contentContact;	// 96 = 0x60
    CNContactContentViewController *_contentViewController;	// 104 = 0x68
    _UIAccessDeniedView *_accessDeniedView;	// 112 = 0x70
    NSString *_highlightedPropertyKey;	// 120 = 0x78
    NSString *_highlightedPropertyIdentifier;	// 128 = 0x80
    NSArray *_extraBarButtonItems;	// 136 = 0x88
    UIViewController<CNContactContentViewController> *_viewController;	// 144 = 0x90
    CNPolicy *_policy;	// 152 = 0x98
    CNContact *_additionalContact;	// 160 = 0xa0
    long long _displayMode;	// 168 = 0xa8
    long long _editMode;	// 176 = 0xb0
    long long _actions;	// 184 = 0xb8
    CNContactFormatter *_contactFormatter;	// 192 = 0xc0
    NSString *_primaryPropertyKey;	// 200 = 0xc8
    UIView *_contactHeaderView;	// 208 = 0xd0
    UIViewController *_contactHeaderViewController;	// 216 = 0xd8
}

+ (id)viewControllerForUpdatingContact:(id)arg1 withPropertiesFromContact:(id)arg2;	// IMP=0x00000000000b0c6f
+ (id)viewControllerForNewContact:(id)arg1;	// IMP=0x00000000000b0af0
+ (id)viewControllerForUnknownContact:(id)arg1;	// IMP=0x00000000000b09ef
+ (id)viewControllerForContact:(id)arg1;	// IMP=0x00000000000b08ee
+ (id)descriptorForRequiredKeys;	// IMP=0x00000000000b085c
- (void).cxx_destruct;	// IMP=0x00000000000b3c65
@property(retain, nonatomic) UIViewController *contactHeaderViewController; // @synthesize contactHeaderViewController=_contactHeaderViewController;
@property(retain, nonatomic) UIView *contactHeaderView; // @synthesize contactHeaderView=_contactHeaderView;
@property(retain, nonatomic) NSString *primaryPropertyKey; // @synthesize primaryPropertyKey=_primaryPropertyKey;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
@property(nonatomic) long long actions; // @synthesize actions=_actions;
@property(nonatomic) long long editMode; // @synthesize editMode=_editMode;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) _Bool showingMeContact; // @synthesize showingMeContact=_showingMeContact;
@property(retain, nonatomic) CNContact *additionalContact; // @synthesize additionalContact=_additionalContact;
@property(readonly, nonatomic) CNPolicy *policy; // @synthesize policy=_policy;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIViewController<CNContactContentViewController> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool requiresSetup; // @synthesize requiresSetup=_requiresSetup;
@property(retain, nonatomic) NSArray *extraBarButtonItems; // @synthesize extraBarButtonItems=_extraBarButtonItems;
@property(nonatomic) _Bool highlightedPropertyImportant; // @synthesize highlightedPropertyImportant=_highlightedPropertyImportant;
@property(retain, nonatomic) NSString *highlightedPropertyIdentifier; // @synthesize highlightedPropertyIdentifier=_highlightedPropertyIdentifier;
@property(retain, nonatomic) NSString *highlightedPropertyKey; // @synthesize highlightedPropertyKey=_highlightedPropertyKey;
@property(readonly, nonatomic) _UIAccessDeniedView *accessDeniedView; // @synthesize accessDeniedView=_accessDeniedView;
@property(retain, nonatomic) CNContactContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) CNContact *contentContact; // @synthesize contentContact=_contentContact;
@property(nonatomic) _Bool shouldShowLinkedContacts; // @synthesize shouldShowLinkedContacts=_shouldShowLinkedContacts;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *alternateName; // @synthesize alternateName=_alternateName;
@property(retain, nonatomic) CNContainer *parentContainer; // @synthesize parentContainer=_parentContainer;
@property(retain, nonatomic) CNGroup *parentGroup; // @synthesize parentGroup=_parentGroup;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) __weak id <CNContactViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *displayedPropertyKeys; // @synthesize displayedPropertyKeys=_displayedPropertyKeys;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)isPresentingFullscreen:(_Bool)arg1;	// IMP=0x00000000000b3841
- (void)didDeleteContact:(id)arg1;	// IMP=0x00000000000b3788
- (void)didCompleteWithContact:(id)arg1;	// IMP=0x00000000000b36de
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;	// IMP=0x00000000000b35c3
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;	// IMP=0x00000000000b34ad
- (void)enableCancelKeyboardShortcut;	// IMP=0x00000000000b3447
- (void)enableSaveKeyboardShortcut;	// IMP=0x00000000000b337d
- (void)updateEditNavigationItemsAnimated:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;	// IMP=0x00000000000b2e31
- (void)setDoneButtonText:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000b2cae
- (void)toggleEditing:(id)arg1;	// IMP=0x00000000000b2c71
- (void)editCancel:(id)arg1;	// IMP=0x00000000000b2c34
- (id)navigationItemController;	// IMP=0x00000000000b2b76
- (void)_prepareViewController;	// IMP=0x00000000000b2901
- (_Bool)_shouldBeOutOfProcess;	// IMP=0x00000000000b28b8
- (void)_setupViewController;	// IMP=0x00000000000b180c
- (void)setContact:(id)arg1 additionalContact:(id)arg2 mode:(long long)arg3;	// IMP=0x00000000000b1753
- (void)_setViewController:(id)arg1;	// IMP=0x00000000000b16a3
- (void)_endDelayingPresentation;	// IMP=0x00000000000b165d
- (_Bool)_isDelayingPresentation;	// IMP=0x00000000000b15d0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000b1516
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000b14c4
- (void)_viewWillBePresented;	// IMP=0x00000000000b14b2
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x00000000000b149d
- (void)loadView;	// IMP=0x00000000000b13d0
@property(readonly, nonatomic) id <CNContactViewControllerPrivateDelegate> privateDelegate;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b1264
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000b124f
- (void)highlightPropertyWithKey:(id)arg1 identifier:(id)arg2 important:(_Bool)arg3;	// IMP=0x00000000000b11dc
@property(nonatomic) _Bool allowsActions;
- (id)_primaryPropertyStringForContact:(id)arg1;	// IMP=0x00000000000b0f03
- (id)_contactPresentedViewController;	// IMP=0x00000000000b0e4b
- (void)dealloc;	// IMP=0x00000000000b0daa
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000b08d7
- (id)initWithMode:(long long)arg1;	// IMP=0x00000000000b0875

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

