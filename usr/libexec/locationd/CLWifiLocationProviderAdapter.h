//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLWifiLocationProviderAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000001e3916
+ (id)getSilo;	// IMP=0x00100000001e30fd
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e30e4
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000001e3087
- (void)requestLocationUpdateWithParameters:(CDUnknownBlockType)arg1;	// IMP=0x00200000001e35f4
- (void)shouldLockoutNilr:(_Bool)arg1;	// IMP=0x00100000001e35ee
- (void)emergencySettingsChange:(CDUnknownBlockType)arg1 withReason:(int)arg2;	// IMP=0x00100000001e35e8
- (void)emergencyStateChange:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e3310
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e32e8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e32bb
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e3293
- (void *)adaptee;	// IMP=0x00100000001e3260
- (void)endService;	// IMP=0x00100000001e3245
- (void)beginService;	// IMP=0x00100000001e3196
- (id)init;	// IMP=0x00100000001e3159

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

