//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject
{
    unsigned short _format;	// 8 = 0x8
    int _singleThumbnailImageLength;	// 12 = 0xc
    unsigned long long _count;	// 16 = 0x10
    _Bool _dataIsMutable;	// 24 = 0x18
    NSData *_thumbnailData;	// 32 = 0x20
    NSMutableArray *_thumbnailImages;	// 40 = 0x28
    NSMutableDictionary *_options;	// 48 = 0x30
    NSData *_optionsData;	// 56 = 0x38
    _Bool _optionsAccessed;	// 64 = 0x40
    _Bool _missingHeader;	// 65 = 0x41
    struct CGSize _size;	// 72 = 0x48
}

+ (_Bool)_transformForImage:(struct CGImage *)arg1 isCropped:(_Bool)arg2 captureOrientation:(int)arg3 sizeInOut:(struct CGSize *)arg4 contextSizeOut:(struct CGSize *)arg5 transformOut:(struct CGAffineTransform *)arg6;	// IMP=0x00000000004c6e04
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(unsigned short)arg2;	// IMP=0x00000000004c6da5
- (void).cxx_destruct;	// IMP=0x00000000004c6d53
- (id)_thumbnailData;	// IMP=0x00000000004c6d03
- (_Bool)writeBorderedThumbnailOfImage:(struct CGImage *)arg1 toBuffer:(void *)arg2 orientation:(int *)arg3 format:(unsigned short)arg4 formatInfo:(const CDStruct_0d559a47 *)arg5 delegate:(id)arg6;	// IMP=0x00000000004c6812
@property(readonly, nonatomic) struct CGRect imageRect;
@property(readonly, nonatomic) unsigned int bitmapInfo;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) int bytesPerPixel;
@property(readonly, nonatomic) int bitsPerComponent;
@property(readonly, nonatomic) NSData *optionsData;
@property(readonly, nonatomic) NSMutableDictionary *options;
@property(readonly, nonatomic) unsigned short format;
- (struct CGImage *)thumbnailImageAtIndex:(long long)arg1;	// IMP=0x00000000004c6377
- (char *)thumbnailBytesAtIndex:(long long)arg1;	// IMP=0x00000000004c6309
- (id)thumbnailDataAtIndex:(long long)arg1;	// IMP=0x00000000004c6269
- (unsigned long long)count;	// IMP=0x00000000004c625f
- (_Bool)saveToFile:(id)arg1;	// IMP=0x00000000004c61e3
- (id)serializedData;	// IMP=0x00000000004c601a
- (id)description;	// IMP=0x00000000004c5fd1
- (id)initWithImages:(id)arg1 format:(unsigned short)arg2 options:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000004c5952
- (id)initWithContentsOfFile:(id)arg1 format:(unsigned short)arg2 readOnly:(_Bool)arg3;	// IMP=0x00000000004c5893
- (id)initWithData:(id)arg1 format:(unsigned short)arg2 readOnly:(_Bool)arg3;	// IMP=0x00000000004c569f

@end

