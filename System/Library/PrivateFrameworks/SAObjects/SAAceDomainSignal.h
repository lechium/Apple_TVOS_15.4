//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SAAceDomainSignal
{
}

+ (id)aceDomainSignalWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000160be
+ (id)aceDomainSignal;	// IMP=0x00000000000160ac
- (_Bool)mutatingCommand;	// IMP=0x0000000000016114
- (_Bool)requiresResponse;	// IMP=0x000000000001610c
@property(copy, nonatomic) NSString *domain;
@property(copy, nonatomic) NSArray *appIdHints;
- (id)encodedClassName;	// IMP=0x000000000001609f
- (id)groupIdentifier;	// IMP=0x000000000001608b

@end

