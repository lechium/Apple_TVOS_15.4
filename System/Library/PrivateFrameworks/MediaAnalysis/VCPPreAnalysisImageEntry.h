//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPPreAnalysisImageEntry : NSObject
{
    struct CF<__CVBuffer *> _pixelBuffer;	// 8 = 0x8
    unsigned long long _count;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x00000000000b4647
- (void).cxx_destruct;	// IMP=0x00000000000b4639
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
- (void)dealloc;	// IMP=0x00000000000b44f5
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00000000000b4440

@end

