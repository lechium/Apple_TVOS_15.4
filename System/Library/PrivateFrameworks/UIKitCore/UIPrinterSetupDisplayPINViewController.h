//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupDisplayPINViewController
{
    PKPrinter *_printer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b024e6
@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;
- (void)enterPIN;	// IMP=0x0000000000b023b5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000b02322
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000b0228b
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000b021ee
- (void)showDisplayMessage:(long long)arg1;	// IMP=0x0000000000b0200d
- (void)loadView;	// IMP=0x0000000000b01e55
- (id)initWithPrinter:(id)arg1;	// IMP=0x0000000000b01ded

@end
