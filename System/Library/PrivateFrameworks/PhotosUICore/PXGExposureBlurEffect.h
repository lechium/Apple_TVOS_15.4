//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGExposureBlurKernel;

@interface PXGExposureBlurEffect
{
    PXGExposureBlurKernel *_kernel;	// 8 = 0x8
    double _radius;	// 16 = 0x10
    double _exposure;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000454781
@property(nonatomic) double exposure; // @synthesize exposure=_exposure;
@property(nonatomic) double radius; // @synthesize radius=_radius;
- (id)kernel;	// IMP=0x000000000045469d
- (id)initWithEntityManager:(id)arg1;	// IMP=0x000000000045463f

@end

