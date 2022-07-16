//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CKDDiscoverUserIdentitiesOperation
{
    CDUnknownBlockType _discoverUserIdentitiesProgressBlock;	// 8 = 0x8
    NSArray *_userIdentityLookupInfos;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bbe9c
@property(retain, nonatomic) NSArray *userIdentityLookupInfos; // @synthesize userIdentityLookupInfos=_userIdentityLookupInfos;
@property(copy, nonatomic) CDUnknownBlockType discoverUserIdentitiesProgressBlock; // @synthesize discoverUserIdentitiesProgressBlock=_discoverUserIdentitiesProgressBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000000bbdef
- (void)main;	// IMP=0x00000000000bbd55
- (void)_discoverIdentitiesWithLookupInfos:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bb944
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;	// IMP=0x00000000000bb603
- (int)operationType;	// IMP=0x00000000000bb5f8
- (id)activityCreate;	// IMP=0x00000000000bb5cf
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000bb540

@end
