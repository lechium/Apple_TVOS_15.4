//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLPeerRangingNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0020000000687421
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000687408
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000006873ab
+ (_Bool)isSupported;	// IMP=0x0010000000687360
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000068760c
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006875df
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006875b7
- (void *)adaptee;	// IMP=0x0010000000687584
- (void)endService;	// IMP=0x0010000000687569
- (void)beginService;	// IMP=0x00100000006874ba
- (id)init;	// IMP=0x001000000068747d
- (void)cancelRequest:(id)arg1;	// IMP=0x001000000068797c
- (void)newRequest:(id)arg1;	// IMP=0x001000000068782d
- (void *)peerRangeNotifier;	// IMP=0x00100000006877fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

