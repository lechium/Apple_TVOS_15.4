//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SAIntentGroupSupportedIntentResponse
{
}

+ (id)supportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000002be9b
+ (id)supportedIntentResponse;	// IMP=0x000000000002be89
- (_Bool)requiresResponse;	// IMP=0x000000000002bf05
@property(copy, nonatomic) NSString *useCaseId;
@property(copy, nonatomic) NSArray *commands;
- (id)encodedClassName;	// IMP=0x000000000002be7c
- (id)groupIdentifier;	// IMP=0x000000000002be68

@end

