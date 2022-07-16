//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFServiceDeviceContextMutating-Protocol.h>

@class AFServiceDeviceContext, NSDictionary, NSString, NSUUID;

@interface _AFServiceDeviceContextMutation : NSObject <AFServiceDeviceContextMutating>
{
    AFServiceDeviceContext *_baseModel;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    NSString *_assistantIdentifier;	// 24 = 0x18
    NSString *_mediaSystemIdentifier;	// 32 = 0x20
    NSString *_mediaRouteIdentifier;	// 40 = 0x28
    NSString *_sharedUserID;	// 48 = 0x30
    NSString *_roomName;	// 56 = 0x38
    long long _proximity;	// 64 = 0x40
    NSDictionary *_serializedContextByKey;	// 72 = 0x48
    NSDictionary *_metricsContext;	// 80 = 0x50
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIdentifier:1;
        unsigned int hasAssistantIdentifier:1;
        unsigned int hasMediaSystemIdentifier:1;
        unsigned int hasMediaRouteIdentifier:1;
        unsigned int hasSharedUserID:1;
        unsigned int hasRoomName:1;
        unsigned int hasProximity:1;
        unsigned int hasSerializedContextByKey:1;
        unsigned int hasMetricsContext:1;
    } _mutationFlags;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000d9e1c
- (id)generate;	// IMP=0x00000000000d9b19
- (void)setMetricsContext:(id)arg1;	// IMP=0x00000000000d9af7
- (void)setSerializedContextByKey:(id)arg1;	// IMP=0x00000000000d9ad5
- (void)setProximity:(long long)arg1;	// IMP=0x00000000000d9ac7
- (void)setRoomName:(id)arg1;	// IMP=0x00000000000d9aa7
- (void)setSharedUserID:(id)arg1;	// IMP=0x00000000000d9a87
- (void)setMediaRouteIdentifier:(id)arg1;	// IMP=0x00000000000d9a67
- (void)setMediaSystemIdentifier:(id)arg1;	// IMP=0x00000000000d9a47
- (void)setAssistantIdentifier:(id)arg1;	// IMP=0x00000000000d9a27
- (void)setIdentifier:(id)arg1;	// IMP=0x00000000000d9a07
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000000000d999c
- (id)init;	// IMP=0x00000000000d9988

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
