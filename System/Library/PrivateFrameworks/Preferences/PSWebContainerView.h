//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <Preferences/UIWebViewDelegate-Protocol.h>

@class NSData, NSString, UIWebView;

@interface PSWebContainerView : UIView <UIWebViewDelegate>
{
    UIWebView *_webView;	// 8 = 0x8
    NSData *_content;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000015567
@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (_Bool)uiWebView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint)arg2;	// IMP=0x000000000001553d
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;	// IMP=0x000000000001548b
- (double)heightForWidth:(double)arg1;	// IMP=0x000000000001529f
- (void)layoutSubviews;	// IMP=0x0000000000015035
- (void)setUserStyleSheet:(id)arg1;	// IMP=0x0000000000014db6
- (id)init;	// IMP=0x0000000000014b07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

