//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol XRMobileAgentStop;

@interface XRMobileAgentItinerary : NSObject
{
    id <XRMobileAgentStop> _nextStop;	// 8 = 0x8
    id <XRMobileAgentStop> _currentStop;	// 16 = 0x10
    id <XRMobileAgentStop> _finalDestination;	// 24 = 0x18
    id <XRMobileAgentStop> _nextStopTicket;	// 32 = 0x20
    NSString *_nextMode;	// 40 = 0x28
    int _nextMovementType;	// 48 = 0x30
    unsigned int _nextQoS;	// 52 = 0x34
    _Bool _updated;	// 56 = 0x38
    id _finalDestinationTicket;	// 64 = 0x40
}

+ (id)inlineStop;	// IMP=0x000000000001ecd3
- (void).cxx_destruct;	// IMP=0x000000000001f210
@property(retain, nonatomic) id finalDestinationTicket; // @synthesize finalDestinationTicket=_finalDestinationTicket;
@property(retain, nonatomic) id <XRMobileAgentStop> finalDestination; // @synthesize finalDestination=_finalDestination;
@property(readonly, nonatomic) _Bool updated; // @synthesize updated=_updated;
@property(readonly, nonatomic) id <XRMobileAgentStop> currentStop; // @synthesize currentStop=_currentStop;
- (int)_nextMovementType;	// IMP=0x000000000001f1be
- (void)setNextStop:(id)arg1 mode:(id)arg2;	// IMP=0x000000000001f1a9
- (void)setNextStop:(id)arg1 mode:(id)arg2 ticket:(id)arg3;	// IMP=0x000000000001f191
- (void)setNextStop:(id)arg1 mode:(id)arg2 ticket:(id)arg3 desiredQoS:(unsigned int)arg4;	// IMP=0x000000000001f0a2
- (void)revisit;	// IMP=0x000000000001f091
- (void)finishedWithMode:(id)arg1;	// IMP=0x000000000001f038
- (void)_visitNextStop:(id)arg1;	// IMP=0x000000000001ece4

@end

