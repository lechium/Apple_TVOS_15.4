//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

@interface EKChangeListener : NSObject
{
    NSPointerArray *_delegates;	// 8 = 0x8
}

+ (_Bool)isSyncStatusChangeNotification:(id)arg1;	// IMP=0x000000000001a9bf
+ (id)changedIdentifiersForNotification:(id)arg1;	// IMP=0x000000000001a962
+ (id)updatedObjectFor:(id)arg1 changeNotification:(id)arg2;	// IMP=0x000000000001a7e6
- (void).cxx_destruct;	// IMP=0x000000000001aa6f
@property(retain) NSPointerArray *delegates; // @synthesize delegates=_delegates;
- (void)objectsChangedNotification:(id)arg1;	// IMP=0x0000000000019e2c
- (id)_orderedDelegates;	// IMP=0x0000000000019cfe
- (void)registerDelegate:(id)arg1;	// IMP=0x0000000000019c8c
- (id)init;	// IMP=0x0000000000019b71

@end

