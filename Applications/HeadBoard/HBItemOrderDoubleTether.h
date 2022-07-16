//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HBApp, NSString;

@interface HBItemOrderDoubleTether
{
    HBApp *_leadingApplication;	// 8 = 0x8
    unsigned long long _leadingDistance;	// 16 = 0x10
    HBApp *_trailingApplication;	// 24 = 0x18
    unsigned long long _trailingDistance;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000005e41e
@property(readonly, nonatomic) unsigned long long trailingDistance; // @synthesize trailingDistance=_trailingDistance;
@property(readonly, nonatomic) HBApp *trailingApplication; // @synthesize trailingApplication=_trailingApplication;
@property(readonly, nonatomic) unsigned long long leadingDistance; // @synthesize leadingDistance=_leadingDistance;
@property(readonly, nonatomic) HBApp *leadingApplication; // @synthesize leadingApplication=_leadingApplication;
- (unsigned long long)insertionIndexInItems:(id)arg1;	// IMP=0x001000000005e2cb
- (id)initWithLeadingApplication:(id)arg1 distance:(unsigned long long)arg2 trailingApplication:(id)arg3 distance:(unsigned long long)arg4;	// IMP=0x001000000005e203

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
