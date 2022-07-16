//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface CKDiscoverUserInfosOperation
{
    NSArray *_emailAddresses;	// 8 = 0x8
    NSArray *_userRecordIDs;	// 16 = 0x10
    CDUnknownBlockType _discoverUserInfosCompletionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000168079
@property(copy, nonatomic) CDUnknownBlockType discoverUserInfosCompletionBlock; // @synthesize discoverUserInfosCompletionBlock=_discoverUserInfosCompletionBlock;
@property(copy, nonatomic) NSArray *userRecordIDs; // @synthesize userRecordIDs=_userRecordIDs;
@property(copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x0000000000167ea6
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;	// IMP=0x0000000000167e77

@end

