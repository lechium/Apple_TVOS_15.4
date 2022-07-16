//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSURL, RBSProcessIdentity;
@protocol FBProcessWatchdogProviding;

@interface FBMutableProcessExecutionContext
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ba44

// Remaining properties
@property(copy, nonatomic) NSArray *arguments; // @dynamic arguments;
@property(nonatomic) _Bool checkForLeaks; // @dynamic checkForLeaks;
@property(nonatomic) _Bool disableASLR; // @dynamic disableASLR;
@property(copy, nonatomic) NSDictionary *environment; // @dynamic environment;
@property(copy, nonatomic) RBSProcessIdentity *identity; // @dynamic identity;
@property(nonatomic) long long launchIntent; // @dynamic launchIntent;
@property(retain, nonatomic) NSURL *standardErrorURL; // @dynamic standardErrorURL;
@property(retain, nonatomic) NSURL *standardOutputURL; // @dynamic standardOutputURL;
@property(nonatomic) _Bool waitForDebugger; // @dynamic waitForDebugger;
@property(nonatomic) double watchdogExtension; // @dynamic watchdogExtension;
@property(retain, nonatomic) id <FBProcessWatchdogProviding> watchdogProvider; // @dynamic watchdogProvider;

@end

