//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@interface TVSettingsRestrictionsViewController : TSKViewController
{
}

- (void)_updateGuardedState;	// IMP=0x00400000000c0a20
- (void)_handleSetPasscodeResult:(id)arg1;	// IMP=0x00100000000c0970
- (void)_changePasscode:(id)arg1;	// IMP=0x00100000000c0220
- (void)_disableRestrictions;	// IMP=0x00100000000bfd50
- (void)_enableRestrictions;	// IMP=0x00100000000bfb10
- (void)_restrictionsFacadeDidChange:(id)arg1;	// IMP=0x00100000000bfac0
- (id)_ratingLongFormatter;	// IMP=0x00100000000bf990
- (id)_ratingFormatter;	// IMP=0x00100000000bf8d0
- (id)_contentFilterRegionFormatter;	// IMP=0x00100000000bf7d0
- (id)_yesNoFormatter;	// IMP=0x00100000000bf5d0
- (id)_allowRestrictBoolFormatter;	// IMP=0x00100000000bf4b0
- (id)_allowRestrictFormatter;	// IMP=0x00100000000bf2b0
- (id)_booksRatingFormatter;	// IMP=0x00100000000bf110
- (id)_explicitMusicFormatter;	// IMP=0x00100000000bef70
- (void)_toggleRestrictions:(id)arg1;	// IMP=0x00100000000beeb0
- (void)dealloc;	// IMP=0x00100000000bee30
- (id)loadSettingGroups;	// IMP=0x00100000000bade0
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000000bad00

@end

