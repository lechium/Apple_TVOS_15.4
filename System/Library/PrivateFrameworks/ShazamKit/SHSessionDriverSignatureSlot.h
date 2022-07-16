//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPCMBuffer, SHSignatureGenerator;

__attribute__((visibility("hidden")))
@interface SHSessionDriverSignatureSlot : NSObject
{
    SHSignatureGenerator *_signatureGenerator;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    AVAudioPCMBuffer *_excessAudio;	// 24 = 0x18
    double _maximumSignatureDuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005125
@property(readonly, nonatomic) double maximumSignatureDuration; // @synthesize maximumSignatureDuration=_maximumSignatureDuration;
@property(readonly, nonatomic) AVAudioPCMBuffer *excessAudio; // @synthesize excessAudio=_excessAudio;
@property(nonatomic) long long state; // @synthesize state=_state;
- (long long)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000004dca
@property(readonly, nonatomic) SHSignatureGenerator *signatureGenerator; // @synthesize signatureGenerator=_signatureGenerator;
- (void)reset;	// IMP=0x0000000000004cf1
- (id)initWithMaximumSignatureDuration:(double)arg1;	// IMP=0x0000000000004c96

@end
