//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol BPSPublisher;

@interface BPSZip
{
    id <BPSPublisher> _a;	// 8 = 0x8
    id <BPSPublisher> _b;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000022d52
@property(readonly, nonatomic) id <BPSPublisher> b; // @synthesize b=_b;
@property(readonly, nonatomic) id <BPSPublisher> a; // @synthesize a=_a;
- (void)subscribe:(id)arg1;	// IMP=0x0000000000022c09
- (id)initWithA:(id)arg1 b:(id)arg2;	// IMP=0x0000000000022b67
- (id)init;	// IMP=0x0000000000022b61

@end

