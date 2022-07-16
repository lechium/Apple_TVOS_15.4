//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSDate, NSString, STSiriLocation;

@interface STShowMapsSearchResultsRequest : AFSiriRequest
{
    STSiriLocation *_searchResults;	// 8 = 0x8
    NSString *_extSessionGuid;	// 16 = 0x10
    NSDate *_extSessionGuidCreatedTimestamp;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000090e8
- (void).cxx_destruct;	// IMP=0x00000000000092d2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000091aa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000090f0
- (id)createResponse;	// IMP=0x00000000000090b2
- (id)extSessionGuidCreatedTimestamp;	// IMP=0x000000000000909d
- (id)extSessionGuid;	// IMP=0x0000000000009088
- (id)searchResults;	// IMP=0x0000000000009073
- (id)_initWithLocation:(id)arg1 extSessionGuid:(id)arg2 extSessionGuidCreatedTimestamp:(id)arg3;	// IMP=0x0000000000008fad

@end

