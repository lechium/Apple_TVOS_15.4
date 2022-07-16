//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebCore/WAKView.h>

@class NSMutableArray, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView
{
    WebNodeHighlight *_webNodeHighlight;	// 8 = 0x8
    NSMutableArray *_layers;	// 16 = 0x10
}

- (id)webNodeHighlight;	// IMP=0x000000000010c540
- (void)layoutSublayers:(id)arg1;	// IMP=0x000000000010c420
- (void)_layoutForRectsHighlight:(void *)arg1 parent:(id)arg2;	// IMP=0x000000000010c2e0
- (void)_layoutForNodeHighlight:(void *)arg1 parent:(id)arg2;	// IMP=0x000000000010b590
- (void)_attach:(id)arg1 numLayers:(unsigned long long)arg2;	// IMP=0x000000000010b480
- (_Bool)isFlipped;	// IMP=0x000000000010b470
- (void)detachFromWebNodeHighlight;	// IMP=0x000000000010b440
- (void)dealloc;	// IMP=0x000000000010b3d0
- (id)initWithWebNodeHighlight:(id)arg1;	// IMP=0x000000000010b350
- (void)_removeAllLayers;	// IMP=0x000000000010b1f0

@end

