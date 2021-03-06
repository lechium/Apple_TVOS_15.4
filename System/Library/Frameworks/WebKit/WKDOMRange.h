//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WKDOMNode;

@interface WKDOMRange : NSObject
{
    struct RefPtr<WebCore::Range, WTF::RawPtrTraits<WebCore::Range>, WTF::DefaultRefDerefTraits<WebCore::Range>> _impl;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x0000000000391c6f
- (void).cxx_destruct;	// IMP=0x0000000000391c3c
- (id)rangeByExpandingToWordBoundaryByCharacters:(unsigned long long)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000391963
@property(readonly) NSArray *textRects;
@property(readonly) _Bool isCollapsed;
@property(readonly, copy) NSString *text;
@property(readonly) long long endOffset;
@property(readonly, retain) WKDOMNode *endContainer;
@property(readonly) long long startOffset;
@property(readonly, retain) WKDOMNode *startContainer;
- (void)selectNodeContents:(id)arg1;	// IMP=0x0000000000391638
- (void)selectNode:(id)arg1;	// IMP=0x00000000003915e8
- (void)collapse:(_Bool)arg1;	// IMP=0x00000000003915d8
- (void)setEnd:(id)arg1 offset:(int)arg2;	// IMP=0x000000000039152f
- (void)setStart:(id)arg1 offset:(int)arg2;	// IMP=0x0000000000391486
- (void)dealloc;	// IMP=0x00000000003913c2
- (id)initWithDocument:(id)arg1;	// IMP=0x0000000000391321
- (id)_initWithImpl:(void *)arg1;	// IMP=0x0000000000391115
- (struct OpaqueWKBundleRangeHandle *)_copyBundleRangeHandleRef;	// IMP=0x0000000000391c80

@end

