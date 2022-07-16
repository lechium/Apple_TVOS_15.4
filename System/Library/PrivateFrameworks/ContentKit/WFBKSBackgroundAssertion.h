//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface WFBKSBackgroundAssertion
{
    NSString *_taskName;	// 8 = 0x8
    CDUnknownBlockType _expirationHandler;	// 16 = 0x10
    BKSProcessAssertion *_assertion;	// 24 = 0x18
    id _observer;	// 32 = 0x20
}

+ (id)backgroundAssertionWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007c040
- (void).cxx_destruct;	// IMP=0x000000000007bbcd
@property(retain, nonatomic) id observer; // @synthesize observer=_observer;
@property(retain, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
@property(readonly, copy, nonatomic) NSString *taskName; // @synthesize taskName=_taskName;
- (void)end;	// IMP=0x000000000007ba2a
- (id)initWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007b691

@end

