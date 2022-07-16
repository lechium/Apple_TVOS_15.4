//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol DTTapLocalDelegate, OS_dispatch_source;

@interface DTTapLocal
{
    NSObject<OS_dispatch_source> *_pollTimer;	// 8 = 0x8
    _Bool _validConfig;	// 16 = 0x10
    id <DTTapLocalDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000495b9
@property(readonly, retain) id <DTTapLocalDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleStatusMemo:(id)arg1;	// IMP=0x00000000000494e2
- (id)_fetchDataForReason:(unsigned long long)arg1;	// IMP=0x00000000000490d0
- (_Bool)_canFetchWhileArchiving;	// IMP=0x000000000004908c
- (void)_unpause;	// IMP=0x0000000000049011
- (void)_pause;	// IMP=0x0000000000048f96
- (void)_stop;	// IMP=0x0000000000048ef1
- (void)_start;	// IMP=0x0000000000048cd9
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000048bb5

@end
