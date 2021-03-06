//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ETImageDescriptorExtractor : NSObject
{
    void *_plan;	// 8 = 0x8
    CDStruct_2bc666a5 _net;	// 16 = 0x10
    void *_ctx;	// 32 = 0x20
    CDStruct_0a65202a _inputBlob;	// 40 = 0x28
    CDStruct_0a65202a _outputBlob;	// 208 = 0xd0
    unsigned long long _targetWidth;	// 376 = 0x178
    unsigned long long _targetHeight;	// 384 = 0x180
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> _inputName;	// 392 = 0x188
    unsigned long long *_inputShape;	// 416 = 0x1a0
    float _rotation_range;	// 424 = 0x1a8
    float _horizontal_flip;	// 428 = 0x1ac
    float _zoom_range;	// 432 = 0x1b0
    float _shear_range;	// 436 = 0x1b4
    float _contrast_range;	// 440 = 0x1b8
    float _brightness_range;	// 444 = 0x1bc
    int _nAugmentations;	// 448 = 0x1c0
    int _doBatchnormTuning;	// 452 = 0x1c4
    unsigned long long _descriptors_mem_cache_size;	// 456 = 0x1c8
    unsigned long long _descriptors_file_cache_size;	// 464 = 0x1d0
}

+ (id)VisionSmartCamNet_iOS11_Extractor;	// IMP=0x000000000046db25
+ (id)passthroughExtractor;	// IMP=0x000000000046db1d
+ (id)inception_v3_Extractor;	// IMP=0x000000000046da42
+ (id)VisionSceneNet_iOS10_Extractor;	// IMP=0x000000000046da12
- (id).cxx_construct;	// IMP=0x000000000046d8f6
- (void).cxx_destruct;	// IMP=0x000000000046d8da
@property unsigned long long descriptors_file_cache_size; // @synthesize descriptors_file_cache_size=_descriptors_file_cache_size;
@property unsigned long long descriptors_mem_cache_size; // @synthesize descriptors_mem_cache_size=_descriptors_mem_cache_size;
@property int doBatchnormTuning; // @synthesize doBatchnormTuning=_doBatchnormTuning;
@property int nAugmentations; // @synthesize nAugmentations=_nAugmentations;
@property float brightness_range; // @synthesize brightness_range=_brightness_range;
@property float contrast_range; // @synthesize contrast_range=_contrast_range;
@property float shear_range; // @synthesize shear_range=_shear_range;
@property float zoom_range; // @synthesize zoom_range=_zoom_range;
@property float horizontal_flip; // @synthesize horizontal_flip=_horizontal_flip;
@property float rotation_range; // @synthesize rotation_range=_rotation_range;
- (int)numberOfChannels;	// IMP=0x000000000046d7c2
- (float *)extractDescriptorForDataPoint:(struct vImage_Buffer)arg1 freeWhenDone:(_Bool)arg2;	// IMP=0x000000000046d676
- (struct vImage_Buffer)cropResizeInputImage:(struct vImage_Buffer)arg1;	// IMP=0x000000000046d66d
- (void)extractForDataPoint:(id)arg1;	// IMP=0x000000000046d5bc
- (id)initWithNetwork:(id)arg1;	// IMP=0x000000000046cec4

@end

