//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIPrintScaleDownOnlyOption, UIPrintScaleToFitOption;

__attribute__((visibility("hidden")))
@interface UIPrintScalingSection
{
    UIPrintScaleToFitOption *_scaleToFitPrintOption;	// 8 = 0x8
    UIPrintScaleDownOnlyOption *_scaleDownOnlyPrintOption;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000928b6b
@property(retain, nonatomic) UIPrintScaleDownOnlyOption *scaleDownOnlyPrintOption; // @synthesize scaleDownOnlyPrintOption=_scaleDownOnlyPrintOption;
@property(retain, nonatomic) UIPrintScaleToFitOption *scaleToFitPrintOption; // @synthesize scaleToFitPrintOption=_scaleToFitPrintOption;
- (void)scaleToFitChanged;	// IMP=0x0000000000928aa7
- (void)updatePrintOptionsList;	// IMP=0x0000000000928976
- (void)dealloc;	// IMP=0x0000000000928901
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;	// IMP=0x0000000000928744

@end
