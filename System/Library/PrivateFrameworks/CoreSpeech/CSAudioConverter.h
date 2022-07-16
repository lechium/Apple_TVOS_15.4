//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableData;
@protocol CSAudioConverterDelegate;

@interface CSAudioConverter : NSObject
{
    struct OpaqueAudioConverter *_opusConverter;	// 8 = 0x8
    NSMutableData *_bufferedLPCM;	// 16 = 0x10
    unsigned int _recordBasePacketsPerSecond;	// 24 = 0x18
    struct AudioStreamBasicDescription _opusOutASBD;	// 32 = 0x20
    unsigned int _convertPacketCount;	// 72 = 0x48
    unsigned int _convertAudioCapacity;	// 76 = 0x4c
    unsigned long long _lastTimestamp;	// 80 = 0x50
    unsigned long long _lastArrivalTimestampToAudioRecorder;	// 88 = 0x58
    float _outPacketSizeInSec;	// 96 = 0x60
    id <CSAudioConverterDelegate> _delegate;	// 104 = 0x68
}

+ (id)speexConverter;	// IMP=0x00000000000f0d22
+ (id)narrowBandOpusConverter;	// IMP=0x00000000000f0c75
+ (id)opusConverter;	// IMP=0x00000000000f0bc8
- (void).cxx_destruct;	// IMP=0x00000000000f1ebd
@property __weak id <CSAudioConverterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_configureAudioConverter:(struct OpaqueAudioConverter *)arg1;	// IMP=0x00000000000f19c9
- (void)reset;	// IMP=0x00000000000f1927
- (void)_convertBufferedLPCM:(id)arg1 allowPartial:(_Bool)arg2 timestamp:(unsigned long long)arg3 arrivalTimestampToAudioRecorder:(unsigned long long)arg4;	// IMP=0x00000000000f1125
- (void)flush;	// IMP=0x00000000000f1102
- (void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;	// IMP=0x00000000000f102a
- (void)dealloc;	// IMP=0x00000000000f0fe3
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;	// IMP=0x00000000000f0dcf

@end
