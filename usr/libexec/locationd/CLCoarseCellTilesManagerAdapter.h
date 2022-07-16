//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLCoarseCellTilesManagerAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x002000000051c3fa
+ (id)getSilo;	// IMP=0x001000000051c1e8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000051c1cf
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000051c172
- (void)requestCellTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4;	// IMP=0x002000000051c4b4
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000051c3d2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000051c3a5
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000051c37d
- (void *)adaptee;	// IMP=0x001000000051c34a
- (void)endService;	// IMP=0x001000000051c32f
- (void)beginService;	// IMP=0x001000000051c281
- (id)init;	// IMP=0x001000000051c244

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

