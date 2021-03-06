//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTransitTicketingSegmentInfo-Protocol.h>

@class GEOTransitTicketingSegment, NSString;

__attribute__((visibility("hidden")))
@interface _GEOTransitTicketingSegment : NSObject <GEOTransitTicketingSegmentInfo>
{
    GEOTransitTicketingSegment *_segment;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000010373b2
@property(readonly, nonatomic) NSString *segmentName;
@property(readonly, nonatomic) NSString *ticketingUrl;
- (id)initWithSegment:(id)arg1;	// IMP=0x00000000010372a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

