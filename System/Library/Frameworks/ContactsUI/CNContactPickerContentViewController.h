//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNContactNavigationControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactPickerContentViewController-Protocol.h>

@class CNContactNavigationController, CNContactStoreDataSource, NSArray, NSMutableArray, NSPredicate, NSString, UINavigationController;
@protocol CNContactPickerContentDelegate;

__attribute__((visibility("hidden")))
@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController>
{
    _Bool _clientWantsSingleContact;	// 8 = 0x8
    _Bool _clientWantsSingleProperty;	// 9 = 0x9
    _Bool _clientWantsMultipleContacts;	// 10 = 0xa
    _Bool _clientWantsMultipleProperties;	// 11 = 0xb
    _Bool _clientHasContactsAccess;	// 12 = 0xc
    _Bool _hidesSearchableSources;	// 13 = 0xd
    _Bool _onlyRealContacts;	// 14 = 0xe
    _Bool _allowsEditing;	// 15 = 0xf
    _Bool _allowsCancel;	// 16 = 0x10
    _Bool _hidesPromptInLandscape;	// 17 = 0x11
    id <CNContactPickerContentDelegate> _delegate;	// 24 = 0x18
    CNContactNavigationController *_contactNavigationController;	// 32 = 0x20
    CNContactStoreDataSource *_dataSource;	// 40 = 0x28
    NSMutableArray *_contactProperties;	// 48 = 0x30
    NSArray *_displayedPropertyKeys;	// 56 = 0x38
    long long _cardActions;	// 64 = 0x40
    NSString *_prompt;	// 72 = 0x48
    NSString *_bannerTitle;	// 80 = 0x50
    NSString *_bannerValue;	// 88 = 0x58
    NSPredicate *_predicateForEnablingContact;	// 96 = 0x60
    NSPredicate *_predicateForSelectionOfContact;	// 104 = 0x68
    NSPredicate *_predicateForSelectionOfProperty;	// 112 = 0x70
}

+ (id)descriptorForContactPropertiesSupportingPredicateEvaluation;	// IMP=0x00000000000c4350
- (void).cxx_destruct;	// IMP=0x00000000000c7443
@property(copy, nonatomic) NSPredicate *predicateForSelectionOfProperty; // @synthesize predicateForSelectionOfProperty=_predicateForSelectionOfProperty;
@property(copy, nonatomic) NSPredicate *predicateForSelectionOfContact; // @synthesize predicateForSelectionOfContact=_predicateForSelectionOfContact;
@property(copy, nonatomic) NSPredicate *predicateForEnablingContact; // @synthesize predicateForEnablingContact=_predicateForEnablingContact;
@property(copy, nonatomic) NSString *bannerValue; // @synthesize bannerValue=_bannerValue;
@property(copy, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(nonatomic) _Bool hidesPromptInLandscape; // @synthesize hidesPromptInLandscape=_hidesPromptInLandscape;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) _Bool allowsCancel; // @synthesize allowsCancel=_allowsCancel;
@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property(nonatomic) _Bool onlyRealContacts; // @synthesize onlyRealContacts=_onlyRealContacts;
@property(nonatomic) _Bool hidesSearchableSources; // @synthesize hidesSearchableSources=_hidesSearchableSources;
@property(nonatomic) long long cardActions; // @synthesize cardActions=_cardActions;
@property(copy, nonatomic) NSArray *displayedPropertyKeys; // @synthesize displayedPropertyKeys=_displayedPropertyKeys;
@property(retain, nonatomic) NSMutableArray *contactProperties; // @synthesize contactProperties=_contactProperties;
@property(retain, nonatomic) CNContactStoreDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) CNContactNavigationController *contactNavigationController; // @synthesize contactNavigationController=_contactNavigationController;
@property(nonatomic) _Bool clientHasContactsAccess; // @synthesize clientHasContactsAccess=_clientHasContactsAccess;
@property(nonatomic) _Bool clientWantsMultipleProperties; // @synthesize clientWantsMultipleProperties=_clientWantsMultipleProperties;
@property(nonatomic) _Bool clientWantsMultipleContacts; // @synthesize clientWantsMultipleContacts=_clientWantsMultipleContacts;
@property(nonatomic) _Bool clientWantsSingleProperty; // @synthesize clientWantsSingleProperty=_clientWantsSingleProperty;
@property(nonatomic) _Bool clientWantsSingleContact; // @synthesize clientWantsSingleContact=_clientWantsSingleContact;
@property(nonatomic) __weak id <CNContactPickerContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_selectedProperties:(id)arg1;	// IMP=0x00000000000c6dd2
- (void)_selectedContacts:(id)arg1;	// IMP=0x00000000000c6b2d
- (void)_selectedProperty:(id)arg1;	// IMP=0x00000000000c699a
- (void)_selectedContact:(id)arg1;	// IMP=0x00000000000c68b2
- (id)descriptorsForKeysRequiredByDelegate;	// IMP=0x00000000000c6820
- (void)contactNavigationControllerDidCancel:(id)arg1;	// IMP=0x00000000000c67e3
- (void)contactNavigationControllerDidComplete:(id)arg1;	// IMP=0x00000000000c6747
- (_Bool)contactNavigationController:(id)arg1 presentContactViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000c667a
- (_Bool)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;	// IMP=0x00000000000c649c
- (_Bool)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1;	// IMP=0x00000000000c6494
- (_Bool)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;	// IMP=0x00000000000c6299
- (_Bool)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000c5778
- (_Bool)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;	// IMP=0x00000000000c5627
- (void)invalidate;	// IMP=0x00000000000c5621
- (void)invalidateSelectionAnimated:(_Bool)arg1;	// IMP=0x00000000000c5470
@property(readonly, nonatomic) UINavigationController *navigationController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000000c53d2
- (void)_updatePromptWithViewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;	// IMP=0x00000000000c51c3
- (id)_validatePredicatesWithError:(id *)arg1;	// IMP=0x00000000000c4e20
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4400
- (id)init;	// IMP=0x00000000000c4369

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

