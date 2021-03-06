//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/BSDescriptionProviding-Protocol.h>
#import <PineBoardServices/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface PBSVideoSubscriberAccountApplicationInstallMetadata : NSObject <BSDescriptionProviding, NSCopying>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_vendorName;	// 16 = 0x10
    NSString *_buyParameters;	// 24 = 0x18
    NSString *_bagKey;	// 32 = 0x20
    NSNumber *_installPosition;	// 40 = 0x28
    NSArray *_additionalInstalls;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000ad4f0
@property(readonly, nonatomic) NSArray *additionalInstalls; // @synthesize additionalInstalls=_additionalInstalls;
@property(readonly, nonatomic) NSNumber *installPosition; // @synthesize installPosition=_installPosition;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property(copy, nonatomic) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000ad1b0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000ad110
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000ad080
- (id)succinctDescription;	// IMP=0x00000000000ad010
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ac990
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ac810
- (id)dictionaryRepresentation;	// IMP=0x00000000000ab7b0
- (id)init;	// IMP=0x00000000000ab750
- (id)initWithMetadata:(id)arg1;	// IMP=0x00000000000ab260
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000aa940
- (id)initWithInstallPosition:(id)arg1 additionalInstalls:(id)arg2;	// IMP=0x00000000000aa0d0

// Remaining properties
@property(readonly) Class superclass;

@end

