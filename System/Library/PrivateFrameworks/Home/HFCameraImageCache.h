//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSUIMappedImageCache;

@interface HFCameraImageCache : NSObject
{
    BSUIMappedImageCache *_imageCache;	// 8 = 0x8
}

+ (id)heroFrameKeyForCameraClipIdentifierString:(id)arg1;	// IMP=0x00000000001d0884
+ (id)personNameForFaceCropKey:(id)arg1;	// IMP=0x00000000001d0861
+ (id)faceCropKeyForPersonName:(id)arg1;	// IMP=0x00000000001d0835
+ (id)posterFrameKeyForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2;	// IMP=0x00000000001d080c
+ (id)keyForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2;	// IMP=0x00000000001d07e3
- (void).cxx_destruct;	// IMP=0x00000000001d0971
@property(retain, nonatomic) BSUIMappedImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (void)purgeAllImages;	// IMP=0x00000000001d08a9
- (id)imageForCameraClipIdentifierString:(id)arg1 withOffset:(float)arg2;	// IMP=0x00000000001d075a
- (id)imageForKey:(id)arg1;	// IMP=0x00000000001d06d5
- (void)addImage:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001d0453
- (id)initWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000001d03d1
- (id)init;	// IMP=0x00000000001d03b8

@end

