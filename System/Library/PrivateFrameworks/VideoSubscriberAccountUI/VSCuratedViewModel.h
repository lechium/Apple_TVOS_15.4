//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccountUI/VSLogoImageViewModel-Protocol.h>

@class NSItemProvider, NSString, UIImage, VSOptional;

__attribute__((visibility("hidden")))
@interface VSCuratedViewModel <VSLogoImageViewModel>
{
    _Bool _beginValidationButtonEnabled;	// 8 = 0x8
    _Bool _showFooter;	// 9 = 0x9
    NSItemProvider *_logoProvider;	// 16 = 0x10
    UIImage *_logo;	// 24 = 0x18
    NSString *_logoAccessibilityLabel;	// 32 = 0x20
    NSString *_beginValidationButtonTitle;	// 40 = 0x28
    VSOptional *_identityProviderDisplayName;	// 48 = 0x30
    NSString *_message;	// 56 = 0x38
    NSString *_notice;	// 64 = 0x40
    NSString *_footerText;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000079181
@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(nonatomic) _Bool showFooter; // @synthesize showFooter=_showFooter;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) VSOptional *identityProviderDisplayName; // @synthesize identityProviderDisplayName=_identityProviderDisplayName;
@property(copy, nonatomic) NSString *beginValidationButtonTitle; // @synthesize beginValidationButtonTitle=_beginValidationButtonTitle;
@property(nonatomic, getter=isBeginValidationButtonEnabled) _Bool beginValidationButtonEnabled; // @synthesize beginValidationButtonEnabled=_beginValidationButtonEnabled;
@property(copy, nonatomic) NSString *logoAccessibilityLabel; // @synthesize logoAccessibilityLabel=_logoAccessibilityLabel;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSItemProvider *logoProvider; // @synthesize logoProvider=_logoProvider;
- (void)configureWithRequest:(id)arg1;	// IMP=0x0000000000078e98
- (id)init;	// IMP=0x0000000000078e3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

