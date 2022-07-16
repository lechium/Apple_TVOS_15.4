//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebNodeHighlight, WebView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlighter : NSObject
{
    WebView *_inspectedWebView;	// 8 = 0x8
    WebNodeHighlight *_currentHighlight;	// 16 = 0x10
}

- (void)willDetachWebNodeHighlight:(id)arg1;	// IMP=0x000000000010b1d0
- (void)didAttachWebNodeHighlight:(id)arg1;	// IMP=0x000000000010b1b0
- (void)hideHighlight;	// IMP=0x000000000010b160
- (void)highlight;	// IMP=0x000000000010b090
- (void)dealloc;	// IMP=0x000000000010b060
- (id)initWithInspectedWebView:(id)arg1;	// IMP=0x000000000010b020

@end
