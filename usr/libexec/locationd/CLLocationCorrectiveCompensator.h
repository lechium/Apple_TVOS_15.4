//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class GEOCoarseLocationProvider, NSString;

@interface CLLocationCorrectiveCompensator : CLIntersiloService
{
    GEOCoarseLocationProvider *_coarseLocationProvider;	// 8 = 0x8
}

+ (id)getSilo;	// IMP=0x00200000002f3b3c
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f3b23
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000002f3ac6
- (void)snapLocation:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00200000002f3c24
- (void)endService;	// IMP=0x00100000002f3bfc
- (void)beginService;	// IMP=0x00100000002f3bd5
- (id)init;	// IMP=0x00100000002f3b98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

