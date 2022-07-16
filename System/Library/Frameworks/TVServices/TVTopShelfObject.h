//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/BSDescriptionProviding-Protocol.h>
#import <TVServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface TVTopShelfObject : NSObject <BSDescriptionProviding, NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000056f07
+ (id)new;	// IMP=0x0000000000056654
- (void).cxx_destruct;	// IMP=0x0000000000056f28
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056d64
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000056bee
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000056b9c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000056a83
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000056a6f
- (id)succinctDescription;	// IMP=0x0000000000056a1f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056710
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0000000000056629
- (id)_init;	// IMP=0x00000000000565fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

