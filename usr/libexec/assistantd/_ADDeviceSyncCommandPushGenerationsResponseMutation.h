//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADDeviceSyncCommandPushGenerationsResponse, NSString;

@interface _ADDeviceSyncCommandPushGenerationsResponseMutation : NSObject
{
    ADDeviceSyncCommandPushGenerationsResponse *_baseModel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000010c367
- (id)generate;	// IMP=0x001000000010c336
- (id)initWithBaseModel:(id)arg1;	// IMP=0x001000000010c2cb
- (id)init;	// IMP=0x001000000010c2b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

