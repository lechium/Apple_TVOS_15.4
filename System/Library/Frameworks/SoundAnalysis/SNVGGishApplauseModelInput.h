//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/MLFeatureProvider-Protocol.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface SNVGGishApplauseModelInput : NSObject <MLFeatureProvider>
{
    MLMultiArray *_input1;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000075c29
@property(retain, nonatomic) MLMultiArray *input1; // @synthesize input1=_input1;
- (id)featureValueForName:(id)arg1;	// IMP=0x0000000000075bb5
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput1:(id)arg1;	// IMP=0x0000000000075b2a

@end

