//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, TVCKDataClient;

@interface TVCKDataClientConnector : NSObject
{
    TVCKDataClient *_dataClient;	// 8 = 0x8
    NSMutableArray *_blocks;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002df4d
@property(retain, nonatomic) NSMutableArray *blocks; // @synthesize blocks=_blocks;
@property(readonly, nonatomic) TVCKDataClient *dataClient; // @synthesize dataClient=_dataClient;
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002de0d
- (void)_enqueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002dd66
- (void)_flushBlocks;	// IMP=0x000000000002dab8
- (void)_dataClientStatusDidChange:(id)arg1;	// IMP=0x000000000002da09
- (void)_stopObservingDataClientStatus;	// IMP=0x000000000002d986
- (void)_startObservingDataClientStatus;	// IMP=0x000000000002d8fc
- (id)init;	// IMP=0x000000000002d8d1
- (id)initWithDataClient:(id)arg1;	// IMP=0x000000000002d820

@end

