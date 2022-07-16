//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFObservable, MFQueue, NSLock;

__attribute__((visibility("hidden")))
@interface _MFReplayObservable
{
    NSLock *_lock;	// 8 = 0x8
    MFObservable *_observable;	// 16 = 0x10
    MFQueue *_queue;	// 24 = 0x18
}

- (void)_enqueue:(id)arg1;	// IMP=0x000000000003d1e6
- (id)subscribe:(id)arg1;	// IMP=0x000000000003d15f
- (id)initWithObservable:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003cf16
- (void)dealloc;	// IMP=0x000000000003ceb0

@end

