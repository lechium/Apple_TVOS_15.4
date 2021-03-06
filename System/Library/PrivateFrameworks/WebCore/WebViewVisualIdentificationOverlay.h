//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebCore/CALayerDelegate-Protocol.h>

@class NSString;

@interface WebViewVisualIdentificationOverlay : NSObject <CALayerDelegate>
{
    struct RetainPtr<UIView> _view;	// 8 = 0x8
    struct RetainPtr<CALayer> _layer;	// 16 = 0x10
    struct RetainPtr<NSString> _kind;	// 24 = 0x18
}

+ (void)installForWebViewIfNeeded:(id)arg1 kind:(id)arg2 deprecated:(_Bool)arg3;	// IMP=0x0000000000bab030
+ (_Bool)shouldIdentifyWebViews;	// IMP=0x0000000000baafd0
- (id).cxx_construct;	// IMP=0x0000000000babc50
- (void).cxx_destruct;	// IMP=0x0000000000babbf0
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x0000000000bab5c0
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000bab4e0
- (void)dealloc;	// IMP=0x0000000000bab470
- (id)initWithWebView:(id)arg1 kind:(id)arg2 deprecated:(_Bool)arg3;	// IMP=0x0000000000bab0d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

