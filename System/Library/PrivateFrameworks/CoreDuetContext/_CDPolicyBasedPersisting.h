//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@protocol _CDContextPersisting;

@interface _CDPolicyBasedPersisting : NSObject <_CDContextPersisting>
{
    id <_CDContextPersisting> _persistenceSurvivingReboot;	// 8 = 0x8
    id <_CDContextPersisting> _persistenceSurvivingRelaunch;	// 16 = 0x10
}

+ (id)persistenceWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2;	// IMP=0x000000000002c7f6
- (void).cxx_destruct;	// IMP=0x000000000002cc93
@property(readonly, nonatomic) id <_CDContextPersisting> persistenceSurvivingRelaunch; // @synthesize persistenceSurvivingRelaunch=_persistenceSurvivingRelaunch;
@property(readonly, nonatomic) id <_CDContextPersisting> persistenceSurvivingReboot; // @synthesize persistenceSurvivingReboot=_persistenceSurvivingReboot;
- (id)loadRegistrations;	// IMP=0x000000000002cb60
- (id)loadValues;	// IMP=0x000000000002cb4a
- (void)deleteDataCreatedBefore:(id)arg1;	// IMP=0x000000000002ca7d
- (void)deleteAllData;	// IMP=0x000000000002c9f5
- (void)deleteRegistration:(id)arg1;	// IMP=0x000000000002c93e
- (void)saveRegistration:(id)arg1;	// IMP=0x000000000002c887
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000002c871
- (id)initWithPersistenceSurvivingReboot:(id)arg1 persistenceSurvivingRelaunch:(id)arg2;	// IMP=0x000000000002c75d

@end
