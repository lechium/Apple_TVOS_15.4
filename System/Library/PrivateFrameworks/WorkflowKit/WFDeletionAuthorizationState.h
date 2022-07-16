//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>
#import <WorkflowKit/WFSerializableContent-Protocol.h>

@class NSString;

@interface WFDeletionAuthorizationState : NSObject <WFSerializableContent, NSSecureCoding>
{
    NSString *_status;	// 8 = 0x8
    NSString *_contentItemClassName;	// 16 = 0x10
    NSString *_actionUUID;	// 24 = 0x18
    unsigned long long _count;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006fd91
+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x000000000006fa6e
+ (id)stateFromDatabaseData:(id)arg1;	// IMP=0x000000000006f89c
+ (id)deniedPermissionsErrorForContentItemClass:(Class)arg1;	// IMP=0x000000000006f66c
- (void).cxx_destruct;	// IMP=0x000000000006f639
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *actionUUID; // @synthesize actionUUID=_actionUUID;
@property(readonly, copy, nonatomic) NSString *contentItemClassName; // @synthesize contentItemClassName=_contentItemClassName;
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
- (id)siriActionToolDescription;	// IMP=0x000000000006f57d
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f39c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006f294
- (id)wfSerializedRepresentation;	// IMP=0x000000000006f116
- (id)databaseDataWithError:(id *)arg1;	// IMP=0x000000000006f0a6
- (id)deniedPermissionsError;	// IMP=0x000000000006f034
- (id)localizedExfiltrationRestrictedError;	// IMP=0x000000000006ec4b
- (id)stateWithStatus:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000006eb95
- (id)initWithStatus:(id)arg1 contentItemClassName:(id)arg2 actionUUID:(id)arg3 count:(unsigned long long)arg4;	// IMP=0x000000000006e9a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
