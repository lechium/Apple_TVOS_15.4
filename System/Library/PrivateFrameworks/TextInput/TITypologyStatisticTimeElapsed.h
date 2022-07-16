//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TITypologyTimer;

@interface TITypologyStatisticTimeElapsed
{
    TITypologyTimer *_timer;	// 8 = 0x8
    TITypologyTimer *_adjustedTimer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003a972
@property(retain, nonatomic) TITypologyTimer *adjustedTimer; // @synthesize adjustedTimer=_adjustedTimer;
@property(retain, nonatomic) TITypologyTimer *timer; // @synthesize timer=_timer;
- (void)visitRecordKeyboardInput:(id)arg1;	// IMP=0x000000000003a86a
@property(readonly, nonatomic) double adjustedElapsedTime;
@property(readonly, nonatomic) double elapsedTime;
- (id)aggregateReport;	// IMP=0x000000000003a733
- (id)structuredReport;	// IMP=0x000000000003a61f
- (id)init;	// IMP=0x000000000003a57f

@end

