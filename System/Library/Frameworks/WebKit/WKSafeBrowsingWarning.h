//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

#import <WebKit/UITextViewDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKSafeBrowsingWarning : UIScrollView <UITextViewDelegate>
{
    struct CompletionHandler<void (std::variant<WebKit::ContinueUnsafeLoad, WTF::URL>&&)> _completionHandler;	// 8 = 0x8
    struct RefPtr<const WebKit::SafeBrowsingWarning, WTF::RawPtrTraits<const WebKit::SafeBrowsingWarning>, WTF::DefaultRefDerefTraits<const WebKit::SafeBrowsingWarning>> _warning;	// 16 = 0x10
    struct WeakObjCPtr<WKSafeBrowsingTextView> _details;	// 24 = 0x18
    struct WeakObjCPtr<WKSafeBrowsingBox> _box;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000007333e7
- (void).cxx_destruct;	// IMP=0x0000000000733378
- (_Bool)forMainFrameNavigation;	// IMP=0x0000000000733364
- (void)clickedOnLink:(id)arg1;	// IMP=0x0000000000733221
- (void)goBackClicked;	// IMP=0x0000000000733183
- (void)dealloc;	// IMP=0x00000000007330ac
- (void)didMoveToWindow;	// IMP=0x000000000073309a
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000000733082
- (void)layoutSubviews;	// IMP=0x0000000000733041
- (void)layoutText;	// IMP=0x0000000000733020
- (void)updateContentSize;	// IMP=0x0000000000732df7
- (void)showDetailsClicked;	// IMP=0x00000000007329a1
- (void)addContent;	// IMP=0x0000000000732208
- (id)initWithFrame:(struct CGRect)arg1 safeBrowsingWarning:(const void *)arg2 completionHandler:(void *)arg3;	// IMP=0x000000000073201b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

