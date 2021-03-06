//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFLocationEventBuilder-Protocol.h>

@class CLCircularRegion, NSString;

@interface HFLocationRegionEventBuilder <HFLocationEventBuilder>
{
    CLCircularRegion *_region;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004050b
@property(copy, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
- (id)comparisonKey;	// IMP=0x00000000000403c0
- (id)naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x0000000000040312
- (id)eventType;	// IMP=0x0000000000040305
@property(readonly, copy) NSString *description;
- (_Bool)isRegionAtHome:(id)arg1;	// IMP=0x00000000000401b4
- (id)buildNewEventsFromCurrentState;	// IMP=0x00000000000400ed
@property(readonly, nonatomic) unsigned long long locationEventType;
- (id)initWithEvent:(id)arg1;	// IMP=0x000000000003ffb7
- (id)compareToObject:(id)arg1;	// IMP=0x000000000009093a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

