//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@class NSString;

@interface NSProgress (LSInstallProgressAdditions)
+ (id)keyPathsForValuesAffectingInstallPhase;	// IMP=0x00000000000c79f9
+ (id)keyPathsForValuesAffectingInstallState;	// IMP=0x00000000000c79d9
+ (id)publishingKeyForApp:(id)arg1 withPhase:(unsigned long long)arg2;	// IMP=0x00000000000c7940
+ (id)childProgressForBundleID:(id)arg1 andPhase:(unsigned long long)arg2;	// IMP=0x00000000000c78da
- (id)_LSDescription;	// IMP=0x00000000000c7bfe
- (void)_LSResume;	// IMP=0x00000000000c7bec
@property(readonly, nonatomic) NSString *installPhaseString;
@property(nonatomic) unsigned long long installPhase;
@property(nonatomic) unsigned long long installState;
- (id)initWithParent:(id)arg1 bundleID:(id)arg2 andPhase:(unsigned long long)arg3;	// IMP=0x00000000000c76e0
@end

