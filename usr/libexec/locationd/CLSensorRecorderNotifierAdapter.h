//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSensorRecorderNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000085b866
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000085b84d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000085b7f0
+ (_Bool)isSupportedForType:(int)arg1;	// IMP=0x001000000085ba78
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x002000000085ba50
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000085ba23
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000085b9fb
- (void *)adaptee;	// IMP=0x001000000085b9c8
- (void)endService;	// IMP=0x001000000085b9ad
- (void)beginService;	// IMP=0x001000000085b8ff
- (id)init;	// IMP=0x001000000085b8c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

