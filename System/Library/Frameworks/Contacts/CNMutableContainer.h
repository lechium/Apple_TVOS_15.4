//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContainer, NSData, NSDate, NSString;

@interface CNMutableContainer
{
}

- (id)freezeWithSelfAsSnapshot;	// IMP=0x00000000000c8a76
- (id)freeze;	// IMP=0x00000000000c8a4c
- (void)adoptValuesFromAndSetSnapshot:(id)arg1;	// IMP=0x00000000000c8863
@property(copy, nonatomic) CNContainer *snapshot; // @dynamic snapshot;
@property(copy, nonatomic) NSDate *lastSyncDate;
- (void)setGuardianRestricted:(_Bool)arg1 shouldPushChangeToServer:(_Bool)arg2;	// IMP=0x00000000000c8762
@property(nonatomic, getter=isGuardianStateDirty) _Bool guardianStateDirty;
@property(nonatomic, getter=isGuardianRestricted) _Bool guardianRestricted;
@property(nonatomic) unsigned long long restrictions; // @dynamic restrictions;
@property(copy, nonatomic) NSString *meIdentifier; // @dynamic meIdentifier;
@property(copy, nonatomic) NSString *constraintsPath; // @dynamic constraintsPath;
@property(copy, nonatomic) NSData *externalSyncData; // @dynamic externalSyncData;
@property(copy, nonatomic) NSString *externalSyncTag; // @dynamic externalSyncTag;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(copy, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
@property(copy, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
@property(nonatomic) int iOSLegacyIdentifier; // @dynamic iOSLegacyIdentifier;
@property(nonatomic) long long type; // @dynamic type;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
- (id)copy;	// IMP=0x00000000000c831d

@end

