//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDDevicePreferenceDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMDHomeMediaSystemMessageHandlerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDHome, HMDHomeMediaSystemControllerMessageHandler, HMDStereoPairDailyCountProvider, HMFMessageDispatcher, HMFUnfairLock, NSArray, NSMutableDictionary, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDHomeMediaSystemHandlerDelegate, OS_dispatch_queue;

@interface HMDHomeMediaSystemHandler : HMFObject <HMDDevicePreferenceDataSource, HMDHomeMediaSystemMessageHandlerDelegate, NSSecureCoding, HMFLogging>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSMutableDictionary *_uuidToMediaSystems;	// 16 = 0x10
    id <HMDHomeMediaSystemHandlerDelegate> _delegate;	// 24 = 0x18
    NSUUID *_parentUUID;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HMFMessageDispatcher *_messsageDispatcher;	// 48 = 0x30
    NSNotificationCenter *_notificationCenter;	// 56 = 0x38
    HMDHome *_home;	// 64 = 0x40
    HMDHomeMediaSystemControllerMessageHandler *_messageHandler;	// 72 = 0x48
    HMDStereoPairDailyCountProvider *_stereoPairDailyCountProvider;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000336422
+ (id)logCategory;	// IMP=0x00000000003363f2
- (void).cxx_destruct;	// IMP=0x0000000000335f07
@property(readonly) HMDStereoPairDailyCountProvider *stereoPairDailyCountProvider; // @synthesize stereoPairDailyCountProvider=_stereoPairDailyCountProvider;
@property(retain) HMDHomeMediaSystemControllerMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) HMFMessageDispatcher *messsageDispatcher; // @synthesize messsageDispatcher=_messsageDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
@property __weak id <HMDHomeMediaSystemHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_userAssistantAccessControlDidUpdate:(id)arg1 accessories:(id)arg2;	// IMP=0x0000000000335825
- (id)_currentMediaSystemIfPrimary;	// IMP=0x0000000000335650
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000335357
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003350f2
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x0000000000335070
- (id)backingStoreObjectsForVersion:(long long)arg1;	// IMP=0x0000000000334e8c
- (void)_handleUpdateMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000334cba
- (void)_handleRemoveMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000033470d
- (void)_handleAddMediaSystemModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000003340bc
- (void)messageHandlerRemoveMediaSystem:(id)arg1 builderSession:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000333d73
- (void)messageHandlerUpdateMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000003335f3
- (void)messageHandlerAddMediaSystem:(id)arg1 configuredName:(id)arg2 leftUUID:(id)arg3 leftAccessoryUUID:(id)arg4 rightUUID:(id)arg5 rightAccessoryUUID:(id)arg6 builderSession:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000033242c
- (void)updateMediaSystemWithMessage:(id)arg1;	// IMP=0x00000000003323ba
- (id)processedMediaSystemBuilderMessageFor:(id)arg1;	// IMP=0x0000000000332337
- (id)mediaSystemForAccessory:(id)arg1;	// IMP=0x000000000033226a
- (void)configure:(id)arg1 delegate:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5;	// IMP=0x0000000000331eb6
- (id)logIdentifier;	// IMP=0x0000000000331e66
- (id)attributeDescriptions;	// IMP=0x0000000000331d16
- (id)privateDescription;	// IMP=0x0000000000331d04
- (void)removeMediaSystem:(id)arg1;	// IMP=0x0000000000331b77
- (void)updateMediaSystem:(id)arg1;	// IMP=0x00000000003319f0
- (id)mediaSystemWithUUID:(id)arg1;	// IMP=0x000000000033194a
@property(readonly, copy) NSArray *mediaSystems;
- (id)initWithMediaSystems:(id)arg1;	// IMP=0x000000000033177c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

