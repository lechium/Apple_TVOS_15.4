//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSIndexSet;

__attribute__((visibility("hidden")))
@interface _NSIndexSetEnumerator : NSEnumerator
{
    NSIndexSet *_indexSet;	// 8 = 0x8
    unsigned long long _index;	// 16 = 0x10
}

- (id)nextObject;	// IMP=0x0000000000089125
- (void)dealloc;	// IMP=0x00000000000890c0
- (id)initWithIndexSet:(id)arg1;	// IMP=0x000000000008902b

@end
