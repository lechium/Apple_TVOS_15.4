//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemUI/TVSUITextAlertController.h>

@class NSString;

@interface OBPrivacyCombinedController : TVSUITextAlertController
{
    _Bool _allowsOpeningSafari;	// 8 = 0x8
    _Bool _presentedFromPrivacyPane;	// 9 = 0x9
    NSString *_displayLanguage;	// 16 = 0x10
}

+ (void)presentPrivacyCombinedControllerOverController:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000040e7
+ (id)new;	// IMP=0x0000000000003f4c
- (void).cxx_destruct;	// IMP=0x00000000000041f6
@property _Bool presentedFromPrivacyPane; // @synthesize presentedFromPrivacyPane=_presentedFromPrivacyPane;
@property(retain) NSString *displayLanguage; // @synthesize displayLanguage=_displayLanguage;
@property _Bool allowsOpeningSafari; // @synthesize allowsOpeningSafari=_allowsOpeningSafari;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000004065
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x0000000000003f6a
- (id)init;	// IMP=0x0000000000003f56

@end

