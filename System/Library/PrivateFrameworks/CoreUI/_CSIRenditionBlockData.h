//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CSIRenditionBlockData : NSObject
{
    unsigned int _dataPixelFormat;	// 8 = 0x8
    int _pixelFormat;	// 12 = 0xc
    char *_data;	// 16 = 0x10
    unsigned int _nrows;	// 24 = 0x18
    unsigned long long _rowbytes;	// 32 = 0x20
    _Atomic unsigned long long _imageBytes;	// 40 = 0x28
    char _name[128];	// 48 = 0x30
    unsigned char _imageBlockReleaseCount;	// 176 = 0xb0
    unsigned long long _sourceRowbytes;	// 184 = 0xb8
    unsigned long long _allocationSize;	// 192 = 0xc0
    unsigned int _allocateMemory:1;	// 200 = 0xc8
    unsigned int _mmappedData:1;	// 200 = 0xc8
}

- (void)dealloc;	// IMP=0x000000000005f04c

@end

