//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _MDMutablePlistBytes
{
    int _currentUID;	// 80 = 0x50
    int _parentSize;	// 84 = 0x54
    int _parentCount;	// 88 = 0x58
    int *_parentUIDs;	// 96 = 0x60
    struct __CFDictionary *_ptrUIDMap;	// 104 = 0x68
    unsigned long long *_fillPtr;	// 112 = 0x70
    unsigned long long *_limitPtr;	// 120 = 0x78
    unsigned long long *_rleTagPtr;	// 128 = 0x80
    unsigned long long _curContainer;	// 136 = 0x88
}

+ (struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010250
+ (struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010110
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x0000000000010510
- (id)initWithCapacity:(unsigned long long)arg1 useMalloc:(_Bool)arg2;	// IMP=0x00000000000104d0
- (id)initWithCapacity:(unsigned long long)arg1 useMalloc:(_Bool)arg2 zone:(struct _malloc_zone_t *)arg3;	// IMP=0x0000000000010390

@end

