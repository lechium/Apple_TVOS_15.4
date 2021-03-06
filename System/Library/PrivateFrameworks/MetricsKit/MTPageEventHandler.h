//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;
@protocol MTPageEventHandlerDelegate;

@interface MTPageEventHandler
{
    NSMutableArray *_trackedPageHistory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002b3fb
@property(retain, nonatomic) NSMutableArray *trackedPageHistory; // @synthesize trackedPageHistory=_trackedPageHistory;
- (void)didCreateMetricsData:(id)arg1;	// IMP=0x000000000002b2a3
- (void)updatePageHistoryWithPage:(id)arg1;	// IMP=0x000000000002b188
- (id)pageHistory:(id)arg1;	// IMP=0x000000000002b000
- (id)eventVersion:(id)arg1;	// IMP=0x000000000002af9e
- (id)eventType;	// IMP=0x000000000002af38
- (id)knownFields;	// IMP=0x000000000002ada9

// Remaining properties
@property(nonatomic) __weak id <MTPageEventHandlerDelegate> delegate; // @dynamic delegate;

@end

