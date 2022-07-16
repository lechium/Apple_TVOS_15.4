//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFObject-Protocol.h>

@class HMFMessage, NSArray, NSString;

@interface HMFMessageFilter <HMFLogging, HMFObject>
{
    HMFMessage *_message;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000047c65
+ (id)policyClasses;	// IMP=0x0000000000047964
+ (_Bool)canInitWithMessage:(id)arg1;	// IMP=0x0000000000047750
- (void).cxx_destruct;	// IMP=0x0000000000047d32
@property(readonly, copy) HMFMessage *message; // @synthesize message=_message;
- (id)logIdentifier;	// IMP=0x0000000000047ccc
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
- (id)initWithMessage:(id)arg1;	// IMP=0x000000000004797d
- (_Bool)acceptWithPolicies:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000478ae
- (id)init;	// IMP=0x0000000000047806

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

