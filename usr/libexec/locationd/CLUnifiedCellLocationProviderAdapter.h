//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLUnifiedCellLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x00100000005972e8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005972cf
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000597272
+ (_Bool)isSupported;	// IMP=0x00100000005974fa
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00200000005974d2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005974a5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000059747d
- (void *)adaptee;	// IMP=0x001000000059744a
- (void)endService;	// IMP=0x001000000059742f
- (void)beginService;	// IMP=0x0010000000597381
- (id)init;	// IMP=0x0010000000597344

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

