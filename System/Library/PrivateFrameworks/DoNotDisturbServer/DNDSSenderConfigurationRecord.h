//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class DNDSBypassSettingsRecord, NSSet, NSString;

@interface DNDSSenderConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    NSSet *_allowedContactTypes;	// 8 = 0x8
    NSSet *_deniedContactTypes;	// 16 = 0x10
    NSSet *_allowedContactGroups;	// 24 = 0x18
    NSSet *_deniedContactGroups;	// 32 = 0x20
    NSSet *_allowedContacts;	// 40 = 0x28
    NSSet *_deniedContacts;	// 48 = 0x30
    DNDSBypassSettingsRecord *_phoneCallBypassSettings;	// 56 = 0x38
}

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x00000000000786f9
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;	// IMP=0x00000000000786e3
- (void).cxx_destruct;	// IMP=0x0000000000079349
@property(readonly, copy, nonatomic) DNDSBypassSettingsRecord *phoneCallBypassSettings; // @synthesize phoneCallBypassSettings=_phoneCallBypassSettings;
@property(readonly, copy, nonatomic) NSSet *deniedContacts; // @synthesize deniedContacts=_deniedContacts;
@property(readonly, copy, nonatomic) NSSet *allowedContacts; // @synthesize allowedContacts=_allowedContacts;
@property(readonly, copy, nonatomic) NSSet *deniedContactGroups; // @synthesize deniedContactGroups=_deniedContactGroups;
@property(readonly, copy, nonatomic) NSSet *allowedContactGroups; // @synthesize allowedContactGroups=_allowedContactGroups;
@property(readonly, copy, nonatomic) NSSet *deniedContactTypes; // @synthesize deniedContactTypes=_deniedContactTypes;
@property(readonly, copy, nonatomic) NSSet *allowedContactTypes; // @synthesize allowedContactTypes=_allowedContactTypes;
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x0000000000078ceb
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000786b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000786aa
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077e7f
@property(readonly) unsigned long long hash;
- (id)_initWithAllowedContactTypes:(id)arg1 deniedContactTypes:(id)arg2 allowedContactGroups:(id)arg3 deniedContactGroups:(id)arg4 allowedContacts:(id)arg5 deniedContacts:(id)arg6 phoneCallBypassSettings:(id)arg7;	// IMP=0x0000000000077a49
- (id)_initWithRecord:(id)arg1;	// IMP=0x00000000000778f2
- (id)init;	// IMP=0x00000000000778de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

