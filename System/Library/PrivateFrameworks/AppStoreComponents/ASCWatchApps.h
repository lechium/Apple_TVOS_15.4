//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAppOfferStateCenter;

@interface ASCWatchApps : NSObject
{
    ASCAppOfferStateCenter *_appOfferStateCenter;	// 8 = 0x8
}

+ (id)sharedWatchApps;	// IMP=0x000000000001afd4
- (void).cxx_destruct;	// IMP=0x000000000001b1f5
@property(readonly, nonatomic) ASCAppOfferStateCenter *appOfferStateCenter; // @synthesize appOfferStateCenter=_appOfferStateCenter;
- (id)reinstallSystemAppWithBundleID:(id)arg1;	// IMP=0x000000000001b168
- (id)reinstallAppWithID:(id)arg1;	// IMP=0x000000000001b0e5
- (id)initWithAppOfferStateCenter:(id)arg1;	// IMP=0x000000000001b07a

@end
