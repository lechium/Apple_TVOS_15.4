//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BMComputeSourceClient, BMStreamDatastoreWriter, BMStreamsAccessClient;

@interface BMStoreSource
{
    BMStreamDatastoreWriter *_writer;	// 8 = 0x8
    BMStreamsAccessClient *_accessClient;	// 16 = 0x10
    _Bool _isPublicStream;	// 24 = 0x18
    BMComputeSourceClient *_computeSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000088fb4
@property(readonly, nonatomic) BMComputeSourceClient *computeSource; // @synthesize computeSource=_computeSource;
@property(readonly, nonatomic) _Bool isPublicStream; // @synthesize isPublicStream=_isPublicStream;
- (void)sendEvent:(id)arg1 timestampNumber:(id)arg2 notifyCompute:(_Bool)arg3;	// IMP=0x00000000000887f3
- (void)sendEvent:(id)arg1 timestamp:(double)arg2;	// IMP=0x0000000000088767
- (void)sendEvent:(id)arg1;	// IMP=0x000000000008874d
- (id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2 accessClient:(id)arg3;	// IMP=0x0000000000088569
- (id)initWithIdentifier:(id)arg1 storeConfig:(id)arg2;	// IMP=0x0000000000088554

@end

