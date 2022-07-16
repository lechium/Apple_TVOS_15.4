//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>

@class CKContainer, CKContainerID, NSArray, NSDate, NSDictionary, NSString;
@protocol OS_xpc_object;

@interface CKSchedulerActivity : NSObject <NSCopying>
{
    _Bool _shouldDefer;	// 8 = 0x8
    _Bool _userRequestedBackupTask;	// 9 = 0x9
    NSObject<OS_xpc_object> *_xpcActivityCriteriaOverrides;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    long long _priority;	// 32 = 0x20
    unsigned long long _expectedTransferSizeBytes;	// 40 = 0x28
    NSDate *_earliestStartDate;	// 48 = 0x30
    CKContainer *_container;	// 56 = 0x38
    CKContainerID *_containerID;	// 64 = 0x40
    NSObject<OS_xpc_object> *_xpcActivity;	// 72 = 0x48
    NSArray *_relatedApplicationBundleIdentifiers;	// 80 = 0x50
}

+ (id)defaultRelatedApplicationBundleIdentifiersForContainer:(id)arg1;	// IMP=0x00000000000aa3c0
- (void).cxx_destruct;	// IMP=0x00000000000ab443
@property(copy, nonatomic) NSArray *relatedApplicationBundleIdentifiers; // @synthesize relatedApplicationBundleIdentifiers=_relatedApplicationBundleIdentifiers;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcActivity; // @synthesize xpcActivity=_xpcActivity;
@property(nonatomic) _Bool userRequestedBackupTask; // @synthesize userRequestedBackupTask=_userRequestedBackupTask;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(copy, nonatomic) NSDate *earliestStartDate; // @synthesize earliestStartDate=_earliestStartDate;
@property(nonatomic) unsigned long long expectedTransferSizeBytes; // @synthesize expectedTransferSizeBytes=_expectedTransferSizeBytes;
@property(nonatomic) _Bool shouldDefer; // @synthesize shouldDefer=_shouldDefer;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ab144
@property(copy, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides; // @synthesize xpcActivityCriteriaOverrides=_xpcActivityCriteriaOverrides;
@property(copy, nonatomic) NSDictionary *undeprecatedAdditionalXPCActivityCriteria;
@property(copy, nonatomic) NSDictionary *additionalXPCActivityCriteria;
@property(readonly, nonatomic) CKContainer *nullableContainer;
- (id)description;	// IMP=0x00000000000aabbd
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;	// IMP=0x00000000000aa7bb
- (id)initWithIdentifier:(id)arg1 container:(id)arg2 priority:(long long)arg3;	// IMP=0x00000000000aa723
- (id)initWithIdentifier:(id)arg1 containerID:(id)arg2 priority:(long long)arg3;	// IMP=0x00000000000aa709
- (id)initWithIdentifier:(id)arg1 container:(id)arg2 containerID:(id)arg3 priority:(long long)arg4;	// IMP=0x00000000000aa167

@end

