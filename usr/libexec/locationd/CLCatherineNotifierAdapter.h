//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCatherineNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000039bbb6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000039bb9d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000039bb40
+ (_Bool)isSupported;	// IMP=0x001000000039bdc8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x002000000039bda0
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000039bd73
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000039bd4b
- (void *)adaptee;	// IMP=0x001000000039bd18
- (void)endService;	// IMP=0x001000000039bcfd
- (void)beginService;	// IMP=0x001000000039bc4f
- (id)init;	// IMP=0x001000000039bc12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

