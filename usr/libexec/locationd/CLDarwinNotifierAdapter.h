//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLDarwinNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00200000008a8bd6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000008a8bbd
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000008a8b60
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000008a8dc0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000008a8d93
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000008a8d6b
- (void *)adaptee;	// IMP=0x00100000008a8d38
- (void)endService;	// IMP=0x00100000008a8d1d
- (void)beginService;	// IMP=0x00100000008a8c6f
- (id)init;	// IMP=0x00100000008a8c32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
