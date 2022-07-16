//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRFrameActivityManagerPrivate-Protocol.h>
#import <DVTInstrumentsUtilities/XRMobileAgentStop-Protocol.h>

@class NSString, XRFrameActivity;

@interface XRFrameActivityManager : NSObject <XRFrameActivityManagerPrivate, XRMobileAgentStop>
{
    struct shared_ptr<xray::scheduler::ActivityManager> _managerImpl;	// 8 = 0x8
    struct shared_ptr<xray::scheduler::ActivityManager> _secondTierManagerImpl;	// 24 = 0x18
    XRFrameActivity *_syncActivity;	// 40 = 0x28
    int _kdebugCodeBase;	// 48 = 0x30
    unsigned long long _signpostID;	// 56 = 0x38
    unsigned long long _ringSignpostID;	// 64 = 0x40
    unsigned char _currentSlot;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x000000000001a19e
+ (_Bool)_establishesAffinity;	// IMP=0x000000000001a196
+ (int)_identifierForSignposting;	// IMP=0x000000000001a18b
+ (unsigned int)_activityQoS;	// IMP=0x000000000001a180
+ (_Bool)supportsQoS;	// IMP=0x000000000001a178
+ (_Bool)enableConcurrentActivities;	// IMP=0x000000000001a170
- (id).cxx_construct;	// IMP=0x000000000001afaf
- (void).cxx_destruct;	// IMP=0x000000000001af80
@property(readonly, nonatomic) unsigned char currentSlot; // @synthesize currentSlot=_currentSlot;
- (_Bool)holdBackArrivingAgent:(id)arg1;	// IMP=0x000000000001af6e
- (_Bool)holdBackRevisitingAgent:(id)arg1;	// IMP=0x000000000001af66
- (void)startingMajorFrame;	// IMP=0x000000000001af60
- (void)extendingMinorFrame:(unsigned char)arg1;	// IMP=0x000000000001af5a
- (void)underrunMinorFrame:(unsigned char)arg1;	// IMP=0x000000000001af54
- (void)yieldingMinorFrame:(unsigned char)arg1;	// IMP=0x000000000001af4e
- (void)enteringMinorFrame:(unsigned char)arg1;	// IMP=0x000000000001af48
- (void *)_secondTierManagerImplPtr;	// IMP=0x000000000001af3e
- (void *)_managerImplPtr;	// IMP=0x000000000001af34
- (void)_shutdown;	// IMP=0x000000000001af22
- (void)_startingMajorFrame;	// IMP=0x000000000001af10
- (void)_extendingMinorFrame:(unsigned char)arg1;	// IMP=0x000000000001aefb
- (void)_underrunMinorFrame:(unsigned char)arg1;	// IMP=0x000000000001aee6
- (void)_yieldingMinorFrame:(unsigned char)arg1;	// IMP=0x000000000001adf7
- (void)_acquiredMinorFrame:(unsigned char)arg1;	// IMP=0x000000000001ad04
- (void)activateNextMajorFrame;	// IMP=0x000000000001acf6
- (void)_needsScheduling;	// IMP=0x000000000001ace8
- (void)_finalShutdown;	// IMP=0x000000000001ace2
- (void)_prepareMinorFrameAgent:(id)arg1;	// IMP=0x000000000001acdc
- (void)_escortMinorFrameAgentToExit:(id)arg1;	// IMP=0x000000000001acd6
- (void)_reevaluateArrivingAgent:(id)arg1;	// IMP=0x000000000001aa31
- (void)receiveMobileAgent:(id)arg1;	// IMP=0x000000000001aa1e
- (void)setupVisitDuringMinorFrame:(id)arg1 agent:(id)arg2 mode:(id)arg3 ticket:(id)arg4;	// IMP=0x000000000001a8c5
- (void)scheduleInactivity:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a8b3
- (void)scheduleActivity:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a8a1
- (id)scheduleActivityAsOperation:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a7ea
- (void)performOutsideMinorFrame:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a7d8
- (void)performDuringMinorFrame:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a7c6
@property(readonly, nonatomic) int agentStopDiagnosticsTypeCode;
- (void)dealloc;	// IMP=0x000000000001a716
- (id)init;	// IMP=0x000000000001a6e7
- (id)initWithRing:(id)arg1;	// IMP=0x000000000001a246

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

