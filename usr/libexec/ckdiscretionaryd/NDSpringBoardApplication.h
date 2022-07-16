//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NDSpringBoardApplication
{
    NDSpringBoardApplication *_containingApplication;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002567
@property(retain, nonatomic) NDSpringBoardApplication *containingApplication; // @synthesize containingApplication=_containingApplication;
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x001000000000250c
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x00100000000024d6
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000023b7
- (void)addObserver:(id)arg1;	// IMP=0x0010000000002298
- (_Bool)isForeground;	// IMP=0x001000000000223d
- (_Bool)hasForegroundBackgroundStates;	// IMP=0x0010000000002235
- (id)initWithOperationID:(id)arg1;	// IMP=0x0010000000002132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
