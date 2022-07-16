//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLMultiArray;

__attribute__((visibility("hidden")))
@interface MLMultiArrayView
{
    MLMultiArray *_parent;	// 40 = 0x28
}

+ (void)squeezeShape:(id)arg1 strides:(id)arg2 resultingShape:(id *)arg3 resultingStrides:(id *)arg4;	// IMP=0x0000000000033199
+ (_Bool)isSqueezableShape:(id)arg1 dimensions:(id)arg2;	// IMP=0x0000000000032f48
+ (_Bool)isSqueezableShape:(id)arg1;	// IMP=0x0000000000032e6c
- (void).cxx_destruct;	// IMP=0x0000000000032e59
@property(readonly, nonatomic) MLMultiArray *parent; // @synthesize parent=_parent;
- (id)initExpandingDimensionsOfMultiArray:(id)arg1 axis:(long long)arg2;	// IMP=0x00000000000327b3
- (id)initSqueezingMultiArray:(id)arg1 dimensions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000032143
- (id)initSlicingMultiArray:(id)arg1 origin:(id)arg2 shape:(id)arg3 squeeze:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000000031bf4

@end

