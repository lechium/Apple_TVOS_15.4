//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKInspectorHighlightView : UIView
{
    struct RetainPtr<NSMutableArray<CAShapeLayer *>> _layers;	// 8 = 0x8
    struct optional<WebCore::InspectorOverlay::Highlight> _highlight;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000031e2d8
- (void).cxx_destruct;	// IMP=0x000000000031e293
- (void)update:(const void *)arg1 scale:(double)arg2 frame:(const struct FloatRect *)arg3;	// IMP=0x000000000031dae0
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x000000000031d85f
- (void)_layoutForRectsHighlight:(const void *)arg1;	// IMP=0x000000000031d75d
- (void)_layoutForNodeListHighlight:(const void *)arg1;	// IMP=0x000000000031d6f2
- (void)_layoutForNodeHighlight:(const void *)arg1 offset:(unsigned int)arg2;	// IMP=0x000000000031cd53
- (void)_createLayers:(unsigned long long)arg1;	// IMP=0x000000000031cc0f
- (void)_removeAllLayers;	// IMP=0x000000000031cad2
- (void)dealloc;	// IMP=0x000000000031ca94
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000031ca10

@end
