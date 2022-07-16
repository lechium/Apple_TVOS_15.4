//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSIndexPath, PKGroupsController, PKSecureElementPass, PKTableHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKShareableCredentialsExpressPassSelectionViewController
{
    NSArray *_passes;	// 8 = 0x8
    PKGroupsController *_groupsController;	// 16 = 0x10
    _Bool _hasSetDefault;	// 24 = 0x18
    PKTableHeaderView *_tableHeader;	// 32 = 0x20
    double _cachedHeaderViewWidth;	// 40 = 0x28
    NSIndexPath *_previouslySelectedIndexPath;	// 48 = 0x30
    PKSecureElementPass *_previouslySelectedPass;	// 56 = 0x38
    id <PKPaymentSetupViewControllerDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000149ea9
- (void)_enableView:(_Bool)arg1;	// IMP=0x0000000000149deb
- (void)_done;	// IMP=0x0000000000149c0b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000149aa6
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001497ae
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000149791
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000149786
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x000000000014977e
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001495ef
- (void)viewDidLoad;	// IMP=0x0000000000149265
- (id)initWithPasses:(id)arg1 groupsController:(id)arg2 context:(long long)arg3 delegate:(id)arg4;	// IMP=0x000000000014910f

@end

