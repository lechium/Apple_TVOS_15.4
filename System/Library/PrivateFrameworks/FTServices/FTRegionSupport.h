//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FTMessageDelivery, NSArray;

@interface FTRegionSupport : NSObject
{
    NSArray *_regions;	// 8 = 0x8
    FTMessageDelivery *_delivery;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000000291ff
- (void).cxx_destruct;	// IMP=0x0000000000029c06
@property(retain) FTMessageDelivery *delivery; // @synthesize delivery=_delivery;
@property(retain) NSArray *regions; // @synthesize regions=_regions;
- (id)regionForID:(id)arg1;	// IMP=0x0000000000029a42
@property(readonly) _Bool isLoading;
@property(readonly) _Bool isLoaded;
- (void)flushRegions;	// IMP=0x00000000000299ec
- (void)startLoading;	// IMP=0x00000000000292e5
- (void)_buildMessageDeliveryIfNeeded;	// IMP=0x0000000000029296
- (void)dealloc;	// IMP=0x0000000000029254

@end
