//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol MTMediaActivityEventHandlerDelegate;

@interface MTMediaActivityEventHandler
{
}

- (id)eventVersion:(id)arg1;	// IMP=0x0000000000016c02
- (id)knownFields;	// IMP=0x0000000000016aad
- (id)metricsDataForStopActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 startMetricsData:(id)arg5 eventData:(id)arg6;	// IMP=0x000000000001635c
- (id)metricsDataForStartActionWithPosition:(unsigned long long)arg1 overallPosition:(unsigned long long)arg2 type:(id)arg3 reason:(id)arg4 eventData:(id)arg5;	// IMP=0x000000000001611b
- (void)didCreateMetricsData:(id)arg1;	// IMP=0x0000000000015cf6

// Remaining properties
@property(nonatomic) __weak id <MTMediaActivityEventHandlerDelegate> delegate; // @dynamic delegate;

@end

