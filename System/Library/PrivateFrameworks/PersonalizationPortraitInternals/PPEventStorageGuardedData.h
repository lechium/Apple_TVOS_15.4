//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EKTimedEventStorePurger, NSSet;

@interface PPEventStorageGuardedData : NSObject
{
    EKTimedEventStorePurger *_ekStorePurger;	// 8 = 0x8
    NSSet *_calendarIdentifiers;	// 16 = 0x10
    NSSet *_invisibleCalendarIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000fdfd4
- (id)ekStore;	// IMP=0x00000000000fdfb9

@end

