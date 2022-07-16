//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPrinter, UIPrinterSetupConnectingView, UIPrinterSetupPINView, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupPINViewController
{
    PKPrinter *_printer;	// 8 = 0x8
    UIPrinterSetupConnectingView *_connectingView;	// 16 = 0x10
    UIPrinterSetupPINView *_PINView;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000b04a9a
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIPrinterSetupPINView *PINView; // @synthesize PINView=_PINView;
@property(retain, nonatomic) UIPrinterSetupConnectingView *connectingView; // @synthesize connectingView=_connectingView;
@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
- (void)connectToPrinter;	// IMP=0x0000000000b04770
- (void)connected:(_Bool)arg1;	// IMP=0x0000000000b04553
- (void)showFailure;	// IMP=0x0000000000b04448
- (void)showSetup;	// IMP=0x0000000000b0433c
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000b042a5
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000b04208
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000b041bf
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000b0410b
- (void)loadView;	// IMP=0x0000000000b03ff5
- (void)dealloc;	// IMP=0x0000000000b03f80
- (id)initWithPrinter:(id)arg1;	// IMP=0x0000000000b03ea9

@end
