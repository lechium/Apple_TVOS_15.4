//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMUserActionPredictionSubscriber-Protocol.h>

@class HMUserActionPredictionProvider, NSString, NSUUID, _HMContext;
@protocol HMUserActionPredictionControllerDelegate;

@interface HMUserActionPredictionController : NSObject <HMUserActionPredictionSubscriber, HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMUserActionPredictionControllerDelegate> _delegate;	// 16 = 0x10
    HMUserActionPredictionProvider *_predictionProvider;	// 24 = 0x18
    NSUUID *_homeIdentifier;	// 32 = 0x20
    _HMContext *_context;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0000000000055f60
- (void).cxx_destruct;	// IMP=0x0000000000055ee3
@property(retain) _HMContext *context; // @synthesize context=_context;
@property(readonly, copy) NSUUID *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
@property(readonly) HMUserActionPredictionProvider *predictionProvider; // @synthesize predictionProvider=_predictionProvider;
- (void)didUpdatePredictions:(id)arg1 forHomeWithIdentifier:(id)arg2;	// IMP=0x0000000000055b80
- (void)configureWithContext:(id)arg1;	// IMP=0x0000000000055b6e
- (id)predictions;	// IMP=0x0000000000055ac6
@property __weak id <HMUserActionPredictionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchPredictionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000055630
- (id)initWithHomeIdentifier:(id)arg1 predictionProvider:(id)arg2;	// IMP=0x000000000005554a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

