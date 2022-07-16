//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFTimeEventBuilder-Protocol.h>

@class NSDateComponents, NSString;

@interface HFSignificantTimeEventBuilder <HFTimeEventBuilder>
{
    NSString *_significantEvent;	// 8 = 0x8
    NSDateComponents *_significantEventOffset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010a695
@property(copy, nonatomic) NSDateComponents *significantEventOffset; // @synthesize significantEventOffset=_significantEventOffset;
@property(copy, nonatomic) NSString *significantEvent; // @synthesize significantEvent=_significantEvent;
- (id)comparisonKey;	// IMP=0x000000000010a57d
- (id)eventType;	// IMP=0x000000000010a570
@property(readonly, copy) NSString *description;
- (id)performValidation;	// IMP=0x000000000010a3dc
- (id)naturalLanguageNameWithOptions:(id)arg1;	// IMP=0x000000000010a3c3
- (id)naturalLanguageNameWithOptions:(id)arg1 recurrences:(id)arg2;	// IMP=0x000000000010a2f8
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;	// IMP=0x000000000010a24d
- (id)buildNewEventsFromCurrentState;	// IMP=0x000000000010a18a
- (id)initWithEvent:(id)arg1;	// IMP=0x000000000010a0ba
- (id)compareToObject:(id)arg1;	// IMP=0x00000000000911ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

