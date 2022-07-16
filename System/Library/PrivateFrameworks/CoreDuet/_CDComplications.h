//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _CDComplications : NSObject
{
    NSObject<OS_dispatch_queue> *complicationQueue;	// 8 = 0x8
    int deviceChangeToken;	// 16 = 0x10
    NSUserDefaults *pushLimits;	// 24 = 0x18
    NSMutableDictionary *meterTokens;	// 32 = 0x20
    NSDictionary *_activeComplications;	// 40 = 0x28
}

+ (id)initializeForAdmissionChecking:(_Bool)arg1;	// IMP=0x000000000006fce6
+ (id)sharedComplication;	// IMP=0x000000000006fbfc
- (void).cxx_destruct;	// IMP=0x0000000000070727
@property(copy) NSDictionary *activeComplications; // @synthesize activeComplications=_activeComplications;
- (id)CDAttributeForComplication:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000706fc
- (void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;	// IMP=0x00000000000706f6
- (void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;	// IMP=0x00000000000706f0
- (void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3;	// IMP=0x00000000000706ea
- (_Bool)isBundleActiveComplication:(id)arg1;	// IMP=0x00000000000705ad
- (_Bool)admissionCheckOnComplication:(id)arg1 forRemote:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000702d6
- (int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2;	// IMP=0x00000000000700d6
- (int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1;	// IMP=0x00000000000700bd
- (id)initForComplications;	// IMP=0x000000000006fe1a
- (void)readOutActiveComplications;	// IMP=0x000000000006fcf8

@end
