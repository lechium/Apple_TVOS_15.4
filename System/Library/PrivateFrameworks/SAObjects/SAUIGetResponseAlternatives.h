//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SAUIGetResponseAlternatives
{
}

+ (id)getResponseAlternativesWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003b71d
+ (id)getResponseAlternatives;	// IMP=0x000000000003b70b
- (_Bool)requiresResponse;	// IMP=0x000000000003b76b
@property(copy, nonatomic) NSString *requestId;
@property(nonatomic) _Bool locallyResolved;
- (id)encodedClassName;	// IMP=0x000000000003b6fe
- (id)groupIdentifier;	// IMP=0x000000000003b6ea

@end

