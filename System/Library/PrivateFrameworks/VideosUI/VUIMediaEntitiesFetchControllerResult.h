//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VUIMediaEntitiesFetchControllerResult : NSObject
{
    long long _fetchReason;	// 8 = 0x8
    NSArray *_fetchResponses;	// 16 = 0x10
    NSArray *_fetchResponseChanges;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000044fa5
@property(copy, nonatomic) NSArray *fetchResponseChanges; // @synthesize fetchResponseChanges=_fetchResponseChanges;
@property(copy, nonatomic) NSArray *fetchResponses; // @synthesize fetchResponses=_fetchResponses;
@property(nonatomic) long long fetchReason; // @synthesize fetchReason=_fetchReason;
- (id)description;	// IMP=0x0000000000044d33
- (id)initWithFetchReason:(long long)arg1 fetchResponses:(id)arg2;	// IMP=0x0000000000044cb5
- (id)init;	// IMP=0x0000000000044c46

@end

