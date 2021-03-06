//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString;

@interface DMFFetchStreamEventsRequest
{
    NSString *_organizationIdentifier;	// 8 = 0x8
    NSArray *_eventIdentifiers;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000026e29
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000026e21
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000026e19
+ (id)permittedPlatforms;	// IMP=0x0000000000026e0c
+ (Class)whitelistedClassForResultObject;	// IMP=0x0000000000026dfb
- (void).cxx_destruct;	// IMP=0x0000000000027174
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSArray *eventIdentifiers; // @synthesize eventIdentifiers=_eventIdentifiers;
@property(copy, nonatomic) NSString *organizationIdentifier; // @synthesize organizationIdentifier=_organizationIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027002
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026e31

@end

