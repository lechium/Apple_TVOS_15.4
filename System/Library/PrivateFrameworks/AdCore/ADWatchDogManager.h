//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface ADWatchDogManager
{
    NSObject<OS_dispatch_queue> *_watchdogQueue;	// 8 = 0x8
    NSNumber *_currentToken;	// 16 = 0x10
    NSMutableDictionary *_tokenCollection;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000001bc0d
- (void).cxx_destruct;	// IMP=0x000000000001c610
@property(readonly, nonatomic) NSMutableDictionary *tokenCollection; // @synthesize tokenCollection=_tokenCollection;
@property(retain, nonatomic) NSNumber *currentToken; // @synthesize currentToken=_currentToken;
- (id)getNextToken;	// IMP=0x000000000001c56d
- (void)incrementToken;	// IMP=0x000000000001c510
- (void)simulateCrash:(id)arg1 becauseOf:(unsigned long long)arg2 actuallyTook:(double)arg3;	// IMP=0x000000000001c4bb
- (_Bool)updateReason:(id)arg1 forToken:(id)arg2;	// IMP=0x000000000001c3f3
- (_Bool)removeWatchdogWithToken:(id)arg1;	// IMP=0x000000000001c272
- (id)createNewWatchdog:(id)arg1 withTimer:(unsigned long long)arg2;	// IMP=0x000000000001bd48
- (id)init;	// IMP=0x000000000001bc9a

@end

