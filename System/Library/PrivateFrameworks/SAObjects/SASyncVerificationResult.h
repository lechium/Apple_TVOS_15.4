//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;

@interface SASyncVerificationResult <SAAceSerializable>
{
}

+ (id)verificationResultWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003d4ca
+ (id)verificationResult;	// IMP=0x000000000003d4b8
@property(nonatomic) long long total;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSArray *failedObjectIds;
@property(nonatomic) long long fail;
- (id)encodedClassName;	// IMP=0x000000000003d4ab
- (id)groupIdentifier;	// IMP=0x000000000003d497

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

