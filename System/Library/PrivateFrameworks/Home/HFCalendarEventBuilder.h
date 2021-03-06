//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFTimeEventBuilder-Protocol.h>

@class NSDate, NSDateComponents, NSString;

@interface HFCalendarEventBuilder <HFTimeEventBuilder>
{
    NSDate *_fireDate;	// 8 = 0x8
    NSDateComponents *_fireTimeComponents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010a089
@property(copy, nonatomic) NSDateComponents *fireTimeComponents; // @synthesize fireTimeComponents=_fireTimeComponents;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (id)comparisonKey;	// IMP=0x0000000000109f71
- (id)eventType;	// IMP=0x0000000000109f64
@property(readonly, copy) NSString *description;
- (id)_fireDateForTimeComponents:(id)arg1;	// IMP=0x0000000000109c3d
@property(readonly, nonatomic) NSDate *effectiveFireDate;
- (id)effectiveFireTimeComponents;	// IMP=0x0000000000109a92
- (void)updateBaseFireDateForTrigger;	// IMP=0x00000000001099d1
- (id)performValidation;	// IMP=0x0000000000109921
- (id)naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x0000000000109908
- (id)naturalLanguageNameWithOptions:(id)arg1 recurrences:(id)arg2;	// IMP=0x0000000000109865
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;	// IMP=0x00000000001097ba
- (id)buildNewEventsFromCurrentState;	// IMP=0x0000000000109716
- (id)initWithEvent:(id)arg1;	// IMP=0x000000000010967e
- (id)compareToObject:(id)arg1;	// IMP=0x0000000000090fe8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

