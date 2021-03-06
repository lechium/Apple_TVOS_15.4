//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXCArrayStore : NSObject
{
    unsigned long long _elementSize;	// 8 = 0x8
    void *_sharedArray;	// 16 = 0x10
    unsigned long long _sharedArrayCapacity;	// 24 = 0x18
    _Bool _isSharedArrayInUse;	// 32 = 0x20
}

- (void *)_sharedArrayWithElementsCount:(unsigned long long)arg1;	// IMP=0x000000000065d6a2
- (void)accessArrayWithElementsCount:(unsigned long long)arg1 accessBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000065d609
- (void)dealloc;	// IMP=0x000000000065d5cf
- (id)init;	// IMP=0x000000000065d555
- (id)initWithElementSize:(unsigned long long)arg1;	// IMP=0x000000000065d518

@end

