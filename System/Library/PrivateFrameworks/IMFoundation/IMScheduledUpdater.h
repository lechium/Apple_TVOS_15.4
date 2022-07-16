//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCountedSet;

@interface IMScheduledUpdater
{
    NSCountedSet *_holdingUpdatesKeys;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000022e34
@property(retain, nonatomic) NSCountedSet *holdingUpdatesKeys; // @synthesize holdingUpdatesKeys=_holdingUpdatesKeys;
- (void)invalidate;	// IMP=0x0000000000022da8
- (_Bool)isHoldingUpdatesForKey:(id)arg1;	// IMP=0x0000000000022d2c
- (_Bool)isHoldingUpdates;	// IMP=0x0000000000022ce4
- (void)endHoldingUpdatesForAllKeys;	// IMP=0x0000000000022c45
- (void)endHoldingUpdatesForKey:(id)arg1;	// IMP=0x0000000000022b67
- (void)beginHoldingUpdatesForKey:(id)arg1;	// IMP=0x0000000000022af5
- (void)updateIfNeeded;	// IMP=0x0000000000022ab3
- (void)setNeedsUpdate;	// IMP=0x0000000000022a1b
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x000000000002296c
- (id)description;	// IMP=0x00000000000228bd
- (void)dealloc;	// IMP=0x0000000000022856

@end
