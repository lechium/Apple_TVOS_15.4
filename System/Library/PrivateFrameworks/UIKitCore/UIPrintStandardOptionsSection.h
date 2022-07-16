//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIPrintPresetsOption, UIPrinterSelectionOption;

__attribute__((visibility("hidden")))
@interface UIPrintStandardOptionsSection
{
    UIPrinterSelectionOption *_printerSelectionOption;	// 8 = 0x8
    UIPrintPresetsOption *_presetsOption;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000007ef8c8
@property(retain, nonatomic) UIPrintPresetsOption *presetsOption; // @synthesize presetsOption=_presetsOption;
@property(retain, nonatomic) UIPrinterSelectionOption *printerSelectionOption; // @synthesize printerSelectionOption=_printerSelectionOption;
- (void)setShowContactingPrinter:(_Bool)arg1;	// IMP=0x00000000007ef832
- (void)updatePrintOptionsList;	// IMP=0x00000000007ef737
- (void)setCurrentPrinter:(id)arg1;	// IMP=0x00000000007ef666
- (void)updatePrinterInfo;	// IMP=0x00000000007ef629
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;	// IMP=0x00000000007ef4fc

@end
