//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;
@protocol ACUIAccountOperationsDelegate, OS_dispatch_queue;

@interface ACUIAccountOperationsHelper : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accountOperationsQueue;	// 16 = 0x10
    _Bool _isRemovingAccount;	// 24 = 0x18
    _Bool _isSavingAccount;	// 25 = 0x19
    id <ACUIAccountOperationsDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000019150
@property _Bool isSavingAccount; // @synthesize isSavingAccount=_isSavingAccount;
@property _Bool isRemovingAccount; // @synthesize isRemovingAccount=_isRemovingAccount;
@property(nonatomic) __weak id <ACUIAccountOperationsDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2 withError:(id *)arg3;	// IMP=0x0000000000018410
- (void)removeAccount:(id)arg1;	// IMP=0x0000000000017600
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000016f10
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(_Bool)arg3;	// IMP=0x0000000000016e70
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2;	// IMP=0x0000000000016de0
- (void)saveAccount:(id)arg1 requireVerification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016010
- (void)saveAccount:(id)arg1 requireVerification:(_Bool)arg2;	// IMP=0x0000000000015fa0
- (void)saveAccount:(id)arg1;	// IMP=0x0000000000015f40
- (id)dataclassActionsForAccountSave:(id)arg1 forDataclass:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000015d40
- (id)initWithAccountStore:(id)arg1;	// IMP=0x0000000000015c40

@end
