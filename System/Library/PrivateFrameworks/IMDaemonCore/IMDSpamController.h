//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IMDSpamController : NSObject
{
    NSMutableDictionary *_chatGUIDToSpamCheckTimerMap;	// 8 = 0x8
    NSMutableDictionary *_chatGUIDToCountMap;	// 16 = 0x10
    double _spamExtensionCutoffTime;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000001a6da
@property(nonatomic) double spamExtensionCutoffTime; // @synthesize spamExtensionCutoffTime=_spamExtensionCutoffTime;
@property(retain) NSMutableDictionary *chatGUIDToCountMap; // @synthesize chatGUIDToCountMap=_chatGUIDToCountMap;
@property(retain) NSMutableDictionary *chatGUIDToSpamCheckTimerMap; // @synthesize chatGUIDToSpamCheckTimerMap=_chatGUIDToSpamCheckTimerMap;
- (void)checkForSpamWithExtensionInChat:(id)arg1 forMessageBody:(id)arg2 sender:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000001b0d5
- (_Bool)shouldCheckForSpamWithExtensionInChat:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3;	// IMP=0x000000000001b0cd
- (void)detectSpam:(id)arg1 chatGUID:(id)arg2;	// IMP=0x000000000001acb7
- (_Bool)_isDisabled;	// IMP=0x000000000001ac5e
- (id)chatRegistry;	// IMP=0x000000000001ac45
- (void)_spamCheckTimerFired:(id)arg1;	// IMP=0x000000000001ab99
- (void)_updateSpamCheckTimerWithInterval:(double)arg1 forChatGUID:(id)arg2;	// IMP=0x000000000001a972
- (void)__queryServerForID:(id)arg1 count:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a835
- (id)init;	// IMP=0x000000000001a776
- (void)dealloc;	// IMP=0x000000000001a71f

@end

