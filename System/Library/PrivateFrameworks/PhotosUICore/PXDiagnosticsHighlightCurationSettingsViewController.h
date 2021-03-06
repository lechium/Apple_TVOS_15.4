//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, UISwitch, UITextField;
@protocol PXDiagnosticsHighlightCurationSettingsViewControllerDelegate;

@interface PXDiagnosticsHighlightCurationSettingsViewController : UIViewController
{
    id <PXDiagnosticsHighlightCurationSettingsViewControllerDelegate> _delegate;	// 8 = 0x8
    UISwitch *_doIdenticalDedupingSwitch;	// 16 = 0x10
    UITextField *_identicalDedupingTimeIntervalTextField;	// 24 = 0x18
    UITextField *_identicalDedupingTimeIntervalForPeopleTextField;	// 32 = 0x20
    UITextField *_identicalDedupingMaximumTimeGroupExtensionTextField;	// 40 = 0x28
    UITextField *_maximumNumberOfItemsPerIdenticalClusterTextField;	// 48 = 0x30
    UITextField *_identicalDedupingThresholdTextField;	// 56 = 0x38
    UITextField *_identicalDedupingThresholdForPeopleTextField;	// 64 = 0x40
    UITextField *_identicalDedupingThresholdForBestItemsTextField;	// 72 = 0x48
    UISwitch *_useFaceprintsForIdenticalDedupingSwitch;	// 80 = 0x50
    UITextField *_identicalDedupingFaceprintDistanceTextField;	// 88 = 0x58
    UISwitch *_doSemanticalDedupingSwitch;	// 96 = 0x60
    UITextField *_semanticalDedupingTimeIntervalTextField;	// 104 = 0x68
    UITextField *_semanticalDedupingTimeIntervalForPeopleTextField;	// 112 = 0x70
    UITextField *_semanticalDedupingTimeIntervalForPersonsTextField;	// 120 = 0x78
    UITextField *_semanticalDedupingMaximumTimeGroupExtensionTextField;	// 128 = 0x80
    UITextField *_maximumNumberOfItemsPerSemanticalClusterTextField;	// 136 = 0x88
    UITextField *_semanticalDedupingThresholdTextField;	// 144 = 0x90
    UITextField *_semanticalDedupingThresholdForPeopleTextField;	// 152 = 0x98
    UITextField *_semanticalDedupingThresholdForPersonsTextField;	// 160 = 0xa0
    UISwitch *_doNotSemanticallyDedupePeopleSwitch;	// 168 = 0xa8
    UISwitch *_doNotSemanticallyDedupePersonsSwitch;	// 176 = 0xb0
    UISwitch *_allowAdaptiveForSemanticalDedupingSwitch;	// 184 = 0xb8
    UISwitch *_useOnlyScenesForDedupingSwitch;	// 192 = 0xc0
    UISwitch *_useAllPersonsForDedupingSwitch;	// 200 = 0xc8
    UISwitch *_useFaceQualityForElectionSwitch;	// 208 = 0xd0
    UISwitch *_doNotDedupeVideosSwitch;	// 216 = 0xd8
    UISwitch *_doNotDedupeInterestingPortraitsAndLivePicturesSwitch;	// 224 = 0xe0
    UISwitch *_onlyDedupeContiguousItemsSwitch;	// 232 = 0xe8
    UISwitch *_doDejunkSwitch;	// 240 = 0xf0
    UISwitch *_returnDedupedJunkIfOnlyJunkSwitch;	// 248 = 0xf8
    UISwitch *_doFinalPassSwitch;	// 256 = 0x100
    UITextField *_finalPassTimeIntervalTextField;	// 264 = 0x108
    UITextField *_finalPassMaximumTimeGroupExtensionTextField;	// 272 = 0x110
    UITextField *_finalPassDedupingThresholdTextField;	// 280 = 0x118
    NSDictionary *_options;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x000000000058c474
- (void)_done:(id)arg1;	// IMP=0x000000000058c3de
- (void)_cancel:(id)arg1;	// IMP=0x000000000058c394
- (void)_resetSettings:(id)arg1;	// IMP=0x000000000058c370
- (void)_applySettingsGlobally:(id)arg1;	// IMP=0x000000000058c317
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void)viewDidLoad;	// IMP=0x000000000058a595
- (void)loadView;	// IMP=0x00000000005895c5
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000589557

@end

