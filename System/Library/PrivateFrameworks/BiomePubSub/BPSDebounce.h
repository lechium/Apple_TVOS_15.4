//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol BPSPublisher;

@interface BPSDebounce
{
    id <BPSPublisher> _upstream;	// 8 = 0x8
    double _dueTime;	// 16 = 0x10
    CDUnknownBlockType _getTimestamp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000940b
@property(readonly, nonatomic) CDUnknownBlockType getTimestamp; // @synthesize getTimestamp=_getTimestamp;
@property(readonly, nonatomic) double dueTime; // @synthesize dueTime=_dueTime;
@property(readonly, nonatomic) id <BPSPublisher> upstream; // @synthesize upstream=_upstream;
- (void)subscribe:(id)arg1;	// IMP=0x00000000000092c4
- (id)initWithUpstream:(id)arg1 for:(double)arg2 getTimestamp:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009181

@end

