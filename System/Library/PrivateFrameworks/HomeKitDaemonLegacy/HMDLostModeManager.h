//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSString;
@protocol HMFLocking;

@interface HMDLostModeManager : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _lost;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x000000000070b84d
+ (id)logCategory;	// IMP=0x0000000000242c8e
- (void).cxx_destruct;	// IMP=0x000000000070b2f8
@property(readonly, getter=isLost) _Bool lost;
- (id)init;	// IMP=0x000000000070b0ec
- (id)attributeDescriptions;	// IMP=0x0000000000242bba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

