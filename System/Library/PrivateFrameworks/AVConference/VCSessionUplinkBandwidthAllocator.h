//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, VCSessionBandwidthAllocationTable;

__attribute__((visibility("hidden")))
@interface VCSessionUplinkBandwidthAllocator
{
    VCSessionBandwidthAllocationTable *_table;	// 16 = 0x10
    NSDictionary *_currentTable;	// 24 = 0x18
    NSMutableDictionary *_streamTokenToEnableMap;	// 32 = 0x20
    _Bool _redundancyEnabled;	// 40 = 0x28
    _Bool _redundancyEnabledFor720Stream;	// 41 = 0x29
}

@property(readonly, nonatomic, getter=getBitrateToStreamTable) NSDictionary *bitrateToStreamTable;
- (void)_recomputeCurrentTable;	// IMP=0x00000000000faaaa
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrateCap:(unsigned int)arg2;	// IMP=0x00000000000fa70a
- (id)streamIDsForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2;	// IMP=0x00000000000fa535
- (id)repairStreamIDsForStreamToken:(long long)arg1;	// IMP=0x00000000000fa369
- (id)streamIDsForStreamToken:(long long)arg1;	// IMP=0x00000000000fa19d
- (id)mediaBitratesForStreamToken:(long long)arg1 targetNetworkBitrate:(unsigned int)arg2;	// IMP=0x00000000000f9d86
- (id)tableEntriesForStreamToken:(long long)arg1 targetBitrate:(unsigned int)arg2 remainingBitrate:(unsigned int *)arg3 isLastEntryForStreamToken:(_Bool *)arg4;	// IMP=0x00000000000f9ab3
- (_Bool)peerSubscription:(_Bool)arg1 streamID:(unsigned short)arg2;	// IMP=0x00000000000f99f4
@property(nonatomic, getter=isRedundancyEnabledFor720Stream) _Bool redundancyEnabledFor720Stream;
@property(nonatomic, getter=isRedundancyEnabled) _Bool redundancyEnabled;
- (_Bool)isEnabledStreamToken:(long long)arg1;	// IMP=0x00000000000f98e9
- (void)streamToken:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000000f9824
- (void)addBandwidthAllocationTableEntry:(id)arg1 updateNow:(_Bool)arg2;	// IMP=0x00000000000f977a
- (void)dealloc;	// IMP=0x00000000000f96f1
- (id)init;	// IMP=0x00000000000f959e

@end

