//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDebugDescriptionProviding-Protocol.h>
#import <UIKitCore/BSXPCCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringEnvironmentsContainer : NSObject <NSCopying, NSSecureCoding, BSXPCCoding, BSDebugDescriptionProviding>
{
    NSSet *_environments;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000d3781b
- (void).cxx_destruct;	// IMP=0x0000000000d37a09
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x0000000000d379b3
- (void)encodeWithXPCDictionary:(id)arg1;	// IMP=0x0000000000d37963
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d37846
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d37823
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d37810
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000d374e2
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000d37492
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000d37442
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000d373c1
- (id)succinctDescription;	// IMP=0x0000000000d37371
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d37221
- (id)init;	// IMP=0x0000000000d3705f

// Remaining properties
@property(readonly) Class superclass;

@end

