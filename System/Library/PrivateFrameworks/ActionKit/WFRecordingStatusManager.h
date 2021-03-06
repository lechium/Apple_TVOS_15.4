//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBSStatusBarStyleOverridesAssertion;

@interface WFRecordingStatusManager : NSObject
{
    SBSStatusBarStyleOverridesAssertion *_assertion;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x000000000019bd7c
- (void).cxx_destruct;	// IMP=0x000000000019bb47
@property(retain, nonatomic) SBSStatusBarStyleOverridesAssertion *assertion; // @synthesize assertion=_assertion;
- (void)invalidateAssertion;	// IMP=0x000000000019baee
- (void)acquireAssertion;	// IMP=0x000000000019b987
@property(nonatomic, getter=isRecording) _Bool recording;

@end

