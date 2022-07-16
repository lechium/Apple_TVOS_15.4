//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/VCPDistanceDescriptorProtocol-Protocol.h>

@class VNImageprint;

@interface VCPImageDescriptor : NSObject <VCPDistanceDescriptorProtocol>
{
    VNImageprint *_imagePrint;	// 8 = 0x8
}

+ (id)descriptorWithData:(id)arg1;	// IMP=0x0000000000074743
+ (id)descriptorWithImage:(struct __CVBuffer *)arg1;	// IMP=0x000000000007470d
+ (int)preferredPixelFormat;	// IMP=0x0000000000074702
+ (_Bool)usePHAssetData;	// IMP=0x00000000000746fa
- (void).cxx_destruct;	// IMP=0x0000000000074e43
- (int)computeDistance:(float *)arg1 toDescriptor:(id)arg2;	// IMP=0x0000000000074d9e
- (id)serialize;	// IMP=0x0000000000074d86
- (id)initWithData:(id)arg1;	// IMP=0x0000000000074bc6
- (id)initWithImage:(struct __CVBuffer *)arg1;	// IMP=0x00000000000747a1

@end
