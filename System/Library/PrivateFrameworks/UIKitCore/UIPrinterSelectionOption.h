//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPrinterBrowserOwner-Protocol.h>

@class NSString, PKPrinter, UIPrinterBrowserViewController;

__attribute__((visibility("hidden")))
@interface UIPrinterSelectionOption <UIPrinterBrowserOwner>
{
    _Bool _contactingPrinter;	// 8 = 0x8
    PKPrinter *_printer;	// 16 = 0x10
    UIPrinterBrowserViewController *_browserController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000007f0393
@property(nonatomic) _Bool contactingPrinter; // @synthesize contactingPrinter=_contactingPrinter;
@property(retain, nonatomic) UIPrinterBrowserViewController *browserController; // @synthesize browserController=_browserController;
@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
- (void)setShowContactingPrinter:(_Bool)arg1;	// IMP=0x00000000007f0184
- (void)showContacting;	// IMP=0x00000000007effde
- (void)cancelPrinting;	// IMP=0x00000000007eff2f
- (_Bool)filtersPrinters;	// IMP=0x00000000007eff27
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000007eff1c
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000007eff14
- (void)printerBrowserViewDidDisappear;	// IMP=0x00000000007eff0e
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x00000000007eff08
- (void)didSelectPrintOption;	// IMP=0x00000000007efd59
- (id)summary;	// IMP=0x00000000007efcd9
- (id)printerDisplayName:(id)arg1;	// IMP=0x00000000007efbc2
- (void)setCurrentPrinter:(id)arg1;	// IMP=0x00000000007efb36
- (id)printOptionTableViewCell;	// IMP=0x00000000007ef9b0
- (_Bool)shouldShow;	// IMP=0x00000000007ef9a8
- (id)initWithPrintInfo:(id)arg1 printPanelViewController:(id)arg2;	// IMP=0x00000000007ef8f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

