//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSAudioDecoderDelegate;

@interface CSAudioDecoder : NSObject
{
    struct OpaqueAudioConverter *_decoder;	// 8 = 0x8
    struct AudioStreamBasicDescription _inASBD;	// 16 = 0x10
    struct AudioStreamBasicDescription _outASBD;	// 56 = 0x38
    id <CSAudioDecoderDelegate> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000011573
@property __weak id <CSAudioDecoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addPackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5 wasBuffered:(_Bool)arg6 receivedNumChannels:(unsigned int)arg7;	// IMP=0x0000000000011001
- (id)initWithInASBD:(struct AudioStreamBasicDescription)arg1 outASBD:(struct AudioStreamBasicDescription)arg2;	// IMP=0x0000000000010f50

@end

