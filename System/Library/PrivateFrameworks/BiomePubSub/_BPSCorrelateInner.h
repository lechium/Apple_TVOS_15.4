//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BPSCorrelateHandler;

@interface _BPSCorrelateInner
{
    BPSCorrelateHandler *_correlateHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000047ad
@property(readonly, nonatomic) BPSCorrelateHandler *correlateHandler; // @synthesize correlateHandler=_correlateHandler;
- (id)newBookmark;	// IMP=0x000000000000448d
- (id)receiveNewValue:(id)arg1 source:(long long)arg2;	// IMP=0x00000000000043bc
- (id)initWithDownstream:(id)arg1 correlateHandler:(id)arg2;	// IMP=0x0000000000004344

@end
