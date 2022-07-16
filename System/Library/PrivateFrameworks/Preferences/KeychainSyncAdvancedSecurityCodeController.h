//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/UIAlertViewDelegate-Protocol.h>

@class NSString, UIFont;

@interface KeychainSyncAdvancedSecurityCodeController <UIAlertViewDelegate>
{
    double _cellTextWidth;	// 184 = 0xb8
    UIFont *_cellFont;	// 192 = 0xc0
    _Bool _showsDisableRecoveryOption;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000098233
@property(nonatomic) _Bool showsDisableRecoveryOption; // @synthesize showsDisableRecoveryOption=_showsDisableRecoveryOption;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000097fc2
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000097cb6
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000097c57
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;	// IMP=0x0000000000097c0d
- (void)nextPressed;	// IMP=0x0000000000097b8b
- (void)_finishedWithSpecifier:(id)arg1;	// IMP=0x0000000000097773
- (id)specifiers;	// IMP=0x000000000009739a
- (void)viewDidLoad;	// IMP=0x00000000000972ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
