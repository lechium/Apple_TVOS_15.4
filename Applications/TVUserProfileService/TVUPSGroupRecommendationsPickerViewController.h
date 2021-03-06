//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVSUIGroupRecommendationsPickerDataSource, UINavigationController;

@interface TVUPSGroupRecommendationsPickerViewController : UIViewController
{
    _Bool _isUpdating;	// 8 = 0x8
    UINavigationController *_presentationController;	// 16 = 0x10
    TVSUIGroupRecommendationsPickerDataSource *_dataSource;	// 24 = 0x18
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000003e30
+ (id)_exportedInterface;	// IMP=0x0010000000003cb0
- (void).cxx_destruct;	// IMP=0x0020000000004cc0
@property(nonatomic) _Bool isUpdating; // @synthesize isUpdating=_isUpdating;
@property(retain, nonatomic) TVSUIGroupRecommendationsPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
// Error: Property attributes should begin with the type ('T') attribute, property name: presentationController
// Property attributes: (null)

- (id)userPickerViewController:(id)arg1 descriptionForUserWithIdentifier:(id)arg2;	// IMP=0x0010000000004820
- (void)userPickerViewControllerHandleAddNewUserAction:(id)arg1;	// IMP=0x0010000000004750
- (void)userPickerViewController:(id)arg1 didFinishWithSelectedUserIdentifiers:(id)arg2;	// IMP=0x0010000000004220
- (void)userPickerViewController:(id)arg1 didDeselectUserWithIdentifier:(id)arg2;	// IMP=0x0010000000004190
- (_Bool)userPickerViewController:(id)arg1 shouldDeselectUserWithIdentifier:(id)arg2;	// IMP=0x0010000000004080
- (void)userPickerViewController:(id)arg1 didSelectUserWithIdentifier:(id)arg2;	// IMP=0x0010000000003ff0
- (_Bool)userPickerViewController:(id)arg1 shouldSelectUserWithIdentifier:(id)arg2;	// IMP=0x0010000000003f20
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003b90
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x00100000000035c0
- (void)_showConsentDialogWithUserIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000003020
- (_Bool)_userNeedsToConsentWithIdentifier:(id)arg1;	// IMP=0x0010000000002f40
- (void)_dimiss;	// IMP=0x0010000000002ee0
- (void)_menuPressed:(id)arg1;	// IMP=0x0010000000002de0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

