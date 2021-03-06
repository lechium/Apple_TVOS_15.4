//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <Preferences/UIWebViewDelegate-Protocol.h>

@class NSString;

@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate>
{
}

+ (void)presentAboutSheetTitled:(id)arg1 HTMLContent:(id)arg2 fromViewController:(id)arg3;	// IMP=0x000000000009f3df
- (void)setHTMLContent:(id)arg1 isFragment:(_Bool)arg2;	// IMP=0x000000000009f213
- (void)donePressed;	// IMP=0x000000000009f1cf
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x000000000009f11d
- (void)viewDidBecomeVisible;	// IMP=0x000000000009f0b3
- (void)dealloc;	// IMP=0x000000000009f046
- (void)loadView;	// IMP=0x000000000009ee7b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

