//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_tasksByType;	// 8 = 0x8
    NSMutableDictionary *_mutableTasksByType;	// 16 = 0x10
}

+ (id)descriptionForTaskType:(long long)arg1;	// IMP=0x0000000000110932
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011092a
- (void).cxx_destruct;	// IMP=0x00000000001104da
- (id)invalidRecordIdentifiers;	// IMP=0x0000000000110477
- (id)invalidRecordScopedIdentifiers;	// IMP=0x00000000001103af
- (id)description;	// IMP=0x000000000011031f
- (id)_descriptionFromTasksByType:(id)arg1;	// IMP=0x0000000000110244
@property(readonly, nonatomic) _Bool hasTasks;
- (void)addTask:(long long)arg1 forRecordWithScopedIdentifier:(id)arg2;	// IMP=0x000000000011000a
- (void)enumerateTasksWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010ff7c
- (void)enumerateScopedTasksWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010fed1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010fe68
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010fe0e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010fd66
- (id)initEmpty;	// IMP=0x000000000010fd37
- (void)_commitTasks;	// IMP=0x000000000010fcb5

@end

