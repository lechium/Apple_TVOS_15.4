//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFNaming-Protocol.h>
#import <WorkflowKit/WFParameterState-Protocol.h>

@class NSString, WFContact, WFEmailAddress, WFPhoneNumber;

@interface WFContactFieldEntry : NSObject <WFNaming, WFParameterState>
{
    long long _type;	// 8 = 0x8
    WFContact *_contact;	// 16 = 0x10
    WFPhoneNumber *_phoneNumber;	// 24 = 0x18
    WFEmailAddress *_emailAddress;	// 32 = 0x20
    NSString *_customHandle;	// 40 = 0x28
}

+ (id)processingValueClasses;	// IMP=0x0000000000067cba
- (void).cxx_destruct;	// IMP=0x0000000000067b5e
@property(readonly, nonatomic) NSString *customHandle; // @synthesize customHandle=_customHandle;
@property(readonly, nonatomic) WFEmailAddress *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) WFPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) WFContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067b21
- (id)containedVariables;	// IMP=0x0000000000067b14
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(CDUnknownBlockType)arg2 valueHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000679fc
- (id)serializedRepresentation;	// IMP=0x000000000006785c
- (id)underlyingObject;	// IMP=0x00000000000677f2
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;	// IMP=0x0000000000067464
@property(readonly, copy, nonatomic) NSString *wfName;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000672a5
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithCustomHandle:(id)arg1;	// IMP=0x000000000006708c
- (id)initWithEmailAddress:(id)arg1;	// IMP=0x0000000000066f8b
- (id)initWithPhoneNumber:(id)arg1;	// IMP=0x0000000000066e8a
- (id)initWithContact:(id)arg1;	// IMP=0x0000000000066d89
- (id)initWithHandleString:(id)arg1;	// IMP=0x0000000000067d3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

