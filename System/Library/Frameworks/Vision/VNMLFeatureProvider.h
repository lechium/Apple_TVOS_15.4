//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/MLFeatureProvider-Protocol.h>

@class NSSet, NSString, VNSceneprint;
@protocol MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface VNMLFeatureProvider : NSObject <MLFeatureProvider>
{
    NSString *_imageInputKey;	// 8 = 0x8
    struct __CVBuffer *_buffer;	// 16 = 0x10
    VNSceneprint *_scenePrint;	// 24 = 0x18
    long long *_scenePrintMLMultiArrayDataType;	// 32 = 0x20
    id <MLFeatureProvider> _featureProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000192727
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000192681
@property(readonly, nonatomic) NSSet *featureNames;
- (id)featureValueFromScenePrint:(id)arg1 dataType:(long long)arg2;	// IMP=0x0000000000192246
- (void)dealloc;	// IMP=0x000000000019220c
- (id)initWithScenePrint:(id)arg1 dataType:(long long *)arg2 forKey:(id)arg3 originalFeatureProvider:(id)arg4;	// IMP=0x0000000000192149
- (id)initWithBuffer:(struct __CVBuffer *)arg1 forKey:(id)arg2 originalFeatureProvider:(id)arg3;	// IMP=0x000000000019209f

@end
