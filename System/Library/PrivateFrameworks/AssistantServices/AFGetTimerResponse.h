//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class STTimer;

@interface AFGetTimerResponse
{
    STTimer *_timer;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003efd7
- (void).cxx_destruct;	// IMP=0x000000000003f11c
@property(retain, nonatomic) STTimer *timer; // @synthesize timer=_timer;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f05c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003efdf

@end

