//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSMutableCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface BKSTouchAuthenticationSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable>
{
    NSSet *_displays;	// 8 = 0x8
    unsigned int _slotID;	// 16 = 0x10
    unsigned long long _authenticationMessageContext;	// 24 = 0x18
    unsigned long long _hitTestInformationMask;	// 32 = 0x20
}

+ (id)protobufSchema;	// IMP=0x000000000001d957
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d94f
+ (id)new;	// IMP=0x000000000001d8b9
+ (id)buildSpecification:(CDUnknownBlockType)arg1;	// IMP=0x000000000001d848
- (void).cxx_destruct;	// IMP=0x000000000001d6df
@property(readonly, nonatomic) unsigned long long hitTestInformationMask; // @synthesize hitTestInformationMask=_hitTestInformationMask;
@property(readonly, nonatomic) unsigned long long authenticationMessageContext; // @synthesize authenticationMessageContext=_authenticationMessageContext;
@property(readonly, nonatomic) unsigned int slotID; // @synthesize slotID=_slotID;
@property(readonly, copy, nonatomic) NSSet *displays; // @synthesize displays=_displays;
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x000000000001d5d5
- (id)initForProtobufDecoding;	// IMP=0x000000000001d5cb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d530
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d1dd
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d1b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001d191
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d0df
@property(readonly) unsigned long long hash;
- (id)init;	// IMP=0x000000000001cf1c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
