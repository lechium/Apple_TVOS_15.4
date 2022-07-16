//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BMMemoryMapping : NSObject
{
    int _protection;	// 8 = 0x8
    int _advice;	// 12 = 0xc
    void *_start;	// 16 = 0x10
    unsigned long long _currentOffset;	// 24 = 0x18
    unsigned long long _size;	// 32 = 0x20
    long long _offset;	// 40 = 0x28
    void *_mappedAddress;	// 48 = 0x30
    unsigned long long _pageAlignedSize;	// 56 = 0x38
    unsigned long long _offsetSpace;	// 64 = 0x40
}

- (_Bool)canAtomicallyAccessOffset:(unsigned long long)arg1;	// IMP=0x0000000000011976
- (void)dealloc;	// IMP=0x000000000001110c
- (id)init;	// IMP=0x000000000001109f

@end
