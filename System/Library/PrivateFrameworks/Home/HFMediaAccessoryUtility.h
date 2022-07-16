//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface HFMediaAccessoryUtility : NSObject
{
    NSMutableArray *_uuidTrackingList;	// 8 = 0x8
    NSMutableDictionary *_restartStateList;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000001a88f3
- (void).cxx_destruct;	// IMP=0x00000000001aa0ff
@property(retain) NSMutableDictionary *restartStateList; // @synthesize restartStateList=_restartStateList;
@property(retain) NSMutableArray *uuidTrackingList; // @synthesize uuidTrackingList=_uuidTrackingList;
- (void)markUUIDUnreachableViaRapport:(id)arg1;	// IMP=0x00000000001a9db5
- (void)markUUIDReachableViaRapport:(id)arg1;	// IMP=0x00000000001a9b45
- (_Bool)checkIfLanguageSetupIsDoneForAccessory:(id)arg1;	// IMP=0x00000000001a99d2
- (_Bool)checkIfAccessoryisPartofHomeAndHasLanguageSettings:(id)arg1;	// IMP=0x00000000001a91a1
- (void)updateHomePodAccessoryRestartState:(unsigned long long)arg1 with:(id)arg2;	// IMP=0x00000000001a8d00
- (_Bool)isHomePodRestartingCurrently:(id)arg1;	// IMP=0x00000000001a8a69
- (_Bool)isHomePodRestartInitiated:(id)arg1;	// IMP=0x00000000001a89ce
- (id)init;	// IMP=0x00000000001a8959

@end
