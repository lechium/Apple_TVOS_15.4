//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMapTable, NSSet;
@protocol REActivityTrackerDelegate;

@interface REActivityTracker : NSObject
{
    struct {
        unsigned int implementsBeginActivity:1;
        unsigned int implementsEndActivity:1;
        unsigned int implementsBeginActivityForObject:1;
        unsigned int implementsEndActivityForObject:1;
    } delegateCallbacks;	// 8 = 0x8
    NSCountedSet *_activities;	// 16 = 0x10
    NSMapTable *_activitiesByObject;	// 24 = 0x18
    id <REActivityTrackerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e5720
@property(readonly, nonatomic) __weak id <REActivityTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)outstandingActivitiesForObject:(id)arg1;	// IMP=0x00000000000e565a
@property(readonly, nonatomic) NSSet *outstandingActivities;
- (void)endActivity:(id)arg1 forObject:(id)arg2;	// IMP=0x00000000000e5450
- (void)beginActivity:(id)arg1 forObject:(id)arg2;	// IMP=0x00000000000e52c3
- (void)withdrawObject:(id)arg1;	// IMP=0x00000000000e5014
- (void)trackObject:(id)arg1;	// IMP=0x00000000000e4f59
- (_Bool)trackingObject:(id)arg1;	// IMP=0x00000000000e4f22
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000e4dd7

@end

