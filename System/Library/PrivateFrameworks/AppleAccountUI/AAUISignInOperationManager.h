//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/ACUIAccountOperationsDelegate-Protocol.h>

@class ACUIAccountOperationsHelper, NSString, UIViewController;
@protocol AAUISignInOperationDelegate;

@interface AAUISignInOperationManager : NSObject <ACUIAccountOperationsDelegate>
{
    ACUIAccountOperationsHelper *_accountOperationsHelper;	// 8 = 0x8
    id <AAUISignInOperationDelegate> _delegate;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000023d53
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <AAUISignInOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_disableDataclasses:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000023b9b
- (id)_alertControllerForPicker:(id)arg1;	// IMP=0x0000000000023b30
- (void)_mainQueue_dataclassActionsForPicker:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002367e
- (id)_dataclassMergeActionPickerFromPicker:(id)arg1;	// IMP=0x0000000000023551
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;	// IMP=0x000000000002316b
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000023061
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;	// IMP=0x0000000000022f97
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000022dbd
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;	// IMP=0x0000000000022cf3
- (void)_delegate_signInOperationManagerDidSaveAccount:(id)arg1 error:(id)arg2;	// IMP=0x0000000000022c40
- (void)_refreshEnabledDataclassesForAccount:(id)arg1;	// IMP=0x0000000000022b2e
- (void)signInAccount:(id)arg1 enablingDataclasses:(_Bool)arg2;	// IMP=0x0000000000022856
- (id)initWithPresentingViewController:(id)arg1;	// IMP=0x0000000000022808
- (id)init;	// IMP=0x0000000000022765

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

