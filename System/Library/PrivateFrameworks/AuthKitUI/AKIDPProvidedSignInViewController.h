//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/AKIDPHandlerDelegate-Protocol.h>
#import <AuthKitUI/AKIDPPresentationController-Protocol.h>

@class AKIDPHandler, NSString, UIImageView, UILabel, UIStackView, WKWebView;

@interface AKIDPProvidedSignInViewController : UIViewController <AKIDPHandlerDelegate, AKIDPPresentationController>
{
    WKWebView *_webView;	// 8 = 0x8
    AKIDPHandler *_idpHandler;	// 16 = 0x10
    UIImageView *_secureIconView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIStackView *_titleStackView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000014b3b
@property(retain, nonatomic) UIStackView *titleStackView; // @synthesize titleStackView=_titleStackView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *secureIconView; // @synthesize secureIconView=_secureIconView;
@property(retain, nonatomic) AKIDPHandler *idpHandler; // @synthesize idpHandler=_idpHandler;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)IDPHandler:(id)arg1 didStartLoadingPageInWebView:(id)arg2;	// IMP=0x0000000000014a24
- (void)IDPHandler:(id)arg1 didFinishLoadingPageInWebView:(id)arg2;	// IMP=0x0000000000014895
- (void)_setNavigationTitle:(id)arg1;	// IMP=0x0000000000014823
- (void)setupTitleView;	// IMP=0x000000000001434b
- (void)_cancelBarButtonPressed:(id)arg1;	// IMP=0x000000000001430e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000014220
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001412a
- (void)viewDidLoad;	// IMP=0x00000000000140e9
- (void)loadView;	// IMP=0x000000000001409d
- (id)initWithIDPHandler:(id)arg1;	// IMP=0x0000000000013fc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

