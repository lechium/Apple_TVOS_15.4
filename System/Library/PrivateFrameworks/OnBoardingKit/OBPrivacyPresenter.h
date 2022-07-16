//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, OBPrivacyCombinedController, OBPrivacySplashController, UIViewController;

@interface OBPrivacyPresenter : NSObject
{
    CDUnknownBlockType _dismissHandler;	// 8 = 0x8
    OBPrivacySplashController *_splashController;	// 16 = 0x10
    OBPrivacyCombinedController *_combinedController;	// 24 = 0x18
    NSString *_displayLanguage;	// 32 = 0x20
    UIViewController *_presentingViewController;	// 40 = 0x28
    UIViewController *_presentedController;	// 48 = 0x30
    NSArray *_presentedIdentifiers;	// 56 = 0x38
}

+ (id)presenterForPrivacyUnifiedAboutWithIdentifiers:(id)arg1;	// IMP=0x0000000000006aec
+ (id)presenterForPrivacyUnifiedAbout;	// IMP=0x0000000000006a9f
+ (id)presenterForPrivacySplashWithBundleAtPath:(id)arg1;	// IMP=0x0000000000006a39
+ (id)presenterForPrivacySplashWithIdentifer:(id)arg1;	// IMP=0x0000000000006a27
+ (id)presenterForPrivacySplashWithIdentifier:(id)arg1;	// IMP=0x00000000000069c1
+ (id)presenterForPrivacySplashWithBundle:(id)arg1;	// IMP=0x00000000000067dd
- (void).cxx_destruct;	// IMP=0x00000000000070d1
@property(retain) NSArray *presentedIdentifiers; // @synthesize presentedIdentifiers=_presentedIdentifiers;
@property(retain) UIViewController *presentedController; // @synthesize presentedController=_presentedController;
@property __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSString *displayLanguage; // @synthesize displayLanguage=_displayLanguage;
@property(retain) OBPrivacyCombinedController *combinedController; // @synthesize combinedController=_combinedController;
@property(retain) OBPrivacySplashController *splashController; // @synthesize splashController=_splashController;
@property(copy) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void)dismiss;	// IMP=0x0000000000006f58
- (void)present;	// IMP=0x0000000000006cab
- (void)_presenterDidDismiss;	// IMP=0x0000000000006c33

@end

