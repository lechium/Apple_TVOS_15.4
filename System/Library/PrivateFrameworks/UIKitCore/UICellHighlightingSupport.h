//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UICellHighlightingSupport : NSObject
{
    struct __CFDictionary *_unhighlightedStates;	// 8 = 0x8
    id _cell;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002da13d
- (void)highlightView:(id)arg1;	// IMP=0x00000000002d9e76
- (void)applyState:(unsigned long long)arg1 toView:(id)arg2;	// IMP=0x00000000002d9b34
- (void)cacheState:(unsigned long long)arg1 forView:(id)arg2;	// IMP=0x00000000002d973e
- (void)dealloc;	// IMP=0x00000000002d96ff
- (id)initWithCell:(id)arg1;	// IMP=0x00000000002d961c

@end

