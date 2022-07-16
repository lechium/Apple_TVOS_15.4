//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNSupportedImageSize;

__attribute__((visibility("hidden")))
@interface VNNOPRequestConfiguration
{
    _Bool _detectorWantsAnisotropicScaling;	// 8 = 0x8
    VNSupportedImageSize *_detectorPreferredImageSize;	// 16 = 0x10
    double _detectorExecutionTimeInterval;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000011ccc8
@property(nonatomic) double detectorExecutionTimeInterval; // @synthesize detectorExecutionTimeInterval=_detectorExecutionTimeInterval;
@property(nonatomic) _Bool detectorWantsAnisotropicScaling; // @synthesize detectorWantsAnisotropicScaling=_detectorWantsAnisotropicScaling;
@property(retain, nonatomic) VNSupportedImageSize *detectorPreferredImageSize; // @synthesize detectorPreferredImageSize=_detectorPreferredImageSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011cbc9
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x000000000011cad6

@end

