//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLOnBodyNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000004d0026
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004d000d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000004cffb0
+ (_Bool)isSupported;	// IMP=0x00100000004d0238
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000004d0210
- (void);	// IMP=0x00100000004d01e3
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000004d01bb
- (void *)adaptee;	// IMP=0x00100000004d0188
- (void)endService;	// IMP=0x00100000004d016d
- (void)beginService;	// IMP=0x00100000004d00bf
- (id)init;	// IMP=0x00100000004d0082

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

