//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProtectedCloudStorage/NSSecureCoding-Protocol.h>

@interface UserRegistryStats : NSObject <NSSecureCoding>
{
    long long _fetchRecordZoneChanges;	// 8 = 0x8
    long long _lastfetchRecordZoneChangesAtStart;	// 16 = 0x10
    long long _pushNotifications;	// 24 = 0x18
    long long _zoneReset;	// 32 = 0x20
    long long _recordFetch;	// 40 = 0x28
    long long _recordModify;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014b79
@property long long recordModify; // @synthesize recordModify=_recordModify;
@property long long recordFetch; // @synthesize recordFetch=_recordFetch;
@property long long zoneReset; // @synthesize zoneReset=_zoneReset;
@property long long pushNotifications; // @synthesize pushNotifications=_pushNotifications;
@property long long lastfetchRecordZoneChangesAtStart; // @synthesize lastfetchRecordZoneChangesAtStart=_lastfetchRecordZoneChangesAtStart;
@property long long fetchRecordZoneChanges; // @synthesize fetchRecordZoneChanges=_fetchRecordZoneChanges;
- (id)getUserRegistryStats;	// IMP=0x0000000000014f46
- (void)printUserRegistryStats:(struct __sFILE *)arg1;	// IMP=0x0000000000014dac
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014c7d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014b81

@end

