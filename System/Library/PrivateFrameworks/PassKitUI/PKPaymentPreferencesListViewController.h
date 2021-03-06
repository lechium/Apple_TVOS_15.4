//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKAddressEditorViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKAddressSearcherViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentPreferenceContactSectionControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentPreferenceSectionControllerDelegate-Protocol.h>

@class NSArray, PKContactFormatValidator, PKPaymentPreferenceContactSectionController, PKPaymentPreferenceOptionListItem;

@interface PKPaymentPreferencesListViewController <PKPaymentPreferenceSectionControllerDelegate, PKPaymentPreferenceContactSectionControllerDelegate, PKAddressEditorViewControllerDelegate, PKAddressSearcherViewControllerDelegate>
{
    CDUnknownBlockType _handler;	// 8 = 0x8
    PKContactFormatValidator *_contactFormatValidator;	// 16 = 0x10
    PKPaymentPreferenceContactSectionController *_editingContactSectionController;	// 24 = 0x18
    PKPaymentPreferenceOptionListItem *_editingItem;	// 32 = 0x20
    NSArray *_preferences;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004210ce
@property(retain, nonatomic) NSArray *preferences; // @synthesize preferences=_preferences;
- (void)addressSearcherViewControllerDidCancel:(id)arg1;	// IMP=0x0000000000421090
- (void)addressSearcherViewController:(id)arg1 selectedContact:(id)arg2;	// IMP=0x000000000042106a
- (void)addressEditorViewControllerDidCancel:(id)arg1;	// IMP=0x0000000000421051
- (void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2;	// IMP=0x0000000000420eb3
- (void)_updateContactAtIndex:(unsigned long long)arg1 withCell:(id)arg2;	// IMP=0x000000000042085a
- (void)_endCurrentInlineEditing;	// IMP=0x00000000004206ee
- (void)_handleSelectedContact:(id)arg1;	// IMP=0x00000000004205b5
- (id)_requiredKeysForContactPreference:(id)arg1;	// IMP=0x000000000042045b
- (void)_reloadEditedSection:(id)arg1;	// IMP=0x00000000004203c0
- (void)startInlineEditingForContactItem:(id)arg1 inSectionController:(id)arg2;	// IMP=0x0000000000420164
- (void)presentMeCardAlertControllerWithContact:(id)arg1 contactKey:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000041fea0
- (void)showContactsPickerForPreference:(id)arg1 inSectionController:(id)arg2;	// IMP=0x000000000041fe9a
- (void)showAddressPickerForPreference:(id)arg1 inSectionController:(id)arg2;	// IMP=0x000000000041fe94
- (void)showAddressEditorForContactItem:(id)arg1 inSectionController:(id)arg2;	// IMP=0x000000000041fc25
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2 forSectionController:(id)arg3;	// IMP=0x000000000041fc13
- (_Bool)collectionViewIsEditingForSectionController:(id)arg1;	// IMP=0x000000000041fbcf
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000041fb40
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000000041fa8e
- (void)_keyboardDidShow:(id)arg1;	// IMP=0x000000000041f855
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000041f7f1
- (void)_updateNavigationBarButtons;	// IMP=0x000000000041f58d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000041f44b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000041f364
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000041f270
- (void)viewDidLoad;	// IMP=0x000000000041f201
- (id)initWithPreferences:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4 contactFormatValidator:(id)arg5;	// IMP=0x000000000041ed10

@end

