//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLoiLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000605214
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000006051fb
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000060519e
+ (_Bool)isSupported;	// IMP=0x0010000000605426
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000006053fe
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000006053d1
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006053a9
- (void *)adaptee;	// IMP=0x0010000000605376
- (void)endService;	// IMP=0x001000000060535b
- (void)beginService;	// IMP=0x00100000006052ad
- (id)init;	// IMP=0x0010000000605270

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

