//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMPresenceEvent;

@interface HFPresenceCondition
{
    HMPresenceEvent *_presenceEvent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003aa58
@property(retain, nonatomic) HMPresenceEvent *presenceEvent; // @synthesize presenceEvent=_presenceEvent;
- (id)initWithPresenceEvent:(id)arg1;	// IMP=0x000000000003a9d9
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000003a652
- (id)hf_naturalLanguageSummaryWithOptions:(id)arg1;	// IMP=0x0000000000005c66

@end

