//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CSIndexConnection
{
    _Bool _previouslyInitialized;	// 8 = 0x8
}

+ (id)sharedConnection;	// IMP=0x000000000002901b
@property(readonly, nonatomic) _Bool previouslyInitialized; // @synthesize previouslyInitialized=_previouslyInitialized;
- (void)sendMessageAsync:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029153
- (void)handleError:(id)arg1;	// IMP=0x0000000000029119

@end

