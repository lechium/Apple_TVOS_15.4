//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVKit/_TVDigitEntryViewController.h>

#import <ATVLegacyContentKit/_TVDigitEntryViewControllerDelegate-Protocol.h>

@class NSString;

@interface TVLJSPINEntryControl : _TVDigitEntryViewController <_TVDigitEntryViewControllerDelegate>
{
    CDUnknownBlockType _submitBlock;	// 8 = 0x8
    CDUnknownBlockType _cancelBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a7763
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType submitBlock; // @synthesize submitBlock=_submitBlock;
- (void)digitEntryViewControllerDidCancel:(id)arg1;	// IMP=0x00000000000a7700
- (void)digitEntryViewControllerDidFinish:(id)arg1;	// IMP=0x00000000000a767d
- (void)viewDidLoad;	// IMP=0x00000000000a75cf
- (id)initWithNumberOfDigits:(unsigned long long)arg1 userEditable:(_Bool)arg2 showsDigits:(_Bool)arg3 title:(id)arg4 prompt:(id)arg5 initialPINCode:(id)arg6;	// IMP=0x00000000000a7439

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

