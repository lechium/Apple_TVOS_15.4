//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMCPowerAssertion
{
    _Bool _parked;	// 24 = 0x18
}

@property(readonly, nonatomic, getter=isParked) _Bool parked; // @synthesize parked=_parked;
- (void)unpark;	// IMP=0x000000000001b44b
- (void)park;	// IMP=0x000000000001b383
- (void)dealloc;	// IMP=0x000000000001b249
- (id)initWithReason:(id)arg1;	// IMP=0x000000000001b136

@end

