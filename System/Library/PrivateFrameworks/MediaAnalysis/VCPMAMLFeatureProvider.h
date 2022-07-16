//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/MLFeatureProvider-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface VCPMAMLFeatureProvider : NSObject <MLFeatureProvider>
{
    NSString *_featureName;	// 8 = 0x8
    struct __CVBuffer *_buffer;	// 16 = 0x10
}

+ (id)featureProviderWithCVPixelBuffer:(struct __CVBuffer *)arg1 andFeatureName:(id)arg2;	// IMP=0x000000000007fd54
- (void).cxx_destruct;	// IMP=0x000000000007fede
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000007fe5b
@property(readonly, nonatomic) NSSet *featureNames;
- (void)dealloc;	// IMP=0x000000000007fdc1
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 andFeatureName:(id)arg2;	// IMP=0x000000000007fcae
- (id)init;	// IMP=0x000000000007fca0

@end
