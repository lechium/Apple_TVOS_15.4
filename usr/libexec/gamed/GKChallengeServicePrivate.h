//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKChallengeServicePrivate
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x00200000001fc733
+ (Class)interfaceClass;	// IMP=0x00100000001fc722
- (oneway void)startGame:(id)arg1 withChallenge:(id)arg2;	// IMP=0x00200000001fcded
- (oneway void)getCountOfChallengesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001fc73e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

