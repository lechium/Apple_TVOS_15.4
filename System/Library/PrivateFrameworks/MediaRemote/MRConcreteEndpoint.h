//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRAVOutputDevice, MRExternalDevice, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRConcreteEndpoint
{
    NSString *_uniqueIdentifier;	// 8 = 0x8
    NSArray *_outputDevices;	// 16 = 0x10
    MRExternalDevice *_externalDevice;	// 24 = 0x18
    MRAVOutputDevice *_designatedGroupLeader;	// 32 = 0x20
    long long _connectionType;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000013684
- (_Bool)canModifyGroupMembership;	// IMP=0x00000000000133a8
- (_Bool)isProxyGroupPlayer;	// IMP=0x00000000000131ab
- (void)setExternalDevice:(id)arg1;	// IMP=0x00000000000130cd
- (id)externalDevice;	// IMP=0x0000000000012fcb
@property(copy, nonatomic) NSArray *outputDevices;
- (id)uniqueIdentifier;	// IMP=0x0000000000012b78
- (long long)connectionType;	// IMP=0x0000000000012b67
- (id)designatedGroupLeader;	// IMP=0x0000000000012b52
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2 preferredSuffix:(id)arg3 connectionType:(long long)arg4;	// IMP=0x00000000000126a5
- (id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2 preferredSuffix:(id)arg3;	// IMP=0x00000000000124dd

@end

