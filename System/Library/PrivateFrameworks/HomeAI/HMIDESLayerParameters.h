//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIDESMutableFloatArray, NSString;

@interface HMIDESLayerParameters : HMFObject
{
    NSString *_name;	// 8 = 0x8
    HMIDESMutableFloatArray *_weights;	// 16 = 0x10
    HMIDESMutableFloatArray *_biases;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000871ba
@property(readonly) HMIDESMutableFloatArray *biases; // @synthesize biases=_biases;
@property(readonly) HMIDESMutableFloatArray *weights; // @synthesize weights=_weights;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 weights:(id)arg2 biases:(id)arg3;	// IMP=0x000000000008708e

@end

