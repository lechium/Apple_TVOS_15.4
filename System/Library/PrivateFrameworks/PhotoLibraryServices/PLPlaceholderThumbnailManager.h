//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;
@protocol OS_dispatch_queue;

@interface PLPlaceholderThumbnailManager : NSObject
{
    NSCache *_placeholderDataCache;	// 8 = 0x8
    NSCache *_placeholderImageCache;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_isolation;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x0000000000550899
- (void).cxx_destruct;	// IMP=0x0000000000550231
- (id)_placeholderImageWithColor:(id)arg1;	// IMP=0x0000000000550219
- (id)newPlaceholderImageForFormat:(unsigned short)arg1 photoImageSize:(struct CGSize)arg2;	// IMP=0x000000000055004f
- (id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(struct CGSize)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;	// IMP=0x000000000054fe37
- (id)_cacheKeyForFormat:(id)arg1 photoImageSize:(struct CGSize)arg2 photoImageColor:(id)arg3;	// IMP=0x000000000054fd2c
- (id)init;	// IMP=0x000000000054fc9e

@end

