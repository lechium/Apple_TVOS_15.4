//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKApplyConfirmInfoSectionControllerDelegate-Protocol.h>

@class NSString, PKApplyConfirmInfoSectionController;

@interface PKApplyConfirmInfoViewController <PKApplyConfirmInfoSectionControllerDelegate>
{
    PKApplyConfirmInfoSectionController *_sectionController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000020fe94
- (void)didSelectActionItem:(id)arg1;	// IMP=0x000000000020fc6e
- (void)viewDidLoad;	// IMP=0x000000000020fbbd
- (id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4;	// IMP=0x000000000020faf4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

