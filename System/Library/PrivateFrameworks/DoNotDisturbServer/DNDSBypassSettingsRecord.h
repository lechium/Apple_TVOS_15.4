//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreRecord-Protocol.h>
#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class NSNumber, NSString;

@interface DNDSBypassSettingsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>
{
    NSNumber *_immediateBypassEventSourceType;	// 8 = 0x8
    NSString *_immediateBypassCNGroupIdentifier;	// 16 = 0x10
    NSNumber *_repeatEventSourceBehaviorEnabledSetting;	// 24 = 0x18
}

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;	// IMP=0x000000000001362f
+ (id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;	// IMP=0x0000000000013619
+ (id)recordForLegacyPrivilegedSenderType:(unsigned long long)arg1 legacyAddressBookID:(int)arg2;	// IMP=0x000000000006e27d
+ (id)_recordWithEncodedInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006e185
- (void).cxx_destruct;	// IMP=0x0000000000013840
@property(readonly, copy, nonatomic) NSNumber *repeatEventSourceBehaviorEnabledSetting; // @synthesize repeatEventSourceBehaviorEnabledSetting=_repeatEventSourceBehaviorEnabledSetting;
@property(readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier; // @synthesize immediateBypassCNGroupIdentifier=_immediateBypassCNGroupIdentifier;
@property(readonly, copy, nonatomic) NSNumber *immediateBypassEventSourceType; // @synthesize immediateBypassEventSourceType=_immediateBypassEventSourceType;
- (id)dictionaryRepresentationWithContext:(id)arg1;	// IMP=0x0000000000013732
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000135eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000135e0
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001321b
@property(readonly) unsigned long long hash;
- (id)_initWithImmediateBypassEventSourceType:(id)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(id)arg3;	// IMP=0x0000000000013041
- (id)_initWithRecord:(id)arg1;	// IMP=0x0000000000012f83
- (id)init;	// IMP=0x0000000000012f6f
- (unsigned long long)legacyPrivilegedSenderType;	// IMP=0x000000000006e48b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
