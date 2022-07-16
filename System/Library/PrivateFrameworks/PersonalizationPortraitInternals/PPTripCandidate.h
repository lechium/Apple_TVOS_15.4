//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PPTripCandidate : NSObject
{
    NSArray *_flights;	// 8 = 0x8
    NSArray *_hotels;	// 16 = 0x10
    NSArray *_others;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a9d2e
@property(retain, nonatomic) NSArray *others; // @synthesize others=_others;
@property(retain, nonatomic) NSArray *hotels; // @synthesize hotels=_hotels;
@property(retain, nonatomic) NSArray *flights; // @synthesize flights=_flights;
- (id)tripEventFromCandidate;	// IMP=0x00000000000a940e
- (_Bool)shouldPromoteToTripEvent;	// IMP=0x00000000000a9063
- (_Bool)canBeMergedWithTripCandidate:(id)arg1;	// IMP=0x00000000000a8f13
- (id)initWithTripCandidateA:(id)arg1 andTripCandidateB:(id)arg2;	// IMP=0x00000000000a8bd0

@end

