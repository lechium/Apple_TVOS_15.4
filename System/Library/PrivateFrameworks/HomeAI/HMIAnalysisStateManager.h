//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString, NSUUID;
@protocol HMIAnalysisStateManagerDelegate;

@interface HMIAnalysisStateManager : HMFObject <HMFLogging>
{
    id <HMIAnalysisStateManagerDelegate> _delegate;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000006ba83
- (void).cxx_destruct;	// IMP=0x000000000006bad0
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property __weak id <HMIAnalysisStateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)stateUpdateFromFaceEvents:(id)arg1;	// IMP=0x000000000006b9b8
- (void)handleRemoteStateUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b20d
- (void)handleRemoteStateUpdate:(id)arg1;	// IMP=0x000000000006b1ee
- (void)publishLocalState:(id)arg1;	// IMP=0x000000000006b0d3
- (id)initWithHomeUUID:(id)arg1;	// IMP=0x000000000006b059

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

