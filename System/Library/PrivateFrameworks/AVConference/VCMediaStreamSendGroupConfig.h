//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCSessionUplinkBandwidthAllocator;

__attribute__((visibility("hidden")))
@interface VCMediaStreamSendGroupConfig
{
    VCSessionUplinkBandwidthAllocator *_uplinkBandwidthAllocator;	// 8 = 0x8
    _Bool _shouldSynchronizeWithSourceRTPTimestamps;	// 16 = 0x10
}

@property(nonatomic) _Bool shouldSynchronizeWithSourceRTPTimestamps; // @synthesize shouldSynchronizeWithSourceRTPTimestamps=_shouldSynchronizeWithSourceRTPTimestamps;
@property(retain, nonatomic) VCSessionUplinkBandwidthAllocator *uplinkBandwidthAllocator; // @synthesize uplinkBandwidthAllocator=_uplinkBandwidthAllocator;
- (void)dealloc;	// IMP=0x000000000025e6ee

@end

