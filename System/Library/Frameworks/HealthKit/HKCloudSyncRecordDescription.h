//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKCloudSyncRecordIDDescription, NSArray, NSDate, NSNumber, NSString;

@interface HKCloudSyncRecordDescription : NSObject <NSCopying, NSSecureCoding>
{
    HKCloudSyncRecordIDDescription *_recordIDDescription;	// 8 = 0x8
    NSString *_recordType;	// 16 = 0x10
    NSNumber *_schemaVersion;	// 24 = 0x18
    NSDate *_modificationDate;	// 32 = 0x20
    NSString *_detailedDescription;	// 40 = 0x28
    NSArray *_childRecordDescriptions;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000052031
- (void).cxx_destruct;	// IMP=0x0000000000052372
@property(readonly, copy, nonatomic) NSArray *childRecordDescriptions; // @synthesize childRecordDescriptions=_childRecordDescriptions;
@property(readonly, copy, nonatomic) NSString *detailedDescription; // @synthesize detailedDescription=_detailedDescription;
@property(readonly, copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(readonly, copy, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(readonly, copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, copy, nonatomic) HKCloudSyncRecordIDDescription *recordIDDescription; // @synthesize recordIDDescription=_recordIDDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000520f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000052039
- (id)debugDescription;	// IMP=0x0000000000051fe6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000051fdb
- (id)initWithRecordIDDescription:(id)arg1 recordType:(id)arg2 schemaVersion:(id)arg3 modificationDate:(id)arg4 detailedDescription:(id)arg5 childRecordDescriptions:(id)arg6;	// IMP=0x0000000000051e7c

@end

