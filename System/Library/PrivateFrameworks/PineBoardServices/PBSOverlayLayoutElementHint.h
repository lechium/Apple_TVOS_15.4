//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/BSDescriptionProviding-Protocol.h>
#import <PineBoardServices/NSCopying-Protocol.h>
#import <PineBoardServices/NSSecureCoding-Protocol.h>

@class NSString, PBSOverlayLayoutElementIdentifier;

@interface PBSOverlayLayoutElementHint : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding>
{
    PBSOverlayLayoutElementIdentifier *_identifier;	// 8 = 0x8
    struct CGVector _offset;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000096550
- (void).cxx_destruct;	// IMP=0x0000000000096a40
@property(readonly, copy, nonatomic) PBSOverlayLayoutElementIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) struct CGVector offset; // @synthesize offset=_offset;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000968e0
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000096840
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000096770
- (id)succinctDescription;	// IMP=0x0000000000096700
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000096670
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096570
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096530
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000096190
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 offset:(struct CGVector)arg2;	// IMP=0x0000000000095fa0
@property(readonly, nonatomic) struct CGAffineTransform transform;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

