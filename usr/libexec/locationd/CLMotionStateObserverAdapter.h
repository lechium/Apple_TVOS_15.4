//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionStateObserverAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000007a5e86
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a5e6d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000007a5e10
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000007a6070
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000007a6043
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000007a601b
- (void *)adaptee;	// IMP=0x00100000007a5fe8
- (void)endService;	// IMP=0x00100000007a5fcd
- (void)beginService;	// IMP=0x00100000007a5f1f
- (id)init;	// IMP=0x00100000007a5ee2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
