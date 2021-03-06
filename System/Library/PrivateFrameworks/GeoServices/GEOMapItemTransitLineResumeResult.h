//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol GEOTransitDepartureSequence;

@interface GEOMapItemTransitLineResumeResult : NSObject
{
    _Bool _blocked;	// 8 = 0x8
    id <GEOTransitDepartureSequence> _departureSequence;	// 16 = 0x10
    NSDate *_earliestNextDepartureDate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000001159b95
@property(retain, nonatomic) NSDate *earliestNextDepartureDate; // @synthesize earliestNextDepartureDate=_earliestNextDepartureDate;
@property(retain, nonatomic) id <GEOTransitDepartureSequence> departureSequence; // @synthesize departureSequence=_departureSequence;
@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;

@end

