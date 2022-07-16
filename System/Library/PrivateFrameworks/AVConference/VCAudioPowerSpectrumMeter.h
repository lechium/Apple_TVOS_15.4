//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCAudioPowerSpectrumProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCAudioPowerSpectrumMeter <VCAudioPowerSpectrumProtocol>
{
    unsigned short _audioSpectrumBinCount;	// 16 = 0x10
    struct _VCAudioPowerSpectrumMeterRealtimeContext _realtimeContext;	// 24 = 0x18
}

@property(readonly, nonatomic) void *realtimeContext;
- (void)unregisterAllStreams;	// IMP=0x00000000000fd739
- (void)releaseAudioPowerSpectrumForStreamToken:(id)arg1;	// IMP=0x00000000000fd667
- (void)registerNewAudioPowerSpectrumForStreamToken:(id)arg1 spectrumSource:(id)arg2;	// IMP=0x00000000000fd1b0
- (void)dealloc;	// IMP=0x00000000000fccff
- (id)initWithBinCount:(unsigned short)arg1 refreshRate:(double)arg2 delegate:(id)arg3;	// IMP=0x00000000000fcb7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

