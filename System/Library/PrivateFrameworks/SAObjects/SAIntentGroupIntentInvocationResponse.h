//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SAIntentGroupIntentInvocationResponse
{
}

+ (id)intentInvocationResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003f4a5
+ (id)intentInvocationResponse;	// IMP=0x000000000003f493
- (_Bool)requiresResponse;	// IMP=0x000000000003f553
@property(copy, nonatomic) NSString *utterance;
@property(copy, nonatomic) NSArray *parameters;
@property(copy, nonatomic) NSString *launchId;
@property(nonatomic) _Bool backgroundLaunch;
- (id)encodedClassName;	// IMP=0x000000000003f486
- (id)groupIdentifier;	// IMP=0x000000000003f472

@end
