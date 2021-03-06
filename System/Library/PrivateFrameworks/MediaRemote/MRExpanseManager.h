//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/TUConversationManagerDelegate-Protocol.h>

@class AVAudioSession, NSHashTable, NSString, TUConversationManager, TUNeighborhoodActivityConduit;
@protocol OS_dispatch_queue;

@interface MRExpanseManager : NSObject <TUConversationManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    TUConversationManager *_conversationManager;	// 32 = 0x20
    TUNeighborhoodActivityConduit *_conduit;	// 40 = 0x28
    AVAudioSession *_auxiliaryPlaybackAudioSession;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x00000000000468c8
- (void).cxx_destruct;	// IMP=0x000000000004704f
@property(retain, nonatomic) AVAudioSession *auxiliaryPlaybackAudioSession; // @synthesize auxiliaryPlaybackAudioSession=_auxiliaryPlaybackAudioSession;
@property(readonly, nonatomic) TUNeighborhoodActivityConduit *conduit; // @synthesize conduit=_conduit;
@property(readonly, nonatomic) TUConversationManager *conversationManager; // @synthesize conversationManager=_conversationManager;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000046f62
- (void)addObserver:(id)arg1;	// IMP=0x0000000000046ec2
- (void)removeTelevisionWithRouteIdentifierFromSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046e55
- (void)addTelevisionWithRouteIdentifierToSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000046de8
@property(readonly, nonatomic) _Bool expanseSessionHasRemoteActivity;
@property(readonly, nonatomic) _Bool expanseSessionHasActiveActivity;
@property(readonly, nonatomic) _Bool expanseSessionActive;
@property(readonly, nonatomic) _Bool expanseHandoffSupported;
- (id)activeConversation;	// IMP=0x0000000000046b0d
- (_Bool)deviceIsActiveTelevision:(id)arg1;	// IMP=0x0000000000046b05
@property(readonly, nonatomic) NSString *activeTelevisionRouteID;
- (_Bool)activeActivityExistsForBundle:(id)arg1;	// IMP=0x0000000000046af5
- (void)dealloc;	// IMP=0x0000000000046a87
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000004697d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

