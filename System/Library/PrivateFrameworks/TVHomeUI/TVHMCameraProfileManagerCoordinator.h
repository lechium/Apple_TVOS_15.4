//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TVHMCameraProfileManagerCoordinator : NSObject
{
    NSMutableDictionary *_profileControllerDict;	// 8 = 0x8
}

+ (id)sharedCoordinator;	// IMP=0x0000000000012140
- (void).cxx_destruct;	// IMP=0x00000000000127b0
- (_Bool)hasTakenInitialSnapshotForProfile:(id)arg1;	// IMP=0x0000000000012720
- (_Bool)hasOutstandingSnapshottersForProfile:(id)arg1;	// IMP=0x0000000000012690
- (_Bool)hasOutstandingStreamersForProfile:(id)arg1;	// IMP=0x0000000000012600
- (_Bool)hasOutstandingStreamersWithAudioForProfile:(id)arg1;	// IMP=0x0000000000012570
- (void)removeManager:(id)arg1;	// IMP=0x00000000000124c0
- (void)addManager:(id)arg1;	// IMP=0x0000000000012410
- (id)controllerForCameraProfile:(id)arg1;	// IMP=0x00000000000122c0
- (id)init;	// IMP=0x0000000000012200

@end

