//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSDictionary, NSMutableSet, NSSet, NSString;

@interface IDSFamilyService <IDSDaemonListenerProtocol>
{
    NSMutableSet *familyHandles;	// 16 = 0x10
    NSString *listenerID;	// 24 = 0x18
    NSSet *_familyMembers;	// 32 = 0x20
    NSDictionary *_dsidToFamilyMember;	// 40 = 0x28
    NSDictionary *_dsidToDeviceList;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000040d77
@property(retain, nonatomic) NSDictionary *dsidToDeviceList; // @synthesize dsidToDeviceList=_dsidToDeviceList;
@property(retain, nonatomic) NSDictionary *dsidToFamilyMember; // @synthesize dsidToFamilyMember=_dsidToFamilyMember;
@property(retain, nonatomic) NSSet *familyMembers; // @synthesize familyMembers=_familyMembers;
- (void)service:(id)arg1 familyInfoUpdated:(id)arg2;	// IMP=0x00000000000409cd
- (void)fetchFamilyMembersWithDevices:(CDUnknownBlockType)arg1;	// IMP=0x00000000000401fb
- (id)familyHandles;	// IMP=0x0000000000040090
- (_Bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x000000000003ffc1
- (_Bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x000000000003fed6
- (_Bool)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x000000000003fe07
- (_Bool)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x000000000003fd38
- (_Bool)isValidDestination:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003f868

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
