//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CGImageRefWithFormat : NSObject
{
    struct CGImage *_imageRef;	// 8 = 0x8
    struct __CFString *_sourceImageFormatUTI;	// 16 = 0x10
}

@property(readonly, nonatomic) struct __CFString *sourceImageFormatUTI; // @synthesize sourceImageFormatUTI=_sourceImageFormatUTI;
@property(readonly, nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
- (id)initWithImage:(struct CGImage *)arg1 andFormat:(struct __CFString *)arg2;	// IMP=0x000000000001991c

@end

