//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSPowerLogger : NSObject
{
}

+ (id)sharedPowerLogger;	// IMP=0x000000000001eda5
- (void)_configPowerlog:(id)arg1;	// IMP=0x000000000001ef49
- (void)_borealisPowerlog:(id)arg1;	// IMP=0x000000000001ef43
- (void)powerLogSiriConfigWithVoiceTriggerEnabled:(_Bool)arg1 withLanguage:(id)arg2 withModelVersion:(id)arg3;	// IMP=0x000000000001ee32
- (void)powerWithNumFalseWakeup:(unsigned long long)arg1 withDuration:(double)arg2;	// IMP=0x000000000001ee2c
- (void)powerLogVoiceTriggerStop;	// IMP=0x000000000001ee13
- (void)powerLogVoiceTriggerStart;	// IMP=0x000000000001edfa

@end
