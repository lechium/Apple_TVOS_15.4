//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface AXElementVision__generated__Output : NSObject <MLFeatureProvider>
{
    MLMultiArray *_confidence;	// 8 = 0x8
    MLMultiArray *_coordinates;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000224b3
@property(retain, nonatomic) MLMultiArray *coordinates; // @synthesize coordinates=_coordinates;
@property(retain, nonatomic) MLMultiArray *confidence; // @synthesize confidence=_confidence;
- (id)featureValueForName:(id)arg1;	// IMP=0x00000000000223e4
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithConfidence:(id)arg1 coordinates:(id)arg2;	// IMP=0x0000000000022352

@end

