//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentPass, PKRemotePaymentInstrument;

@interface PKPaymentPreferenceCardEntry : NSObject
{
    _Bool _shouldShowCardUI;	// 8 = 0x8
    _Bool _isSelectable;	// 9 = 0x9
    _Bool _insetsSeparatorByTextOffset;	// 10 = 0xa
    PKPaymentPass *_pass;	// 16 = 0x10
    PKRemotePaymentInstrument *_remotePaymentInstrument;	// 24 = 0x18
    PKPaymentApplication *_paymentApplication;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
    NSString *_availabilityString;	// 48 = 0x30
    CDUnknownBlockType _actionBlock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003b8c2c
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) _Bool insetsSeparatorByTextOffset; // @synthesize insetsSeparatorByTextOffset=_insetsSeparatorByTextOffset;
@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) _Bool shouldShowCardUI; // @synthesize shouldShowCardUI=_shouldShowCardUI;
@property(copy, nonatomic) NSString *availabilityString; // @synthesize availabilityString=_availabilityString;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument; // @synthesize remotePaymentInstrument=_remotePaymentInstrument;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;

@end

