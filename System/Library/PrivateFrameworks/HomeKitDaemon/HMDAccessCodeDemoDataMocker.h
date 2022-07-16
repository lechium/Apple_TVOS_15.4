//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HMDAccessCodeDemoDataMocker : HMFObject <HMFLogging>
{
    NSMutableDictionary *_accessCodes;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000009602ed
- (void).cxx_destruct;	// IMP=0x00000000009602da
@property(readonly) NSMutableDictionary *accessCodes; // @synthesize accessCodes=_accessCodes;
- (id)_handleRemoveRequest:(id)arg1;	// IMP=0x000000000095fea3
- (id)_handleUpdateRequest:(id)arg1;	// IMP=0x000000000095faaa
- (id)_handleAddRequest:(id)arg1;	// IMP=0x000000000095f62c
- (id)_handleReadRequest:(id)arg1;	// IMP=0x000000000095f262
- (id)_handleListRequest;	// IMP=0x000000000095eee8
- (id)_controlResponseForWriteRequest:(id)arg1;	// IMP=0x000000000095ecb0
- (id)_controlResponseForReadRequest:(id)arg1;	// IMP=0x000000000095ebb3
- (id)handleReadRequests:(id)arg1;	// IMP=0x000000000095e59b
- (id)handleWriteRequests:(id)arg1;	// IMP=0x000000000095df5b
- (id)init;	// IMP=0x000000000095de3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

