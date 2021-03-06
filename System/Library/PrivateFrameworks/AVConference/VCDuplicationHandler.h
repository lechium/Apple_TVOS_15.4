//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCDuplicationHandler : NSObject
{
    unsigned char _duplicationState;	// 8 = 0x8
    unsigned char _duplicationReason;	// 9 = 0x9
    _Bool _moreThanOneConnectionAvailable;	// 10 = 0xa
    CDStruct_634abacb _localAlertInfo;	// 11 = 0xb
    CDStruct_634abacb _remoteAlertInfo;	// 15 = 0xf
    _Bool _allowDuplication;	// 19 = 0x13
    _Bool _forceDisableDuplication;	// 20 = 0x14
    _Bool _isRemotePreAzul;	// 21 = 0x15
    _Bool _iRATDuplicationEnabled;	// 22 = 0x16
}

@property _Bool allowDuplication; // @synthesize allowDuplication=_allowDuplication;
@property _Bool iRATDuplicationEnabled; // @synthesize iRATDuplicationEnabled=_iRATDuplicationEnabled;
@property _Bool isRemotePreAzul; // @synthesize isRemotePreAzul=_isRemotePreAzul;
@property(readonly) unsigned char duplicationReason; // @synthesize duplicationReason=_duplicationReason;
- (_Bool)isDuplicationDueToWRMSuggestion;	// IMP=0x00000000002c65fa
- (void)shareLocalInterfacePreferenceWithPeerDuringActiveDuplicationForEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c64de
- (void)updateDuplicationStateForRemoteDuplicationChanged:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2 updateAlertState:(_Bool)arg3;	// IMP=0x00000000002c6177
- (void)updateDuplicationStateForMediaHealthRecovered:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c5ff9
- (void)updateDuplicationStateForMediaHealthUnrecoverable:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c5e7b
- (_Bool)updateDuplicationStateWithAlertInfo:(_Bool)arg1;	// IMP=0x00000000002c5bb8
- (void)updateDuplicationStateForConnectionArrayUpdatedEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c5aed
- (void)updateDuplicationStateForAlertStateUpdatedEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c5aa4
- (void)updateDuplicationStateForTurnOnDuplicationForHandoverEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c585b
- (void)updateDuplicationStateForTurnOffDuplicationForHandoverEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c5629
- (void)stopRemoteDuplicationAndUpdateResult:(CDStruct_7641bd18 *)arg1 updateAlertState:(_Bool)arg2;	// IMP=0x00000000002c53b7
- (void)updateDuplicationStateForRemoteWRMSuggestingWiFiEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c529b
- (void)updateDuplicationStateForLocalWRMSuggestingWiFiEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c504f
- (void)updateDuplicationStateForLocalWRMSuggestingCellularEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c4df7
- (void)updateDuplicationStateForReceivingPacketsUpdateEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c4dca
- (void)updateDuplicationStateForMissingPacketsUpdateEvent:(CDStruct_9629e118)arg1 updateResult:(CDStruct_7641bd18 *)arg2;	// IMP=0x00000000002c4d92
- (void)disableDuplication;	// IMP=0x00000000002c4cd3
- (void)enableDuplication;	// IMP=0x00000000002c4a70
- (CDStruct_7641bd18)handleDuplicationStateUpdateEvent:(CDStruct_9629e118)arg1;	// IMP=0x00000000002c4932
@property(readonly) _Bool isDuplicationPending;
@property(readonly) _Bool isDuplicationEnabled;
- (id)init;	// IMP=0x00000000002c48a4

@end

