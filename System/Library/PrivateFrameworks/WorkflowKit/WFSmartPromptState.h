//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/NSSecureCoding-Protocol.h>
#import <WorkflowKit/WFSerializableContent-Protocol.h>

@class NSString, WFContentAttribution, WFContentDestination;

@interface WFSmartPromptState : NSObject <WFSerializableContent, NSSecureCoding>
{
    WFContentAttribution *_sourceContentAttribution;	// 8 = 0x8
    NSString *_mode;	// 16 = 0x10
    NSString *_actionUUID;	// 24 = 0x18
    WFContentDestination *_contentDestination;	// 32 = 0x20
    NSString *_status;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000010c669
+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x000000000010c1fa
+ (id)localizedUnsupportedEnvironmentError;	// IMP=0x000000000010c11b
+ (id)localizedDeniedPermissionsErrorWithContentDestination:(id)arg1;	// IMP=0x000000000010bfd7
+ (id)stateFromDatabaseData:(id)arg1;	// IMP=0x000000000010be05
- (void).cxx_destruct;	// IMP=0x000000000010bdbc
@property(readonly, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, nonatomic) WFContentDestination *contentDestination; // @synthesize contentDestination=_contentDestination;
@property(readonly, nonatomic) NSString *actionUUID; // @synthesize actionUUID=_actionUUID;
@property(readonly, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) WFContentAttribution *sourceContentAttribution; // @synthesize sourceContentAttribution=_sourceContentAttribution;
- (id)siriActionToolDescription;	// IMP=0x000000000010bc9e
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010ba1e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010b8d2
- (id)stateByReplacingAccountWithAppOrigin;	// IMP=0x000000000010b7a4
- (_Bool)matches:(id)arg1 ignoringAccountData:(_Bool)arg2;	// IMP=0x000000000010b43d
- (_Bool)matches:(id)arg1;	// IMP=0x000000000010b429
- (id)wfSerializedRepresentation;	// IMP=0x000000000010b11e
- (id)localizedExfiltrationRestrictedError;	// IMP=0x000000000010af35
- (id)localizedDeniedPermissionsError;	// IMP=0x000000000010aecb
- (id)databaseDataWithError:(id *)arg1;	// IMP=0x000000000010ae5b
- (id)stateWithStatus:(id)arg1 actionUUID:(id)arg2;	// IMP=0x000000000010ad5b
- (id)stateWithStatus:(id)arg1;	// IMP=0x000000000010acde
- (id)initWithMode:(id)arg1 sourceContentAttribution:(id)arg2 actionUUID:(id)arg3 contentDestination:(id)arg4 status:(id)arg5;	// IMP=0x000000000010abca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

