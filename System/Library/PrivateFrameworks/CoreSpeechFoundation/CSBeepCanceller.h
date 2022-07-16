//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol CSBeepCancellerDelegate, OS_dispatch_queue;

@interface CSBeepCanceller : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct unique_ptr<BatchBeepCanceller, std::default_delete<BatchBeepCanceller>> _beepCanceller;	// 16 = 0x10
    struct vector<float, std::allocator<float>> _beepFloatVec;	// 24 = 0x18
    struct vector<float, std::allocator<float>> _floatBuffer;	// 48 = 0x30
    struct vector<short, std::allocator<short>> _shortBuffer;	// 72 = 0x48
    unsigned long long _numTotalInputSamples;	// 96 = 0x60
    unsigned long long _numTotalOutputSamples;	// 104 = 0x68
    id <CSBeepCancellerDelegate> _delegate;	// 112 = 0x70
}

- (id).cxx_construct;	// IMP=0x0000000000019d42
- (void).cxx_destruct;	// IMP=0x0000000000019cdb
@property(nonatomic) __weak id <CSBeepCancellerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDictionary *metrics;
- (void)flush;	// IMP=0x00000000000197a8
- (void)reset;	// IMP=0x000000000001968c
- (void)willBeep;	// IMP=0x000000000001956f
- (void)cancelBeepFromSamples:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x0000000000019281
- (id)init;	// IMP=0x0000000000018c72

@end
