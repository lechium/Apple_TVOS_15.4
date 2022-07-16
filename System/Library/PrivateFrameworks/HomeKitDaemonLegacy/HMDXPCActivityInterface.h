//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDXPCActivityInterfacing-Protocol.h>

@class NSString;

@interface HMDXPCActivityInterface : HMFObject <HMDXPCActivityInterfacing>
{
}

- (void)unregisterXPCActivityWithActivityIdentifier:(id)arg1;	// IMP=0x000000000049a3f8
- (long long)stateForXPCActivity:(id)arg1;	// IMP=0x000000000049a3eb
- (_Bool)setState:(long long)arg1 forXPCActivity:(id)arg2;	// IMP=0x000000000049a3db
- (void)setCriteria:(id)arg1 forXPCActivity:(id)arg2;	// IMP=0x000000000049a3cb
- (id)criteriaForXPCActivity:(id)arg1;	// IMP=0x000000000049a3b6
- (void)registerXPCActivityWithActivityIdentifier:(id)arg1 criteria:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000049a33d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

