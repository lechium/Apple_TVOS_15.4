//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface MonzaV4_1Output : NSObject <MLFeatureProvider>
{
    MLMultiArray *_angle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002cdf
@property(retain, nonatomic) MLMultiArray *angle; // @synthesize angle=_angle;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000002c6b
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithAngle:(id)arg1;	// IMP=0x0000000000002be0

@end

